/**
  ******************************************************************************
  * File Name          : main.h
  * Description        : This file contains the common defines of the application
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2017 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H
  /* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define KEY_Left_Pin GPIO_PIN_13
#define KEY_Left_GPIO_Port GPIOC
#define LED_Pin GPIO_PIN_14
#define LED_GPIO_Port GPIOC
#define Beep_Pin GPIO_PIN_15
#define Beep_GPIO_Port GPIOC
#define Moter_2_B_Pin GPIO_PIN_0
#define Moter_2_B_GPIO_Port GPIOA
#define Moter_2_A_Pin GPIO_PIN_1
#define Moter_2_A_GPIO_Port GPIOA
#define Moter_1_B_Pin GPIO_PIN_2
#define Moter_1_B_GPIO_Port GPIOA
#define Moter_1_A_Pin GPIO_PIN_3
#define Moter_1_A_GPIO_Port GPIOA
#define AD_2_Pin GPIO_PIN_4
#define AD_2_GPIO_Port GPIOA
#define AD_1_Pin GPIO_PIN_5
#define AD_1_GPIO_Port GPIOA
#define Encoder_2_Pin GPIO_PIN_6
#define Encoder_2_GPIO_Port GPIOA
#define Encoder_1_Pin GPIO_PIN_7
#define Encoder_1_GPIO_Port GPIOA
#define MPU6050_SDA_Pin GPIO_PIN_0
#define MPU6050_SDA_GPIO_Port GPIOB
#define MPU6050_SCL_Pin GPIO_PIN_1
#define MPU6050_SCL_GPIO_Port GPIOB
#define Bluetooth_TX_Pin GPIO_PIN_10
#define Bluetooth_TX_GPIO_Port GPIOB
#define Bluetooth_RX_Pin GPIO_PIN_11
#define Bluetooth_RX_GPIO_Port GPIOB
#define KEY_Up_Pin GPIO_PIN_12
#define KEY_Up_GPIO_Port GPIOA
#define OLED_D1_Pin GPIO_PIN_15
#define OLED_D1_GPIO_Port GPIOA
#define OLED_D0_Pin GPIO_PIN_3
#define OLED_D0_GPIO_Port GPIOB
#define OLED_DC_Pin GPIO_PIN_4
#define OLED_DC_GPIO_Port GPIOB
#define OLED_RST_Pin GPIO_PIN_5
#define OLED_RST_GPIO_Port GPIOB
#define KEY_Right_Pin GPIO_PIN_6
#define KEY_Right_GPIO_Port GPIOB
#define KEY_Down_Pin GPIO_PIN_7
#define KEY_Down_GPIO_Port GPIOB
#define KEY_Mid_Pin GPIO_PIN_9
#define KEY_Mid_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)

/**
  * @}
  */ 

/**
  * @}
*/ 

#endif /* __MAIN_H */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
