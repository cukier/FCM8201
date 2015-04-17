/*
 * main.c
 *
 *  Created on: 02/04/2015
 *      Author: cuki
 */

#include <18F25K22.h>

#fuses HSH, NOPLLEN

#use delay(clock=15MHz)
#use rs232(baud=9600, uart1)
#use spi(MASTER, SPI1,  BAUD=9600, MODE=1, FORCE_HW)

int main(void) {

	while (true) {

		putc(0x55);
		spi_write(0x55);
		delay_ms(1000);
	}

	return 0;
}
