/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
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

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  void on0()
  {
	  HAL_GPIO_WritePin(GPIOA, Port0_Pin, RESET);
  }
  void on1()
  {
	  HAL_GPIO_WritePin(GPIOA, Port1_Pin, RESET);
  }
  void on2()
  {
	  HAL_GPIO_WritePin(GPIOA, Port2_Pin, RESET);
  }
  void on3()
  {
	  HAL_GPIO_WritePin(GPIOA, Port3_Pin, RESET);
  }
  void on4()
  {
	  HAL_GPIO_WritePin(GPIOA, Port4_Pin, RESET);
  }
  void on5()
  {
	  HAL_GPIO_WritePin(GPIOA, Port5_Pin, RESET);
  }
  void on6()
  {
	  HAL_GPIO_WritePin(GPIOA, Port6_Pin, RESET);
  }
  void off0()
  {
	  HAL_GPIO_WritePin(GPIOA, Port0_Pin, SET);
  }
  void off1()
  {
	  HAL_GPIO_WritePin(GPIOA, Port1_Pin, SET);
  }
  void off2()
  {
	  HAL_GPIO_WritePin(GPIOA, Port2_Pin, SET);
  }
  void off3()
  {
	  HAL_GPIO_WritePin(GPIOA, Port3_Pin, SET);
  }
  void off4()
  {
	  HAL_GPIO_WritePin(GPIOA, Port4_Pin, SET);
  }
  void off5()
  {
	  HAL_GPIO_WritePin(GPIOA, Port5_Pin, SET);
  }
  void off6()
  {
	  HAL_GPIO_WritePin(GPIOA, Port6_Pin, SET);
  }
  void number0()
  {
	  on0();
	  on1();
	  on2();
	  on3();
	  on4();
	  on5();
	  off6();
  }
  void number1()
  {
	  off0();
	  on1();
	  on2();
	  off3();
	  off4();
	  off5();
	  off6();
  }
  void number2()
  {
  	  on0();
  	  on1();
  	  off2();
  	  on3();
  	  on4();
  	  off5();
  	  on6();
  }
  void number3()
  {
	  on0();
	  on1();
	  on2();
	  on3();
	  off4();
	  off5();
	  on6();
  }
  void number4()
  {
	  off0();
	  on1();
	  on2();
	  off3();
	  off4();
	  on5();
	  on6();
  }
  void number5()
  {
	  on0();
	  off1();
	  on2();
	  on3();
	  off4();
	  on5();
	  on6();
  }
  void number6()
  {
	  on0();
	  off1();
	  on2();
	  on3();
	  on4();
	  on5();
	  on6();
  }
  void number7()
  {
	  on0();
	  on1();
	  on2();
	  off3();
	  off4();
	  off5();
	  off6();
  }
  void number8()
  {
	  on0();
	  on1();
	  on2();
	  on3();
	  on4();
	  on5();
	  on6();
  }
  void number9()
  {
	  on0();
	  on1();
	  on2();
	  on3();
	  off4();
	  on5();
	  on6();
  }
  void display7SEG(int num)
  {
	  switch (num)
	  {
	  case 0:
		  number0();
		  break;
	  case 1:
		  number1();
		  break;
	  case 2:
		  number2();
		  break;
	  case 3:
		  number3();
		  break;
	  case 4:
		  number4();
		  break;
	  case 5:
		  number5();
		  break;
	  case 6:
		  number6();
		  break;
	  case 7:
		  number7();
		  break;
	  case 8:
		  number8();
		  break;
	  case 9:
		  number9();
		  break;
	  default:
		  number0();
		  break;
	  }
  }
  int counter = 0;
  while (1)
  {
	  if (counter > 10) counter = 0;
	  display7SEG(counter++);
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
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, Port0_Pin|Port1_Pin|Port2_Pin|Port3_Pin
                          |Port4_Pin|Port5_Pin|Port6_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pins : Port0_Pin Port1_Pin Port2_Pin Port3_Pin
                           Port4_Pin Port5_Pin Port6_Pin */
  GPIO_InitStruct.Pin = Port0_Pin|Port1_Pin|Port2_Pin|Port3_Pin
                          |Port4_Pin|Port5_Pin|Port6_Pin;
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

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
