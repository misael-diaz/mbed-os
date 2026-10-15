#!/usr/bin/make
#
# mbed-os-fork			Oct 16, 2026
#
# source: Makefile
# author: @misael-diaz
#
# Synopsis:
# Defines the Makefile for building the program with GNU make.
#
# Copyright (c) 2026 Misael Díaz-Maldonado
#
# This file is released under the GNU General Public License version 2 only
# as published by the Free Software Foundation.
#

include make-inc

all: $(OBJS)

$(MBED_ASSERT_OBJ): $(MBED_ASSERT_SRC)
	$(CC) $(CCOPT) -c $(MBED_ASSERT_SRC) -o $(MBED_ASSERT_OBJ)

$(MBED_ATOMIC_OBJ): $(MBED_ATOMIC_SRC)
	$(CC) $(CCOPT) -c $(MBED_ATOMIC_SRC) -o $(MBED_ATOMIC_OBJ)

$(MBED_BOARD_OBJ): $(MBED_BOARD_SRC)
	$(CC) $(CCOPT) -c $(MBED_BOARD_SRC) -o $(MBED_BOARD_OBJ)

$(MBED_CRITICAL_OBJ): $(MBED_CRITICAL_SRC)
	$(CC) $(CCOPT) -c $(MBED_CRITICAL_SRC) -o $(MBED_CRITICAL_OBJ)

$(MBED_ERROR_OBJ): $(MBED_ERROR_SRC)
	$(CC) $(CCOPT) -c $(MBED_ERROR_SRC) -o $(MBED_ERROR_OBJ)

$(MBED_ERROR_HIST_OBJ): $(MBED_ERROR_HIST_SRC)
	$(CC) $(CCOPT) -c $(MBED_ERROR_HIST_SRC) -o $(MBED_ERROR_HIST_OBJ)

$(MBED_INTERFACE_OBJ): $(MBED_INTERFACE_SRC)
	$(CC) $(CCOPT) -c $(MBED_INTERFACE_SRC) -o $(MBED_INTERFACE_OBJ)

$(MBED_MKTIME_OBJ): $(MBED_MKTIME_SRC)
	$(CC) $(CCOPT) -c $(MBED_MKTIME_SRC) -o $(MBED_MKTIME_OBJ)

$(MBED_MPU_MGMT_OBJ): $(MBED_MPU_MGMT_SRC)
	$(CC) $(CCOPT) -c $(MBED_MPU_MGMT_SRC) -o $(MBED_MPU_MGMT_OBJ)

$(MBED_POWER_MGMT_OBJ): $(MBED_POWER_MGMT_SRC)
	$(CC) $(CCOPT) -c $(MBED_POWER_MGMT_SRC) -o $(MBED_POWER_MGMT_OBJ)

$(MBED_SEMIHOST_API_OBJ): $(MBED_SEMIHOST_API_SRC)
	$(CC) $(CCOPT) -c $(MBED_SEMIHOST_API_SRC) -o $(MBED_SEMIHOST_API_OBJ)

clean:
	rm -f *.obj
