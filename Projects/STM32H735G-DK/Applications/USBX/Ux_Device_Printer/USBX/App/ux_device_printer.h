/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    ux_device_printer.h
  * @author  MCD Application Team
  * @brief   USBX Device Printer applicative header file
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
#ifndef __UX_DEVICE_PRINTER_H__
#define __UX_DEVICE_PRINTER_H__

#ifdef __cplusplus
extern "C" {
#endif

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */

/* Includes ------------------------------------------------------------------*/
#include "ux_api.h"
#include "ux_device_class_printer.h"

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
UCHAR *USBD_PRINTER_GetDeviceID(VOID);
VOID USBD_PRINTER_Activate(VOID *printer_instance);
VOID USBD_PRINTER_Deactivate(VOID *printer_instance);
VOID USBD_PRINTER_SoftReset(VOID *printer_instance);

/* USER CODE BEGIN EFP */
VOID usbx_printer_read_thread_entry(ULONG thread_input);
VOID usbx_printer_write_thread_entry(ULONG thread_input);
/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* USER CODE BEGIN 2 */

/* USER CODE END 2 */

#ifdef __cplusplus
}
#endif
#endif  /* __UX_DEVICE_PRINTER_H__ */
