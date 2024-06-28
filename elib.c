#include "elib.h"
#include "main.h"

UART_HandleTypeDef elib_uart;

void Elib_init(UART_HandleTypeDef ua){
    elib_uart = ua;
}
/// @brief UART 1'den seriale veri yazan fonksiyon
/// @param Mesaj 
void SerialPrint(char *mesaj){
    HAL_UART_Transmit(&elib_uart, (uint8_t*)mesaj, strlen(mesaj), 100);
}

/// @brief UART 1'den seriale veri yazan fonksiyon
/// @param Mesaj
void SerialPrintln(char *mesaj){
    SerialPrint(mesaj);
    SerialPrint("\n\r");
}
void Delay(int sure){
	HAL_Delay(sure);
}

