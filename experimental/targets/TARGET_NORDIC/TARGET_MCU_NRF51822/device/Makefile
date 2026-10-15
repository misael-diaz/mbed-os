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

$(SYSTEM_NRF51_OBJ): $(SYSTEM_NRF51_SRC)
	$(CC) $(CCOPT) -c $(SYSTEM_NRF51_SRC) -o $(SYSTEM_NRF51_OBJ)

clean:
	rm -f *.obj
