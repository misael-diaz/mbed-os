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

$(MBED_BOARD_OBJ): $(MBED_BOARD_SRC)
	$(CC) $(CCOPT) -c $(MBED_BOARD_SRC) -o $(MBED_BOARD_OBJ)

$(MBED_CRITICAL_OBJ): $(MBED_CRITICAL_SRC)
	$(CC) $(CCOPT) -c $(MBED_CRITICAL_SRC) -o $(MBED_CRITICAL_OBJ)

$(MBED_ERROR_OBJ): $(MBED_ERROR_SRC)
	$(CC) $(CCOPT) -c $(MBED_ERROR_SRC) -o $(MBED_ERROR_OBJ)

clean:
	rm -f *.obj
