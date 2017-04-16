/*
 * uart.h
 *
 *  Created on: 16 Apr 2017
 *      Author: M.Karda? - ATNEL
 */
#ifndef UART_UART_H_
#define UART_UART_H_

#include <avr/io.h>
#include <avr/interrupt.h>

#define BAUD 9600
#define MYBAUD F_CPU/16/BAUD-1

void uartInit(unsigned int ubrr);
void uartTx(uint8_t data);


#endif /* UART_UART_H_ */
