/*
 * fsm_automatic.c
 *
 *  Created on: 13 thg 11, 2023
 *      Author: DELL F89F
 */

#include "fsm_automatic.h"


void fsm_automatic1_run(){
	switch (status1) {
		case INIT:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL1_GPIO_Port, LED_YEL1_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE1_GPIO_Port, LED_GRE1_Pin, SET);
			status1 = AUTO_RED;		// ready for AUTO RED light
			setTimer1(red_time);	// ready for AUTO RED light
			counter1 = red_time/100 - 1;// set counter ready for AUTO RED count down
			setTimer3(duration);	// set timer ready for AUTO RED count down
			break;
		case AUTO_RED:
			light1(RED); //red 1 on

			if (timer3_flag == 1){
				counter1--;
				setTimer3(duration);
			}
			// ready for next state
			if (timer1_flag == 1) {
				status1 = AUTO_GREEN;
				setTimer1(green_time);
				counter1 = green_time/100 - 1;
				setTimer3(duration);
			}
			//
			if (isButton1Pressed() == 1){
				status1 = MAN_RED;
				setTimer1(500);
			}
			break;
		case AUTO_GREEN:
			light1(GREEN); // green 1 on

			if (timer3_flag == 1){
				counter1--;
				setTimer3(duration);
			}
			// ready for next state
			if (timer1_flag == 1){
				status1 = AUTO_YELLOW;
				setTimer1(yellow_time);
				counter1 = yellow_time/100 - 1;
				setTimer3(duration);
			}
			//
			if (isButton1Pressed() == 1){
				status1 = MAN_RED;
				setTimer1(500);
			}
			break;
		case AUTO_YELLOW:
			light1(YELLOW); // yellow 1 on

			if (timer3_flag == 1){
				counter1--;
				setTimer3(duration);
			}
			// ready for next state
			if (timer1_flag == 1){
				status1 = AUTO_RED;
				setTimer1(red_time);
				counter1 = red_time/100 - 1;
				setTimer3(duration);
			}
			//
			if (isButton1Pressed() == 1){
				status1 = MAN_RED;
				setTimer1(500);
			}
			break;
		default:
			break;
	}
}

void fsm_automatic2_run(){
	switch (status2) {
		case INIT:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL2_GPIO_Port, LED_YEL2_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE2_GPIO_Port, LED_GRE2_Pin, SET);
			status2 = AUTO_GREEN;
			setTimer2(green_time);
			counter2 = green_time/100 - 1;
			setTimer5(duration);
			break;
		case AUTO_RED:
			light2(RED); //red 2 on

			if (timer5_flag == 1){
				counter2--;
				setTimer5(duration);
			}
			// ready for next state
			if (timer2_flag == 1) {
				status2 = AUTO_GREEN;
				setTimer2(green_time);
				counter2 = green_time/100 - 1;
				setTimer5(duration);
			}
			break;
		case AUTO_GREEN:
			light2(GREEN); // green 2 on

			if (timer5_flag == 1){
				counter2--;
				setTimer5(duration);
			}
			// ready for next state
			if (timer2_flag == 1){
				status2 = AUTO_YELLOW;
				setTimer2(yellow_time);
				counter2 = yellow_time/100 - 1;
				setTimer5(duration);
			}
			break;
		case AUTO_YELLOW:
			light2(YELLOW); // yellow 1 on

			if (timer5_flag == 1){
				counter2--;
				setTimer5(duration);
			}
			// ready for next state
			if (timer2_flag == 1){
				status2 = AUTO_RED;
				setTimer2(red_time);
				counter2 = red_time/100 - 1;
				setTimer5(duration);
			}
			break;
		default:
			break;
	}
}
