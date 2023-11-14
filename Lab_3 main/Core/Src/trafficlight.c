/*
 * trafficlight.c
 *
 *  Created on: Nov 13, 2023
 *      Author: DELL F89F
 */

#include "trafficlight.h"

void light1(int color){
	switch (color) {
		case RED:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, RESET);
			HAL_GPIO_WritePin(LED_YEL1_GPIO_Port, LED_YEL1_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE1_GPIO_Port, LED_GRE1_Pin, SET);
			break;
		case YELLOW:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL1_GPIO_Port, LED_YEL1_Pin, RESET);
			HAL_GPIO_WritePin(LED_GRE1_GPIO_Port, LED_GRE1_Pin, SET);
			break;
		case GREEN:
			HAL_GPIO_WritePin(LED_RED1_GPIO_Port, LED_RED1_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL1_GPIO_Port, LED_YEL1_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE1_GPIO_Port, LED_GRE1_Pin, RESET);
			break;
		default:
			break;
	}
}

void light2(int color){
	switch (color) {
		case RED:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, RESET);
			HAL_GPIO_WritePin(LED_YEL2_GPIO_Port, LED_YEL2_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE2_GPIO_Port, LED_GRE2_Pin, SET);
			break;
		case YELLOW:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL2_GPIO_Port, LED_YEL2_Pin, RESET);
			HAL_GPIO_WritePin(LED_GRE2_GPIO_Port, LED_GRE2_Pin, SET);
			break;
		case GREEN:
			HAL_GPIO_WritePin(LED_RED2_GPIO_Port, LED_RED2_Pin, SET);
			HAL_GPIO_WritePin(LED_YEL2_GPIO_Port, LED_YEL2_Pin, SET);
			HAL_GPIO_WritePin(LED_GRE2_GPIO_Port, LED_GRE2_Pin, RESET);
			break;
		default:
			break;
	}
}
