/*
 * button.h
 *
 *  Created on: 13 thg 11, 2023
 *      Author: DELL F89F
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

extern int button1_flag, button2_flag, button3_flag;

void getKeyInput();

#endif /* INC_BUTTON_H_ */
