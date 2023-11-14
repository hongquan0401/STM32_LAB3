/*
 * button.c
 *
 *  Created on: 13 thg 11, 2023
 *      Author: DELL F89F
 */

#include "button.h"

int button1_flag = 0, button2_flag = 0, button3_flag = 0;
// BUTTON 1////////////////////////////////////////////////////
int KeyReg0 = NORMAL_STATE,
	KeyReg1 = NORMAL_STATE,
	KeyReg2 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;
int TimerForKeyPress = 200;

int isButton1Pressed(){
	if (button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput1(){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if (KeyReg3 != KeyReg2) {
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE){                    // XU LY NHAN THA
				//TODO
				button1_flag = 1;
				TimerForKeyPress = 200;
			}
		}
		else {                                               // XU LY NHAN DE
			TimerForKeyPress--;
			if (TimerForKeyPress == 0){
				if (KeyReg2 == PRESSED_STATE){
					//TODO
				}
				TimerForKeyPress = 200;
			}
		}
	}
}
////////////////////////////////////////

// BUTTON 2////////////////////////////////////////////////////
int KeyReg10 = NORMAL_STATE,
	KeyReg11 = NORMAL_STATE,
	KeyReg12 = NORMAL_STATE;

int KeyReg13 = NORMAL_STATE;

int isButton2Pressed(){
	if (button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput2(){
	KeyReg10 = KeyReg11;
	KeyReg11 = KeyReg12;
	KeyReg12 = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	if ((KeyReg10 == KeyReg11) && (KeyReg11 == KeyReg12)){
		if (KeyReg13 != KeyReg12) {
			KeyReg13 = KeyReg12;
			if (KeyReg12 == PRESSED_STATE){                    // XU LY NHAN THA
				//TODO
				button2_flag = 1;
				TimerForKeyPress = 200;
			}
		}
		else {                                               // XU LY NHAN DE
			TimerForKeyPress--;
			if (TimerForKeyPress == 0){
				if (KeyReg12 == PRESSED_STATE){
					//TODO
				}
				TimerForKeyPress = 200;
			}
		}
	}
}
////////////////////////////////////////

// BUTTON 3////////////////////////////////////////////////////
int KeyReg20 = NORMAL_STATE,
	KeyReg21 = NORMAL_STATE,
	KeyReg22 = NORMAL_STATE;

int KeyReg23 = NORMAL_STATE;

int isButton3Pressed(){
	if (button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}

void getKeyInput3(){
	KeyReg20 = KeyReg21;
	KeyReg21 = KeyReg22;
	KeyReg22 = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	if ((KeyReg20 == KeyReg21) && (KeyReg21 == KeyReg22)){
		if (KeyReg23 != KeyReg22) {
			KeyReg23 = KeyReg22;
			if (KeyReg22 == PRESSED_STATE){                    // XU LY NHAN THA
				//TODO
				button3_flag = 1;
				TimerForKeyPress = 200;
			}
		}
		else {                                               // XU LY NHAN DE
			TimerForKeyPress--;
			if (TimerForKeyPress == 0){
				if (KeyReg22 == PRESSED_STATE){
					//TODO
				}
				TimerForKeyPress = 200;
			}
		}
	}
}
////////////////////////////////////////
