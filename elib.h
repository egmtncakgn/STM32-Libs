// Bu kod yanlıca uart1 için yazılmıştır.

#ifndef ELIB_H
#define ELIB_H

#include "stm32f1xx_hal.h"
#include <string.h>

void Elib_init(UART_HandleTypeDef ua);
void SerialPrint(char *mesaj);
void Delay(int sure);

#endif
