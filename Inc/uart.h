

#ifndef UART_H_
#define UART_H_
#include <stdio.h> // Para poder usar printf()
#include "stm32f4xx.h"

void uart2_rx_tx_init(void);
char uart2_read(void);
#endif /* UART_H_ */
