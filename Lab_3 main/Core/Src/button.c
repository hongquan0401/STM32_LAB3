/*
 * button.c
 *
 *  Created on: 13 thg 11, 2023
 *      Author: DELL F89F
 */

#include "button.h"

int KeyReg0 = NORMAL_STATE,
	KeyReg1 = NORMAL_STATE,
	KeyReg2 = NORMAL_STATE;

int KeyReg3 = NORMAL_STATE;
int TimerForKeyPress = 150;


void getKeyInput(){
	KeyReg0 = KeyReg1;
	KeyReg1 = KeyReg2;
	KeyReg2 = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if ((KeyReg0 == KeyReg1) && (KeyReg1 == KeyReg2)){
		if (KeyReg3 != KeyReg2) {
			KeyReg3 = KeyReg2;
			if (KeyReg2 == PRESSED_STATE){                    // XU LY NHAN THA
				//TODO
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
