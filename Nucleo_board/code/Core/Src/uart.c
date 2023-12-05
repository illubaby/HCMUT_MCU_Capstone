/*
 * uart.c
 *
 *  Created on: Dec 5, 2023
 *      Author: Admin
 */
#include "uart.h"
char strr[30];
int red_time_change =0;
int green_time_change =0;
int yellow_time_change =0;
int state_uart =0;
void print_statement(){
	switch (status){
		case AUTO_RED_GREEN:
			if(red_time_change != red_time_cd){
				sprintf( strr , "\r\n!RED_AUTO=%u#\r\n", red_time_cd );
				HAL_UART_Transmit (&huart2 , (uint8_t *) strr, strlen( strr), 20);
				red_time_change = red_time_cd;
			}
			break;
		case AUTO_RED_YELLOW:
			if(red_time_change != red_time_cd){
				sprintf( strr , "\r\n!RED_AUTO=%u#\r\n", red_time_cd );
				HAL_UART_Transmit (&huart2 , (uint8_t *) strr, strlen( strr), 20);
				red_time_change = red_time_cd;
			}
			break;
		case AUTO_GREEN_RED:
			if(green_time_change != green_time_cd){
				sprintf( strr , "\r\n!GREEN_AUTO=%u#\r\n", green_time_cd );
				HAL_UART_Transmit (&huart2 , (uint8_t *) strr, strlen( strr), 20);
				green_time_change = green_time_cd;
			}
			break;
		case AUTO_YELLOW_RED:
			if(yellow_time_change != yellow_time_cd){
				sprintf( strr , "\r\n!YELLOW_AUTO=%u#\r\n", yellow_time_cd);
				HAL_UART_Transmit (&huart2 , (uint8_t *) strr, strlen( strr), 20);
				yellow_time_change = yellow_time_cd;
			}
			break;
		case MANUAL_INIT:
			if(state_buzzer != MANUAL_INIT){
				sprintf( strr , "\r\n!MANUAL_INIT_MODE\r\n");
				HAL_UART_Transmit (&huart2 , (uint8_t *) strr, strlen( strr), 20);
				state_buzzer = MANUAL_INIT;
			}
			break;
		case MANUAL_RED:
			if(state_buzzer != MANUAL_RED){
				sprintf( strr , "\r\n!MANUAL_RED_MODE\r\n");
				HAL_UART_Transmit (&huart2 , (uint8_t *) strr, strlen( strr), 20);
				state_buzzer = MANUAL_RED;
			}
			break;
		case MANUAL_YELLOW:
			if(state_buzzer != MANUAL_YELLOW){
				sprintf( strr , "\r\n!MANUAL_YELLOW_MODE\r\n");
				HAL_UART_Transmit (&huart2 , (uint8_t *) strr, strlen( strr), 20);
				state_buzzer = MANUAL_YELLOW;
			}
			break;
		case MANUAL_GREEN:
			if(state_buzzer != MANUAL_GREEN){
				sprintf( strr , "\r\n!MANUAL_GREEN_MODE\r\n");
				HAL_UART_Transmit (&huart2 , (uint8_t *) strr, strlen( strr), 20);
				state_buzzer = MANUAL_GREEN;
			}
			break;
		default: break;
		}
}

