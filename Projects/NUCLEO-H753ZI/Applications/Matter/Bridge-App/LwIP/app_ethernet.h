/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    app_ethernet.h
  * @author  MCD Application Team
  * @brief   Header for app_ethernet.c module
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#ifndef __APP_ETHERNET_H
#define __APP_ETHERNET_H

#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "lwip/netif.h"
#include "FreeRTOS.h"
#include "semphr.h"

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* DHCP process states */
#define DHCP_OFF                   (uint8_t) 0
#define DHCP_START                 (uint8_t) 1
#define DHCP_WAIT_ADDRESS          (uint8_t) 2
#define DHCP_ADDRESS_ASSIGNED      (uint8_t) 3
#define DHCP_TIMEOUT               (uint8_t) 4
#define DHCP_LINK_DOWN             (uint8_t) 5

/* Exported macro ------------------------------------------------------------*/
/* Exported variables --------------------------------------------------------*/
extern SemaphoreHandle_t IPCfgSemaphore; /* Semaphore to signal that the network interface is configured */

/* Exported functions ------------------------------------------------------- */
void ethernet_link_status_updated(struct netif *netif);
void ethernet_status_updated(struct netif *netif);
void DHCP_Thread(void * argument);

#ifdef __cplusplus
}
#endif

#endif /* __APP_ETHERNET_H */
