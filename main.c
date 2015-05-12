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

int main(void) {

//	setup_spi(SPI_MASTER | SPI_H_TO_L | SPI_CLK_DIV_4);
	setup_spi(SPI_MASTER | SPI_H_TO_L | SPI_CLK_DIV_16);

	while (true) {

		putc(0x55);
		spi_write(0x55);
		output_toggle(PIN_B0);
		delay_ms(1000);
	}

	return 0;
}
