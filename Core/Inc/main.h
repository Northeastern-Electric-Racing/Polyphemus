/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
#include "stm32f4xx_hal.h"

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
#define Button_1_Pin GPIO_PIN_2
#define Button_1_GPIO_Port GPIOA
#define Button_1_EXTI_IRQn EXTI2_IRQn
#define Button_Spare_Pin GPIO_PIN_3
#define Button_Spare_GPIO_Port GPIOA
#define Button_Spare_EXTI_IRQn EXTI3_IRQn
#define Button_5_Pin GPIO_PIN_0
#define Button_5_GPIO_Port GPIOB
#define Button_5_EXTI_IRQn EXTI0_IRQn
#define Button_6_Pin GPIO_PIN_1
#define Button_6_GPIO_Port GPIOB
#define Button_6_EXTI_IRQn EXTI1_IRQn
#define Button_2_Pin GPIO_PIN_10
#define Button_2_GPIO_Port GPIOB
#define Button_2_EXTI_IRQn EXTI15_10_IRQn
#define Button_3_Pin GPIO_PIN_11
#define Button_3_GPIO_Port GPIOB
#define Button_3_EXTI_IRQn EXTI15_10_IRQn
#define Button_4_Pin GPIO_PIN_12
#define Button_4_GPIO_Port GPIOB
#define Button_4_EXTI_IRQn EXTI15_10_IRQn
#define Switch_4_Pin GPIO_PIN_13
#define Switch_4_GPIO_Port GPIOB
#define Switch_4_EXTI_IRQn EXTI15_10_IRQn
#define Switch_5_Pin GPIO_PIN_14
#define Switch_5_GPIO_Port GPIOB
#define Switch_5_EXTI_IRQn EXTI15_10_IRQn
#define Debug_LED_1_Pin GPIO_PIN_8
#define Debug_LED_1_GPIO_Port GPIOC
#define Debug_LED_2_Pin GPIO_PIN_9
#define Debug_LED_2_GPIO_Port GPIOC
#define Switch_1_Pin GPIO_PIN_5
#define Switch_1_GPIO_Port GPIOB
#define Switch_1_EXTI_IRQn EXTI9_5_IRQn
#define Switch_2_Pin GPIO_PIN_6
#define Switch_2_GPIO_Port GPIOB
#define Switch_2_EXTI_IRQn EXTI9_5_IRQn
#define Switch_3_Pin GPIO_PIN_7
#define Switch_3_GPIO_Port GPIOB
#define Switch_3_EXTI_IRQn EXTI9_5_IRQn

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
