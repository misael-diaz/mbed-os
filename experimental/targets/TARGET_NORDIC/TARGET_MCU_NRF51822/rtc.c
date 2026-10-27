/*

MIT License

Copyright (c) 2026 Misael Diaz-Maldonado

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

// This implementation only starts the Real-Time Counter (RTC) number 2 of the Nordic
// NRF51 family boards. Calling the rtc_read() returns the value of the seconds, which
// equals the value of the COUNTER register divided by the frequency of the RTC. Counter
// overflow is taken into account.
//
// POSSIBLE CAVEATS:
// we are assuming that there are no hardware bugs when reading the RTC, read the
// rtc_api.h for more info.

#include <time.h>
#include "device/nrf51.h"

static time_t const unit = (1 << 24);
static time_t const mask = ((1 << 24) - 1);
static int rtc_started = 0;
static time_t prev_tick = 0;
static time_t ref_tick = 0;
static time_t off_tick = 0;
static time_t overflows = 0;

void rtc_init(void) {

	if (rtc_started) {
		return;
	}

	if (!NRF_RTC2->TASKS_START) {
		NRF_RTC2->PRESCALER = 0;
		NRF_RTC2->TASKS_START = 1;
		rtc_started = 1;
	}

	return;
}

// RTC should not be stopped
void rtc_free(void) {
	return;
}

int rtc_isenabled(void) {
	return rtc_started;
}

time_t rtc_read(void) {
	time_t ret = 0;
	time_t curr_tick = (NRF_RTC2->COUNTER);
	if ((prev_tick & mask) > (curr_tick & mask)) {
		++overflows;
	}
	curr_tick += (overflows * unit);
	prev_tick = curr_tick;
	ret = (off_tick + (curr_tick - ref_tick)) >> 15;
	return ret;
}

void rtc_write(time_t t) {
	time_t ref_tick = (NRF_RTC2->COUNTER);
	if ((prev_tick & mask) > (ref_tick & mask)) {
		++overflows;
	}
	ref_tick += (overflows * unit);
	off_tick = (t << 15);
	return;
}
