/*
 * global.h
 *
 *  Created on: Nov 21, 2023
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "software_timer.h"
#include "button.h"
#include "scanLed.h"
#include "fsm_auto.h"
#include "fsm_manual.h"
#include "fsm_pedestrian_light.h"

#endif /* INC_GLOBAL_H_ */


//definition for automatic state
#define INIT 90
#define AUTO_RED_GREEN 91
#define AUTO_RED_YELLOW 92
#define AUTO_GREEN_RED 93
#define AUTO_YELLOW_RED 94

//definition for manual state
#define MANUAL_RED 20
#define MANUAL_YELLOW 21
#define MANUAL_GREEN 22

//declare some global variables
extern int status;// show status
extern int red_time; //show red time length
extern int yellow_time; // show yellow time length
extern int green_time; // show green time length
