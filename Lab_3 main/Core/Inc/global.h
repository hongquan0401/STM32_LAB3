/*
 * global.h
 *
 *  Created on: 13 thg 11, 2023
 *      Author: DELL F89F
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"
#include "button.h"
#include "display_7seg.h"
#include "softwareTimer.h"
#include "trafficlight.h"

#define INIT 1
#define AUTO_RED 2
#define AUTO_GREEN 3
#define AUTO_YELLOW 4

#define MAN_RED 12
#define MAN_GREEN 13
#define MAN_YELLOW 14

extern int status1, status2;
extern int red_time, green_time, yellow_time;
extern int duration;
extern int counter1, counter2;

#endif /* INC_GLOBAL_H_ */
