/*
 * fsm_pedestrian_light.c
 *
 *  Created on: Nov 24, 2023
 *      Author: Admin
 */

#include "fsm_pedestrian_light.h"
#include "buzzer.h"

void fsm_pedestrian_light(){
	if(isButtonPressed(3)){
		setTimer(1500,4);
	}
	//state cho buzzer cua Kiet
//	switch (status){
//		case AUTO_RED_GREEN:
//			if(timer_flag[4] == 0){
//				state_buzzer =ON;
//			}else if(timer_flag[4] == 1){
//				state_buzzer =OFF;
//			}
//			break;
//		case AUTO_RED_YELLOW:
//			if(timer_flag[4] == 0){
//				state_buzzer =ON;
//			}else if(timer_flag[4] == 1){
//				state_buzzer =OFF;
//			}
//			break;
//		case AUTO_GREEN_RED:
//			if(timer_flag[4] == 0){
//				state_buzzer =ON;
//			}else if(timer_flag[4] == 1){
//				state_buzzer =OFF;
//			}
//			break;
//		case AUTO_YELLOW_RED:
//			if(timer_flag[4] == 0){
//				state_buzzer =ON;
//			}else if(timer_flag[4] == 1){
//				state_buzzer =OFF;
//			}
//			break;
//		case MANUAL_RED:
//			state_buzzer =OFF;
//			break;
//		case MANUAL_YELLOW:
//			state_buzzer =OFF;
//			break;
//		case MANUAL_GREEN:
//			state_buzzer =OFF;
//			break;
//		default: break;
//	}
}
