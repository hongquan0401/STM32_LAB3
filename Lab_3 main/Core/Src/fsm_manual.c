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

			counter2 = 2; // to display mode 02

			if (timer1_flag == 1){
				status1 = INIT;
				status2 = INIT;
			}

			if (isButton1Pressed() == 1){
				status1 = MAN_GREEN;
				setTimer1(500);
			}
			if (isButton2Pressed() == 1){
				counter1++;
				update_buffer();
				HAL_GPIO_TogglePin(LED_Test_GPIO_Port, LED_Test_Pin);
			}
			if (isButton3Pressed() == 1){
				red_time = 100* (counter1 + 1);
				update_buffer();
				HAL_GPIO_TogglePin(LED_Test_GPIO_Port, LED_Test_Pin);
			}
			break;
		case MAN_GREEN:
			light1(GREEN);
			status2 = 0;
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL2_GPIO_Port, LED_YEL2_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE2_GPIO_Port, LED_GRE2_Pin, SET);

			counter2 = 3; // to display mode 03

			if (timer1_flag == 1){
				status1 = INIT;
				status2 = INIT;
			}

			if (isButton1Pressed() == 1){
				status1 = MAN_YELLOW;
				setTimer1(500);
			}
			if (isButton2Pressed() == 1){
				counter1++;
				update_buffer();
			}
			if (isButton3Pressed() == 1){
				green_time = 100*(counter1+1);
				update_buffer();
			}
			break;
		case MAN_YELLOW:
			light1(YELLOW);
			status2 = 0;
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL2_GPIO_Port, LED_YEL2_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE2_GPIO_Port, LED_GRE2_Pin, SET);

			counter2 = 4; // to display mode 04

			if (timer1_flag == 1){
				status1 = INIT;
				status2 = INIT;
			}

			if (isButton1Pressed() == 1){
				status1 = MAN_RED;
				setTimer1(500);
			}
			if (isButton2Pressed() == 1){
				counter1++;
				update_buffer();
			}
			if (isButton3Pressed() == 1){
				yellow_time = 100*(counter1+1);
				update_buffer();
			}
			break;
		default:
			break;
	}
}
