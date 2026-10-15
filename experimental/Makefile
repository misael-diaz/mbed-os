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

all: target platform-code

target:
	@$(MAKE) -C targets

platform-code:
	@$(MAKE) -C platform 

clean:
	@$(MAKE) -C targets clean
	@$(MAKE) -C platform clean
