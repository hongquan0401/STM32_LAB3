/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define Button1_Pin GPIO_PIN_13
#define Button1_GPIO_Port GPIOC
#define Button2_Pin GPIO_PIN_14
#define Button2_GPIO_Port GPIOC
#define Button3_Pin GPIO_PIN_15
#define Button3_GPIO_Port GPIOC
#define en0_Pin GPIO_PIN_1
#define en0_GPIO_Port GPIOA
#define en1_Pin GPIO_PIN_2
#define en1_GPIO_Port GPIOA
#define en2_Pin GPIO_PIN_3
#define en2_GPIO_Port GPIOA
#define en3_Pin GPIO_PIN_4
#define en3_GPIO_Port GPIOA
#define LED_RED1_Pin GPIO_PIN_5
#define LED_RED1_GPIO_Port GPIOA
#define LED_YEL1_Pin GPIO_PIN_6
#define LED_YEL1_GPIO_Port GPIOA
#define LED_GRE1_Pin GPIO_PIN_7
#define LED_GRE1_GPIO_Port GPIOA
#define Led_A_Pin GPIO_PIN_0
#define Led_A_GPIO_Port GPIOB
#define Led_B_Pin GPIO_PIN_1
#define Led_B_GPIO_Port GPIOB
#define Led_C_Pin GPIO_PIN_2
#define Led_C_GPIO_Port GPIOB
#define LED_RED2_Pin GPIO_PIN_8
#define LED_RED2_GPIO_Port GPIOA
#define LED_YEL2_Pin GPIO_PIN_9
#define LED_YEL2_GPIO_Port GPIOA
#define LED_GRE2_Pin GPIO_PIN_10
#define LED_GRE2_GPIO_Port GPIOA
#define LED_Test_Pin GPIO_PIN_13
#define LED_Test_GPIO_Port GPIOA
#define Led_D_Pin GPIO_PIN_3
#define Led_D_GPIO_Port GPIOB
#define Led_E_Pin GPIO_PIN_4
#define Led_E_GPIO_Port GPIOB
#define Led_F_Pin GPIO_PIN_5
#define Led_F_GPIO_Port GPIOB
#define Led_G_Pin GPIO_PIN_6
#define Led_G_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
