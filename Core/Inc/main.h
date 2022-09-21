/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#define LED_RED_A_Pin GPIO_PIN_1
#define LED_RED_A_GPIO_Port GPIOA
#define LED_YELLOW_A_Pin GPIO_PIN_2
#define LED_YELLOW_A_GPIO_Port GPIOA
#define LED_GREEN_A_Pin GPIO_PIN_3
#define LED_GREEN_A_GPIO_Port GPIOA
#define LED_RED_B_Pin GPIO_PIN_4
#define LED_RED_B_GPIO_Port GPIOA
#define LED_YELLOW_B_Pin GPIO_PIN_5
#define LED_YELLOW_B_GPIO_Port GPIOA
#define LED_GREEN_B_Pin GPIO_PIN_6
#define LED_GREEN_B_GPIO_Port GPIOA
#define Led_a_A_Pin GPIO_PIN_0
#define Led_a_A_GPIO_Port GPIOB
#define Led_b_A_Pin GPIO_PIN_1
#define Led_b_A_GPIO_Port GPIOB
#define Led_c_A_Pin GPIO_PIN_2
#define Led_c_A_GPIO_Port GPIOB
#define Led_b_B_Pin GPIO_PIN_10
#define Led_b_B_GPIO_Port GPIOB
#define Led_c_B_Pin GPIO_PIN_11
#define Led_c_B_GPIO_Port GPIOB
#define Led_d_B_Pin GPIO_PIN_12
#define Led_d_B_GPIO_Port GPIOB
#define Led_e_B_Pin GPIO_PIN_13
#define Led_e_B_GPIO_Port GPIOB
#define Led_f_B_Pin GPIO_PIN_14
#define Led_f_B_GPIO_Port GPIOB
#define Led_g_B_Pin GPIO_PIN_15
#define Led_g_B_GPIO_Port GPIOB
#define Led_d_A_Pin GPIO_PIN_3
#define Led_d_A_GPIO_Port GPIOB
#define Led_e_A_Pin GPIO_PIN_4
#define Led_e_A_GPIO_Port GPIOB
#define Led_f_A_Pin GPIO_PIN_5
#define Led_f_A_GPIO_Port GPIOB
#define Led_g_A_Pin GPIO_PIN_6
#define Led_g_A_GPIO_Port GPIOB
#define Led_a_B_Pin GPIO_PIN_9
#define Led_a_B_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
