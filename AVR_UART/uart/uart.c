/*
 * uart.c
 *
 *  Created on: 16 Apr 2017
 *      Author: M.Karda? - ATNEL
 */
#include "uart.h"

#include <avr/io.h>
#include <avr/interrupt.h>


void uartInit(unsigned int ubrr)
{
	UBRR0H = (unsigned char) (ubrr >> 8);
	UBRR0L = (unsigned char) ubrr;

	UCSR0B = (1 << RXEN0) | (1 << TXEN0);
	UCSR0C = (1<<USBS0) | (3 << UCSZ00);
}

void uartTx(uint8_t data)
{
	while(!(UCSR0A & (1<<UDRE0)));

	UDR0 = data;
}
