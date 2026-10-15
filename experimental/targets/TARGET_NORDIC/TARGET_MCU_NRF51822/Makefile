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

all: dev $(OBJS)

dev:
	@$(MAKE) -C device

$(ANALOGIN_API_OBJ): $(ANALOGIN_API_SRC)
	$(CC) $(CCOPT) -c $(ANALOGIN_API_SRC) -o $(ANALOGIN_API_OBJ)

$(GPIO_API_OBJ): $(GPIO_API_SRC)
	$(CC) $(CCOPT) -c $(GPIO_API_SRC) -o $(GPIO_API_OBJ)

$(GPIO_IRQ_API_OBJ): $(GPIO_IRQ_API_SRC)
	$(CC) $(CCOPT) -c $(GPIO_IRQ_API_SRC) -o $(GPIO_IRQ_API_OBJ)

$(I2C_API_OBJ): $(I2C_API_SRC)
	$(CC) $(CCOPT) -c $(I2C_API_SRC) -o $(I2C_API_OBJ)

$(PINMAP_OBJ): $(PINMAP_SRC)
	$(CC) $(CCOPT) -c $(PINMAP_SRC) -o $(PINMAP_OBJ)

$(PORT_API_OBJ): $(PORT_API_SRC)
	$(CC) $(CCOPT) -c $(PORT_API_SRC) -o $(PORT_API_OBJ)

$(PWMOUT_API_OBJ): $(PWMOUT_API_SRC)
	$(CC) $(CCOPT) -c $(PWMOUT_API_SRC) -o $(PWMOUT_API_OBJ)

$(SERIAL_API_OBJ): $(SERIAL_API_SRC)
	$(CC) $(CCOPT) -c $(SERIAL_API_SRC) -o $(SERIAL_API_OBJ)

$(SLEEP_OBJ): $(SLEEP_SRC)
	$(CC) $(CCOPT) -c $(SLEEP_SRC) -o $(SLEEP_OBJ)

$(SPI_API_OBJ): $(SPI_API_SRC)
	$(CC) $(CCOPT) -c $(SPI_API_SRC) -o $(SPI_API_OBJ)

$(US_TICKER_OBJ): $(US_TICKER_SRC)
	$(CC) $(CCOPT) -c $(US_TICKER_SRC) -o $(US_TICKER_OBJ)

clean:
	@$(MAKE) -C device clean
	rm -f *.obj
