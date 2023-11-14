/*
 * fsm_manual.c
 *
 *  Created on: 14 thg 11, 2023
 *      Author: DELL F89F
 */

#include "fsm_manual.h"

void fsm_manual_run(){
	switch (status1) {
		case MAN_RED:
			light1(RED);
			status2 = 0;
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL2_GPIO_Port, LED_YEL2_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE2_GPIO_Port, LED_GRE2_Pin, SET);

			counter1 = red_time/100 - 1;
			counter2 = 2; // to display mode 02

			if (timer1_flag == 1){
				status1 = AUTO_RED;
				status2 = AUTO_GREEN;
				setTimer1(red_time);
				setTimer2(green_time);
			}

			if (isButton1Pressed() == 1){
				status1 = MAN_GREEN;
				setTimer1(1000);
			}
			if (isButton2Pressed() == 1){
				counter1++;
			}
			if (isButton3Pressed() == 1){
				red_time = 100* (counter1+1);
			}
			break;
		case MAN_GREEN:
			light1(GREEN);
			status2 = 0;
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL2_GPIO_Port, LED_YEL2_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE2_GPIO_Port, LED_GRE2_Pin, SET);

			counter1 = green_time/100 - 1;
			counter2 = 3; // to display mode 03

			if (timer1_flag == 1){
				status1 = AUTO_GREEN;
				setTimer1(green_time);
				status2 = AUTO_RED;
				setTimer2(red_time);
			}

			if (isButton1Pressed() == 1){
				status1 = MAN_YELLOW;
				setTimer1(1000);
			}
			if (isButton2Pressed() == 1){
				counter1++;
			}
			if (isButton3Pressed() == 1){
				green_time = 100*(counter1+1);
			}
			break;
		case MAN_YELLOW:
			light1(YELLOW);
			status2 = 0;
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL2_GPIO_Port, LED_YEL2_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE2_GPIO_Port, LED_GRE2_Pin, SET);

			counter1 = yellow_time/100 - 1;
			counter2 = 4; // to display mode 04

			if (timer1_flag == 1){
				status1 = AUTO_YELLOW;
				setTimer1(yellow_time);
				status2 = AUTO_RED;
				setTimer2(200);
			}

			if (isButton1Pressed() == 1){
				status1 = MAN_RED;
				setTimer1(1000);
			}
			if (isButton2Pressed() == 1){
				counter1++;
			}
			if (isButton3Pressed() == 1){
				yellow_time = 100*(counter1+1);
			}
			break;
		default:
			break;
	}
}
