/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    ux_stm32_config.h
  * @author  MCD Application Team
  * @brief   USBX STM32 config header file
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2020-2021 STMicroelectronics.
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
#ifndef __UX_STM32_CONFIG_H__
#define __UX_STM32_CONFIG_H__

#ifdef __cplusplus
extern "C" {
#endif

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/* Includes ------------------------------------------------------------------*/
#include "stm32h7xx_hal.h"

/* USER CODE BEGIN Private Includes */

/* USER CODE END Private Includes */

/* Private defines -----------------------------------------------------------*/

#define UX_DCD_STM32_MAX_ED                   9

#define USBD_HAL_ISOINCOMPLETE_CALLBACK

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

#ifdef __cplusplus
}
#endif
#endif  /* __UX_STM32_CONFIG_H__ */
