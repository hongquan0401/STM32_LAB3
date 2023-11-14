/*
 * display_7seg.c
 *
 *  Created on: Nov 2, 2023
 *      Author: DELL F89F
 */

#include "display_7seg.h"
#include "main.h"

void update_buffer(){
	led_buffer[0] = counter1/10;
	led_buffer[1] = counter1%10;
	led_buffer[2] = counter2/10;
	led_buffer[3] = counter2%10;
}

void display(int value){
	switch (value) {
		case 1:
			HAL_GPIO_WritePin(Led_A_GPIO_Port, Led_A_Pin, SET);
			HAL_GPIO_WritePin(Led_B_GPIO_Port, Led_B_Pin, RESET);
			HAL_GPIO_WritePin(Led_C_GPIO_Port, Led_C_Pin, RESET);
			HAL_GPIO_WritePin(Led_D_GPIO_Port, Led_D_Pin, SET);
			HAL_GPIO_WritePin(Led_E_GPIO_Port, Led_E_Pin, SET);
			HAL_GPIO_WritePin(Led_F_GPIO_Port, Led_F_Pin, SET);
			HAL_GPIO_WritePin(Led_G_GPIO_Port, Led_G_Pin, SET);
			break;
		case 2:
			HAL_GPIO_WritePin(Led_A_GPIO_Port, Led_A_Pin, RESET);
			HAL_GPIO_WritePin(Led_B_GPIO_Port, Led_B_Pin, RESET);
			HAL_GPIO_WritePin(Led_C_GPIO_Port, Led_C_Pin, SET);
			HAL_GPIO_WritePin(Led_D_GPIO_Port, Led_D_Pin, RESET);
			HAL_GPIO_WritePin(Led_E_GPIO_Port, Led_E_Pin, RESET);
			HAL_GPIO_WritePin(Led_F_GPIO_Port, Led_F_Pin, SET);
			HAL_GPIO_WritePin(Led_G_GPIO_Port, Led_G_Pin, RESET);
			break;
		case 3:
			HAL_GPIO_WritePin(Led_A_GPIO_Port, Led_A_Pin, RESET);
			HAL_GPIO_WritePin(Led_B_GPIO_Port, Led_B_Pin, RESET);
			HAL_GPIO_WritePin(Led_C_GPIO_Port, Led_C_Pin, RESET);
			HAL_GPIO_WritePin(Led_D_GPIO_Port, Led_D_Pin, RESET);
			HAL_GPIO_WritePin(Led_E_GPIO_Port, Led_E_Pin, SET);
			HAL_GPIO_WritePin(Led_F_GPIO_Port, Led_F_Pin, SET);
			HAL_GPIO_WritePin(Led_G_GPIO_Port, Led_G_Pin, RESET);
			break;
		case 4:
			HAL_GPIO_WritePin(Led_A_GPIO_Port, Led_A_Pin, SET);
			HAL_GPIO_WritePin(Led_B_GPIO_Port, Led_B_Pin, RESET);
			HAL_GPIO_WritePin(Led_C_GPIO_Port, Led_C_Pin, RESET);
			HAL_GPIO_WritePin(Led_D_GPIO_Port, Led_D_Pin, SET);
			HAL_GPIO_WritePin(Led_E_GPIO_Port, Led_E_Pin, SET);
			HAL_GPIO_WritePin(Led_F_GPIO_Port, Led_F_Pin, RESET);
			HAL_GPIO_WritePin(Led_G_GPIO_Port, Led_G_Pin, RESET);
			break;
		case 5:
			HAL_GPIO_WritePin(Led_A_GPIO_Port, Led_A_Pin, RESET);
			HAL_GPIO_WritePin(Led_B_GPIO_Port, Led_B_Pin, SET);
			HAL_GPIO_WritePin(Led_C_GPIO_Port, Led_C_Pin, RESET);
			HAL_GPIO_WritePin(Led_D_GPIO_Port, Led_D_Pin, RESET);
			HAL_GPIO_WritePin(Led_E_GPIO_Port, Led_E_Pin, SET);
			HAL_GPIO_WritePin(Led_F_GPIO_Port, Led_F_Pin, RESET);
			HAL_GPIO_WritePin(Led_G_GPIO_Port, Led_G_Pin, RESET);
			break;
		case 6:
			HAL_GPIO_WritePin(Led_A_GPIO_Port, Led_A_Pin, RESET);
			HAL_GPIO_WritePin(Led_B_GPIO_Port, Led_B_Pin, SET);
			HAL_GPIO_WritePin(Led_C_GPIO_Port, Led_C_Pin, RESET);
			HAL_GPIO_WritePin(Led_D_GPIO_Port, Led_D_Pin, RESET);
			HAL_GPIO_WritePin(Led_E_GPIO_Port, Led_E_Pin, RESET);
			HAL_GPIO_WritePin(Led_F_GPIO_Port, Led_F_Pin, RESET);
			HAL_GPIO_WritePin(Led_G_GPIO_Port, Led_G_Pin, RESET);
			break;
		case 7:
			HAL_GPIO_WritePin(Led_A_GPIO_Port, Led_A_Pin, RESET);
			HAL_GPIO_WritePin(Led_B_GPIO_Port, Led_B_Pin, RESET);
			HAL_GPIO_WritePin(Led_C_GPIO_Port, Led_C_Pin, RESET);
			HAL_GPIO_WritePin(Led_D_GPIO_Port, Led_D_Pin, SET);
			HAL_GPIO_WritePin(Led_E_GPIO_Port, Led_E_Pin, SET);
			HAL_GPIO_WritePin(Led_F_GPIO_Port, Led_F_Pin, SET);
			HAL_GPIO_WritePin(Led_G_GPIO_Port, Led_G_Pin, SET);
			break;
		case 8:
			HAL_GPIO_WritePin(Led_A_GPIO_Port, Led_A_Pin, RESET);
			HAL_GPIO_WritePin(Led_B_GPIO_Port, Led_B_Pin, RESET);
			HAL_GPIO_WritePin(Led_C_GPIO_Port, Led_C_Pin, RESET);
			HAL_GPIO_WritePin(Led_D_GPIO_Port, Led_D_Pin, RESET);
			HAL_GPIO_WritePin(Led_E_GPIO_Port, Led_E_Pin, RESET);
			HAL_GPIO_WritePin(Led_F_GPIO_Port, Led_F_Pin, RESET);
			HAL_GPIO_WritePin(Led_G_GPIO_Port, Led_G_Pin, RESET);
			break;
		case 9:
			HAL_GPIO_WritePin(Led_A_GPIO_Port, Led_A_Pin, RESET);
			HAL_GPIO_WritePin(Led_B_GPIO_Port, Led_B_Pin, RESET);
			HAL_GPIO_WritePin(Led_C_GPIO_Port, Led_C_Pin, RESET);
			HAL_GPIO_WritePin(Led_D_GPIO_Port, Led_D_Pin, RESET);
			HAL_GPIO_WritePin(Led_E_GPIO_Port, Led_E_Pin, SET);
			HAL_GPIO_WritePin(Led_F_GPIO_Port, Led_F_Pin, RESET);
			HAL_GPIO_WritePin(Led_G_GPIO_Port, Led_G_Pin, RESET);
			break;
		case 0:
			HAL_GPIO_WritePin(Led_A_GPIO_Port, Led_A_Pin, RESET);
			HAL_GPIO_WritePin(Led_B_GPIO_Port, Led_B_Pin, RESET);
			HAL_GPIO_WritePin(Led_C_GPIO_Port, Led_C_Pin, RESET);
			HAL_GPIO_WritePin(Led_D_GPIO_Port, Led_D_Pin, RESET);
			HAL_GPIO_WritePin(Led_E_GPIO_Port, Led_E_Pin, RESET);
			HAL_GPIO_WritePin(Led_F_GPIO_Port, Led_F_Pin, RESET);
			HAL_GPIO_WritePin(Led_G_GPIO_Port, Led_G_Pin, SET);
			break;
		default:
			break;
	}
	return;
}

void scanled(int idx){
	switch (idx) {
		case 0:
			HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, RESET);
			HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, SET);
			HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, SET);
			HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, SET);
			display(led_buffer[0]);
			break;
		case 1:
			HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, SET);
			HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, RESET);
			HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, SET);
			HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, SET);
			display(led_buffer[1]);
			break;
		case 2:
			HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, SET);
			HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, SET);
			HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, RESET);
			HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, SET);
			display(led_buffer[2]);
			break;
		case 3:
			HAL_GPIO_WritePin(en0_GPIO_Port, en0_Pin, SET);
			HAL_GPIO_WritePin(en1_GPIO_Port, en1_Pin, SET);
			HAL_GPIO_WritePin(en2_GPIO_Port, en2_Pin, SET);
			HAL_GPIO_WritePin(en3_GPIO_Port, en3_Pin, RESET);
			display(led_buffer[3]);
			break;
		default:
			break;
	}
}
