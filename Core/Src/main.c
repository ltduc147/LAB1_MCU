/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */
	void display7SEG_A(int num){
	switch (num){
		case 0:
			HAL_GPIO_WritePin(Led_a_A_GPIO_Port, Led_a_A_Pin, 0);
			HAL_GPIO_WritePin(Led_b_A_GPIO_Port, Led_b_A_Pin, 0);
			HAL_GPIO_WritePin(Led_c_A_GPIO_Port, Led_c_A_Pin, 0);
			HAL_GPIO_WritePin(Led_d_A_GPIO_Port, Led_d_A_Pin, 0);
			HAL_GPIO_WritePin(Led_e_A_GPIO_Port, Led_e_A_Pin, 0);
			HAL_GPIO_WritePin(Led_f_A_GPIO_Port, Led_f_A_Pin, 0);
			HAL_GPIO_WritePin(Led_g_A_GPIO_Port, Led_g_A_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(Led_a_A_GPIO_Port, Led_a_A_Pin, 1);
			HAL_GPIO_WritePin(Led_b_A_GPIO_Port, Led_b_A_Pin, 0);
			HAL_GPIO_WritePin(Led_c_A_GPIO_Port, Led_c_A_Pin, 0);
			HAL_GPIO_WritePin(Led_d_A_GPIO_Port, Led_d_A_Pin, 1);
			HAL_GPIO_WritePin(Led_e_A_GPIO_Port, Led_e_A_Pin, 1);
			HAL_GPIO_WritePin(Led_f_A_GPIO_Port, Led_f_A_Pin, 1);
			HAL_GPIO_WritePin(Led_g_A_GPIO_Port, Led_g_A_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(Led_a_A_GPIO_Port, Led_a_A_Pin, 0);
			HAL_GPIO_WritePin(Led_b_A_GPIO_Port, Led_b_A_Pin, 0);
			HAL_GPIO_WritePin(Led_c_A_GPIO_Port, Led_c_A_Pin, 1);
			HAL_GPIO_WritePin(Led_d_A_GPIO_Port, Led_d_A_Pin, 0);
			HAL_GPIO_WritePin(Led_e_A_GPIO_Port, Led_e_A_Pin, 0);
			HAL_GPIO_WritePin(Led_f_A_GPIO_Port, Led_f_A_Pin, 1);
			HAL_GPIO_WritePin(Led_g_A_GPIO_Port, Led_g_A_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(Led_a_A_GPIO_Port, Led_a_A_Pin, 0);
			HAL_GPIO_WritePin(Led_b_A_GPIO_Port, Led_b_A_Pin, 0);
			HAL_GPIO_WritePin(Led_c_A_GPIO_Port, Led_c_A_Pin, 0);
			HAL_GPIO_WritePin(Led_d_A_GPIO_Port, Led_d_A_Pin, 0);
			HAL_GPIO_WritePin(Led_e_A_GPIO_Port, Led_e_A_Pin, 1);
			HAL_GPIO_WritePin(Led_f_A_GPIO_Port, Led_f_A_Pin, 1);
			HAL_GPIO_WritePin(Led_g_A_GPIO_Port, Led_g_A_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(Led_a_A_GPIO_Port, Led_a_A_Pin, 1);
			HAL_GPIO_WritePin(Led_b_A_GPIO_Port, Led_b_A_Pin, 0);
			HAL_GPIO_WritePin(Led_c_A_GPIO_Port, Led_c_A_Pin, 0);
			HAL_GPIO_WritePin(Led_d_A_GPIO_Port, Led_d_A_Pin, 1);
			HAL_GPIO_WritePin(Led_e_A_GPIO_Port, Led_e_A_Pin, 1);
			HAL_GPIO_WritePin(Led_f_A_GPIO_Port, Led_f_A_Pin, 0);
			HAL_GPIO_WritePin(Led_g_A_GPIO_Port, Led_g_A_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(Led_a_A_GPIO_Port, Led_a_A_Pin, 0);
			HAL_GPIO_WritePin(Led_b_A_GPIO_Port, Led_b_A_Pin, 1);
			HAL_GPIO_WritePin(Led_c_A_GPIO_Port, Led_c_A_Pin, 0);
			HAL_GPIO_WritePin(Led_d_A_GPIO_Port, Led_d_A_Pin, 0);
			HAL_GPIO_WritePin(Led_e_A_GPIO_Port, Led_e_A_Pin, 1);
			HAL_GPIO_WritePin(Led_f_A_GPIO_Port, Led_f_A_Pin, 0);
			HAL_GPIO_WritePin(Led_g_A_GPIO_Port, Led_g_A_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(Led_a_A_GPIO_Port, Led_a_A_Pin, 0);
						HAL_GPIO_WritePin(Led_b_A_GPIO_Port, Led_b_A_Pin, 1);
						HAL_GPIO_WritePin(Led_c_A_GPIO_Port, Led_c_A_Pin, 0);
						HAL_GPIO_WritePin(Led_d_A_GPIO_Port, Led_d_A_Pin, 0);
						HAL_GPIO_WritePin(Led_e_A_GPIO_Port, Led_e_A_Pin, 0);
						HAL_GPIO_WritePin(Led_f_A_GPIO_Port, Led_f_A_Pin, 0);
						HAL_GPIO_WritePin(Led_g_A_GPIO_Port, Led_g_A_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(Led_a_A_GPIO_Port, Led_a_A_Pin, 0);
						HAL_GPIO_WritePin(Led_b_A_GPIO_Port, Led_b_A_Pin, 0);
						HAL_GPIO_WritePin(Led_c_A_GPIO_Port, Led_c_A_Pin, 0);
						HAL_GPIO_WritePin(Led_d_A_GPIO_Port, Led_d_A_Pin, 1);
						HAL_GPIO_WritePin(Led_e_A_GPIO_Port, Led_e_A_Pin, 1);
						HAL_GPIO_WritePin(Led_f_A_GPIO_Port, Led_f_A_Pin, 1);
						HAL_GPIO_WritePin(Led_g_A_GPIO_Port, Led_g_A_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(Led_a_A_GPIO_Port, Led_a_A_Pin, 0);
						HAL_GPIO_WritePin(Led_b_A_GPIO_Port, Led_b_A_Pin, 0);
						HAL_GPIO_WritePin(Led_c_A_GPIO_Port, Led_c_A_Pin, 0);
						HAL_GPIO_WritePin(Led_d_A_GPIO_Port, Led_d_A_Pin, 0);
						HAL_GPIO_WritePin(Led_e_A_GPIO_Port, Led_e_A_Pin, 0);
						HAL_GPIO_WritePin(Led_f_A_GPIO_Port, Led_f_A_Pin, 0);
						HAL_GPIO_WritePin(Led_g_A_GPIO_Port, Led_g_A_Pin, 0);
			break;
		default:
			HAL_GPIO_WritePin(Led_a_A_GPIO_Port, Led_a_A_Pin, 0);
						HAL_GPIO_WritePin(Led_b_A_GPIO_Port, Led_b_A_Pin, 0);
						HAL_GPIO_WritePin(Led_c_A_GPIO_Port, Led_c_A_Pin, 0);
						HAL_GPIO_WritePin(Led_d_A_GPIO_Port, Led_d_A_Pin, 0);
						HAL_GPIO_WritePin(Led_e_A_GPIO_Port, Led_e_A_Pin, 1);
						HAL_GPIO_WritePin(Led_f_A_GPIO_Port, Led_f_A_Pin, 0);
						HAL_GPIO_WritePin(Led_g_A_GPIO_Port, Led_g_A_Pin, 0);
	}

}
	void display7SEG_B(int num){
	switch (num){
		case 0:
			HAL_GPIO_WritePin(Led_a_B_GPIO_Port, Led_a_B_Pin, 0);
			HAL_GPIO_WritePin(Led_b_B_GPIO_Port, Led_b_B_Pin, 0);
			HAL_GPIO_WritePin(Led_c_B_GPIO_Port, Led_c_B_Pin, 0);
			HAL_GPIO_WritePin(Led_d_B_GPIO_Port, Led_d_B_Pin, 0);
			HAL_GPIO_WritePin(Led_e_B_GPIO_Port, Led_e_B_Pin, 0);
			HAL_GPIO_WritePin(Led_f_B_GPIO_Port, Led_f_B_Pin, 0);
			HAL_GPIO_WritePin(Led_g_B_GPIO_Port, Led_g_B_Pin, 1);
			break;
		case 1:
			HAL_GPIO_WritePin(Led_a_B_GPIO_Port, Led_a_B_Pin, 1);
			HAL_GPIO_WritePin(Led_b_B_GPIO_Port, Led_b_B_Pin, 0);
			HAL_GPIO_WritePin(Led_c_B_GPIO_Port, Led_c_B_Pin, 0);
			HAL_GPIO_WritePin(Led_d_B_GPIO_Port, Led_d_B_Pin, 1);
			HAL_GPIO_WritePin(Led_e_B_GPIO_Port, Led_e_B_Pin, 1);
			HAL_GPIO_WritePin(Led_f_B_GPIO_Port, Led_f_B_Pin, 1);
			HAL_GPIO_WritePin(Led_g_B_GPIO_Port, Led_g_B_Pin, 1);
			break;
		case 2:
			HAL_GPIO_WritePin(Led_a_B_GPIO_Port, Led_a_B_Pin, 0);
			HAL_GPIO_WritePin(Led_b_B_GPIO_Port, Led_b_B_Pin, 0);
			HAL_GPIO_WritePin(Led_c_B_GPIO_Port, Led_c_B_Pin, 1);
			HAL_GPIO_WritePin(Led_d_B_GPIO_Port, Led_d_B_Pin, 0);
			HAL_GPIO_WritePin(Led_e_B_GPIO_Port, Led_e_B_Pin, 0);
			HAL_GPIO_WritePin(Led_f_B_GPIO_Port, Led_f_B_Pin, 1);
			HAL_GPIO_WritePin(Led_g_B_GPIO_Port, Led_g_B_Pin, 0);
			break;
		case 3:
			HAL_GPIO_WritePin(Led_a_B_GPIO_Port, Led_a_B_Pin, 0);
			HAL_GPIO_WritePin(Led_b_B_GPIO_Port, Led_b_B_Pin, 0);
			HAL_GPIO_WritePin(Led_c_B_GPIO_Port, Led_c_B_Pin, 0);
			HAL_GPIO_WritePin(Led_d_B_GPIO_Port, Led_d_B_Pin, 0);
			HAL_GPIO_WritePin(Led_e_B_GPIO_Port, Led_e_B_Pin, 1);
			HAL_GPIO_WritePin(Led_f_B_GPIO_Port, Led_f_B_Pin, 1);
			HAL_GPIO_WritePin(Led_g_B_GPIO_Port, Led_g_B_Pin, 0);
			break;
		case 4:
			HAL_GPIO_WritePin(Led_a_B_GPIO_Port, Led_a_B_Pin, 1);
			HAL_GPIO_WritePin(Led_b_B_GPIO_Port, Led_b_B_Pin, 0);
			HAL_GPIO_WritePin(Led_c_B_GPIO_Port, Led_c_B_Pin, 0);
			HAL_GPIO_WritePin(Led_d_B_GPIO_Port, Led_d_B_Pin, 1);
			HAL_GPIO_WritePin(Led_e_B_GPIO_Port, Led_e_B_Pin, 1);
			HAL_GPIO_WritePin(Led_f_B_GPIO_Port, Led_f_B_Pin, 0);
			HAL_GPIO_WritePin(Led_g_B_GPIO_Port, Led_g_B_Pin, 0);
			break;
		case 5:
			HAL_GPIO_WritePin(Led_a_B_GPIO_Port, Led_a_B_Pin, 0);
			HAL_GPIO_WritePin(Led_b_B_GPIO_Port, Led_b_B_Pin, 1);
			HAL_GPIO_WritePin(Led_c_B_GPIO_Port, Led_c_B_Pin, 0);
			HAL_GPIO_WritePin(Led_d_B_GPIO_Port, Led_d_B_Pin, 0);
			HAL_GPIO_WritePin(Led_e_B_GPIO_Port, Led_e_B_Pin, 1);
			HAL_GPIO_WritePin(Led_f_B_GPIO_Port, Led_f_B_Pin, 0);
			HAL_GPIO_WritePin(Led_g_B_GPIO_Port, Led_g_B_Pin, 0);
			break;
		case 6:
			HAL_GPIO_WritePin(Led_a_B_GPIO_Port, Led_a_B_Pin, 0);
						HAL_GPIO_WritePin(Led_b_B_GPIO_Port, Led_b_B_Pin, 1);
						HAL_GPIO_WritePin(Led_c_B_GPIO_Port, Led_c_B_Pin, 0);
						HAL_GPIO_WritePin(Led_d_B_GPIO_Port, Led_d_B_Pin, 0);
						HAL_GPIO_WritePin(Led_e_B_GPIO_Port, Led_e_B_Pin, 0);
						HAL_GPIO_WritePin(Led_f_B_GPIO_Port, Led_f_B_Pin, 0);
						HAL_GPIO_WritePin(Led_g_B_GPIO_Port, Led_g_B_Pin, 0);
			break;
		case 7:
			HAL_GPIO_WritePin(Led_a_B_GPIO_Port, Led_a_B_Pin, 0);
						HAL_GPIO_WritePin(Led_b_B_GPIO_Port, Led_b_B_Pin, 0);
						HAL_GPIO_WritePin(Led_c_B_GPIO_Port, Led_c_B_Pin, 0);
						HAL_GPIO_WritePin(Led_d_B_GPIO_Port, Led_d_B_Pin, 1);
						HAL_GPIO_WritePin(Led_e_B_GPIO_Port, Led_e_B_Pin, 1);
						HAL_GPIO_WritePin(Led_f_B_GPIO_Port, Led_f_B_Pin, 1);
						HAL_GPIO_WritePin(Led_g_B_GPIO_Port, Led_g_B_Pin, 1);
			break;
		case 8:
			HAL_GPIO_WritePin(Led_a_B_GPIO_Port, Led_a_B_Pin, 0);
						HAL_GPIO_WritePin(Led_b_B_GPIO_Port, Led_b_B_Pin, 0);
						HAL_GPIO_WritePin(Led_c_B_GPIO_Port, Led_c_B_Pin, 0);
						HAL_GPIO_WritePin(Led_d_B_GPIO_Port, Led_d_B_Pin, 0);
						HAL_GPIO_WritePin(Led_e_B_GPIO_Port, Led_e_B_Pin, 0);
						HAL_GPIO_WritePin(Led_f_B_GPIO_Port, Led_f_B_Pin, 0);
						HAL_GPIO_WritePin(Led_g_B_GPIO_Port, Led_g_B_Pin, 0);
			break;
		default:
			HAL_GPIO_WritePin(Led_a_B_GPIO_Port, Led_a_B_Pin, 0);
						HAL_GPIO_WritePin(Led_b_B_GPIO_Port, Led_b_B_Pin, 0);
						HAL_GPIO_WritePin(Led_c_B_GPIO_Port, Led_c_B_Pin, 0);
						HAL_GPIO_WritePin(Led_d_B_GPIO_Port, Led_d_B_Pin, 0);
						HAL_GPIO_WritePin(Led_e_B_GPIO_Port, Led_e_B_Pin, 1);
						HAL_GPIO_WritePin(Led_f_B_GPIO_Port, Led_f_B_Pin, 0);
						HAL_GPIO_WritePin(Led_g_B_GPIO_Port, Led_g_B_Pin, 0);
	}

}
/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  HAL_GPIO_WritePin(LED_RED_A_GPIO_Port, LED_RED_A_Pin, RESET);
  HAL_GPIO_WritePin(LED_YELLOW_A_GPIO_Port, LED_YELLOW_A_Pin, SET);
  HAL_GPIO_WritePin(LED_GREEN_A_GPIO_Port, LED_GREEN_A_Pin, SET);
  HAL_GPIO_WritePin(LED_RED_B_GPIO_Port, LED_RED_B_Pin, SET);
  HAL_GPIO_WritePin(LED_YELLOW_B_GPIO_Port, LED_YELLOW_B_Pin, SET);
  HAL_GPIO_WritePin(LED_GREEN_B_GPIO_Port, LED_GREEN_B_Pin, RESET);
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  int counter_green_A = 3;
  int counter_red_A = 5;
  int counter_yellow_A = 2;
  int status_StreetA = 1;

  int counter_green_B = 3;
  int counter_red_B = 5;
  int counter_yellow_B = 2;
  int status_StreetB = 2;
  // RED:1, GREEN:2, YELLOW:3
  while (1)
  {
	  // StreetA
	  if (status_StreetA == 1){
		  HAL_GPIO_WritePin(LED_RED_A_GPIO_Port, LED_RED_A_Pin, RESET);
		  HAL_GPIO_WritePin(LED_GREEN_A_GPIO_Port, LED_GREEN_A_Pin, SET);
		  HAL_GPIO_WritePin(LED_YELLOW_A_GPIO_Port, LED_YELLOW_A_Pin, SET);
		  display7SEG_A(counter_red_A--);
		  if (counter_red_A == 0){
			  counter_red_A = 5;
			  status_StreetA = 2;
		  }
	  } else if (status_StreetA == 2){
		  HAL_GPIO_WritePin(LED_RED_A_GPIO_Port, LED_RED_A_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN_A_GPIO_Port, LED_GREEN_A_Pin, RESET);
		  HAL_GPIO_WritePin(LED_YELLOW_A_GPIO_Port, LED_YELLOW_A_Pin, SET);
		  display7SEG_A(counter_green_A--);
		  if (counter_green_A == 0){
			  counter_green_A = 3;
			  status_StreetA = 3;
		  }
	  } else {
		  HAL_GPIO_WritePin(LED_RED_A_GPIO_Port, LED_RED_A_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN_A_GPIO_Port, LED_GREEN_A_Pin, SET);
		  HAL_GPIO_WritePin(LED_YELLOW_A_GPIO_Port, LED_YELLOW_A_Pin, RESET);
		  display7SEG_A(counter_yellow_A--);
		  if (counter_yellow_A == 0){
			  counter_yellow_A = 2;
			  status_StreetA = 1;
		  }
	  }
	  // StreetB
	  if (status_StreetB == 1){
		  HAL_GPIO_WritePin(LED_RED_B_GPIO_Port, LED_RED_B_Pin, RESET);
		  HAL_GPIO_WritePin(LED_GREEN_B_GPIO_Port, LED_GREEN_B_Pin, SET);
		  HAL_GPIO_WritePin(LED_YELLOW_B_GPIO_Port, LED_YELLOW_B_Pin, SET);
		  display7SEG_B(counter_red_B--);
		  if (counter_red_B == 0){
			  counter_red_B = 5;
			  status_StreetB = 2;
	  	  }
	  } else if (status_StreetB == 2){
		  HAL_GPIO_WritePin(LED_RED_B_GPIO_Port, LED_RED_B_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN_B_GPIO_Port, LED_GREEN_B_Pin, RESET);
		  HAL_GPIO_WritePin(LED_YELLOW_B_GPIO_Port, LED_YELLOW_B_Pin, SET);
		  display7SEG_B(counter_green_B--);
		  if (counter_green_B == 0){
			  counter_green_B = 3;
			  status_StreetB = 3;
	  	  }
	  } else {
		  HAL_GPIO_WritePin(LED_RED_B_GPIO_Port, LED_RED_B_Pin, SET);
		  HAL_GPIO_WritePin(LED_GREEN_B_GPIO_Port, LED_GREEN_B_Pin, SET);
		  HAL_GPIO_WritePin(LED_YELLOW_B_GPIO_Port, LED_YELLOW_B_Pin, RESET);
		  display7SEG_B(counter_yellow_B--);
		  if (counter_yellow_B == 0){
			  counter_yellow_B = 2;
			  status_StreetB = 1;
	  	  }
	  }
	  HAL_Delay(1000);
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_A_Pin|LED_YELLOW_A_Pin|LED_GREEN_A_Pin|LED_RED_B_Pin
                          |LED_YELLOW_B_Pin|LED_GREEN_B_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, Led_a_A_Pin|Led_b_A_Pin|Led_c_A_Pin|Led_b_B_Pin
                          |Led_c_B_Pin|Led_d_B_Pin|Led_e_B_Pin|Led_f_B_Pin
                          |Led_g_B_Pin|Led_d_A_Pin|Led_e_A_Pin|Led_f_A_Pin
                          |Led_g_A_Pin|Led_a_B_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_A_Pin LED_YELLOW_A_Pin LED_GREEN_A_Pin LED_RED_B_Pin
                           LED_YELLOW_B_Pin LED_GREEN_B_Pin */
  GPIO_InitStruct.Pin = LED_RED_A_Pin|LED_YELLOW_A_Pin|LED_GREEN_A_Pin|LED_RED_B_Pin
                          |LED_YELLOW_B_Pin|LED_GREEN_B_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : Led_a_A_Pin Led_b_A_Pin Led_c_A_Pin Led_b_B_Pin
                           Led_c_B_Pin Led_d_B_Pin Led_e_B_Pin Led_f_B_Pin
                           Led_g_B_Pin Led_d_A_Pin Led_e_A_Pin Led_f_A_Pin
                           Led_g_A_Pin Led_a_B_Pin */
  GPIO_InitStruct.Pin = Led_a_A_Pin|Led_b_A_Pin|Led_c_A_Pin|Led_b_B_Pin
                          |Led_c_B_Pin|Led_d_B_Pin|Led_e_B_Pin|Led_f_B_Pin
                          |Led_g_B_Pin|Led_d_A_Pin|Led_e_A_Pin|Led_f_A_Pin
                          |Led_g_A_Pin|Led_a_B_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
