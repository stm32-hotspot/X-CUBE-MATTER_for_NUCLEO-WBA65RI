/*
 * Copyright (c) 2019, Arm Limited. All rights reserved.
 * Copyright (c) 2024 STMicroelectronics. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 *
 */
#include "region_defs.h"
#include "mcuboot_config/mcuboot_config.h"

#define _HEX(n) 0x##n
#define HEX(n)  _HEX(n)

/* Enumeration that is used by the assemble.py and imgtool\main.py scripts
 * for correct binary generation when nested macros are used
 */

enum image_attributes
{
  /* area for preparing images */
  RE_FLASH_AREA_SCRATCH_SIZE = FLASH_AREA_SCRATCH_SIZE,
  RE_IMAGE_FLASH_SECURE_IMAGE_SIZE = (SECURE_IMAGE_MAX_SIZE),
#if MCUBOOT_APP_IMAGE_NUMBER == 2
  RE_IMAGE_FLASH_NON_SECURE_IMAGE_SIZE = (NON_SECURE_IMAGE_MAX_SIZE),
#else
#if FLASH_NS_PARTITION_SIZE == 0
  RE_IMAGE_FLASH_NON_SECURE_IMAGE_SIZE = (0x0),
#elif FLASH_S_PARTITION_SIZE == 0
  RE_IMAGE_FLASH_NON_SECURE_IMAGE_SIZE = (NON_SECURE_IMAGE_MAX_SIZE),
#else
  RE_IMAGE_FLASH_NON_SECURE_IMAGE_SIZE = (NON_SECURE_IMAGE_MAX_SIZE+SECURE_IMAGE_MAX_SIZE),
#endif
#endif /* MCUBOOT_APP_IMAGE_NUMBER */
/* area for flashing images */
  RE_IMAGE_FLASH_ADDRESS_SECURE = (FLASH_BASE_ADDRESS+FLASH_AREA_0_OFFSET),
  RE_APP_IMAGE_NUMBER = (HEX(MCUBOOT_APP_IMAGE_NUMBER)),
  RE_IMAGE_NUMBER = (0x2),
#if  defined(OEMIROT_EXTERNAL_FLASH_ENABLE)
  RE_EXTERNAL_FLASH_ENABLE = (0x1),
#if FLASH_NS_PARTITION_SIZE == 0
  RE_IMAGE_FLASH_ADDRESS_NON_SECURE = (0x0),
#else
  RE_IMAGE_FLASH_ADDRESS_NON_SECURE = (FLASH_BASE_ADDRESS+FLASH_AREA_1_OFFSET),
#endif /* FLASH_NS_PARTITION_SIZE */
  /* area for updates slot address */
  RE_IMAGE_FLASH_SECURE_UPDATE = (SPI_FLASH_BASE_ADDRESS+FLASH_AREA_2_OFFSET),
  RE_IMAGE_FLASH_NON_SECURE_UPDATE = (SPI_FLASH_BASE_ADDRESS+FLASH_AREA_3_OFFSET),
  RE_PRIMARY_ONLY = (0x0),
#else
  RE_EXTERNAL_FLASH_ENABLE = (0x0),
#if (MCUBOOT_APP_IMAGE_NUMBER == 2)
  RE_IMAGE_FLASH_ADDRESS_NON_SECURE = (FLASH_BASE_ADDRESS+FLASH_AREA_1_OFFSET),	
  /* area for updates slot address */
#if !defined(MCUBOOT_PRIMARY_ONLY)
  RE_IMAGE_FLASH_SECURE_UPDATE = (FLASH_BASE_ADDRESS+FLASH_AREA_2_OFFSET),
  RE_IMAGE_FLASH_NON_SECURE_UPDATE = (FLASH_BASE_ADDRESS+FLASH_AREA_3_OFFSET),
  RE_PRIMARY_ONLY = (0x0),
#else
  RE_IMAGE_FLASH_SECURE_UPDATE = (FLASH_BASE_ADDRESS+FLASH_AREA_0_OFFSET),
  RE_IMAGE_FLASH_NON_SECURE_UPDATE = (FLASH_BASE_ADDRESS+FLASH_AREA_1_OFFSET),
  RE_PRIMARY_ONLY = (0x1),
#endif /* MCUBOOT_PRIMARY_ONLY */
#else /*(MCUBOOT_APP_IMAGE_NUMBER == 1) */
  RE_IMAGE_FLASH_ADDRESS_NON_SECURE = (0x0),
#if !defined(MCUBOOT_PRIMARY_ONLY)
  RE_IMAGE_FLASH_SECURE_UPDATE = (FLASH_BASE_ADDRESS+FLASH_AREA_2_OFFSET),
  RE_IMAGE_FLASH_NON_SECURE_UPDATE = (0x0),
  RE_PRIMARY_ONLY = (0x0),
#else
  RE_IMAGE_FLASH_SECURE_UPDATE = (FLASH_BASE_ADDRESS+FLASH_AREA_0_OFFSET),
  RE_IMAGE_FLASH_NON_SECURE_UPDATE = (0x0),
  RE_PRIMARY_ONLY = (0x1),
#endif /* MCUBOOT_PRIMARY_ONLY */
#endif /* (MCUBOOT_APP_IMAGE_NUMBER == 2) */
#endif /* OEMIROT_EXTERNAL_FLASH_ENABLE */
  RE_S_DATA_IMAGE_NUMBER = (HEX(MCUBOOT_S_DATA_IMAGE_NUMBER)),
#if (MCUBOOT_S_DATA_IMAGE_NUMBER == 1)
  RE_IMAGE_FLASH_ADDRESS_DATA_SECURE = (FLASH_BASE_ADDRESS+FLASH_AREA_4_OFFSET),
#if !defined(MCUBOOT_PRIMARY_ONLY)
  RE_IMAGE_FLASH_DATA_SECURE_UPDATE = (FLASH_BASE_ADDRESS+FLASH_AREA_6_OFFSET),
#else
  RE_IMAGE_FLASH_DATA_SECURE_UPDATE = (FLASH_BASE_ADDRESS+FLASH_AREA_4_OFFSET),
#endif /* MCUBOOT_PRIMARY_ONLY */
  RE_IMAGE_FLASH_SECURE_DATA_IMAGE_SIZE = (FLASH_S_DATA_PARTITION_SIZE),
#else
  RE_IMAGE_FLASH_ADDRESS_DATA_SECURE = (0x0),
  RE_IMAGE_FLASH_DATA_SECURE_UPDATE = (0x0),
  RE_IMAGE_FLASH_SECURE_DATA_IMAGE_SIZE = (0x0),
#endif /* (MCUBOOT_S_DATA_IMAGE_NUMBER == 1) */
  RE_NS_DATA_IMAGE_NUMBER = (HEX(MCUBOOT_NS_DATA_IMAGE_NUMBER)),
#if (MCUBOOT_NS_DATA_IMAGE_NUMBER == 1)
  RE_IMAGE_FLASH_ADDRESS_DATA_NON_SECURE = (FLASH_BASE_ADDRESS+FLASH_AREA_5_OFFSET),
#if !defined(MCUBOOT_PRIMARY_ONLY)
  RE_IMAGE_FLASH_DATA_NON_SECURE_UPDATE = (FLASH_BASE_ADDRESS+FLASH_AREA_7_OFFSET),
#else
  RE_IMAGE_FLASH_DATA_NON_SECURE_UPDATE = (FLASH_BASE_ADDRESS+FLASH_AREA_5_OFFSET),
#endif /* MCUBOOT_PRIMARY_ONLY */
  RE_IMAGE_FLASH_NON_SECURE_DATA_IMAGE_SIZE = (FLASH_NS_DATA_PARTITION_SIZE),
#else
  RE_IMAGE_FLASH_ADDRESS_DATA_NON_SECURE = (0x0),
  RE_IMAGE_FLASH_DATA_NON_SECURE_UPDATE = (0x0),
  RE_IMAGE_FLASH_NON_SECURE_DATA_IMAGE_SIZE = (0x0),
#endif /* (MCUBOOT_NS_DATA_IMAGE_NUMBER == 1) */
  RE_BL2_PERSO_ADDRESS = (FLASH_BASE_ADDRESS+FLASH_AREA_PERSO_OFFSET),
#if defined (OEMUROT_ENABLE)
  RE_OEMIROT_DOWNLOAD_IMAGE_AREA_0 = (FLASH_BASE_ADDRESS + OEMIROT_AREA_0_OFFSET),
  RE_OEMIROT_DOWNLOAD_IMAGE_AREA_0_OFFSET = (OEMIROT_AREA_0_OFFSET),
  RE_OEMIROT_DOWNLOAD_IMAGE_AREA_0_SIZE = (OEMIROT_AREA_0_SIZE),
  RE_OEMIROT_DOWNLOAD_IMAGE_AREA_2_OFFSET = (OEMIROT_AREA_2_OFFSET),
  RE_OEMIROT_DOWNLOAD_IMAGE_AREA_2_SIZE = (OEMIROT_AREA_2_SIZE),
#else
  RE_OEMIROT_DOWNLOAD_IMAGE_AREA_0 = (0x0),
  RE_OEMIROT_DOWNLOAD_IMAGE_AREA_0_OFFSET = (0x0),
  RE_OEMIROT_DOWNLOAD_IMAGE_AREA_0_SIZE = (0x0),
  RE_OEMIROT_DOWNLOAD_IMAGE_AREA_2_OFFSET = (0x0),
  RE_OEMIROT_DOWNLOAD_IMAGE_AREA_2_SIZE = (0x0),
#endif /* OEMUROT_ENABLE */
  /* area for programming hardening on page */
#if defined (OEMUROT_ENABLE)
  RE_BL2_BOOT_ADDRESS = (FLASH_BASE_ADDRESS + OEMIROT_AREA_BL2_OFFSET),
#else
  RE_BL2_BOOT_ADDRESS = (BL2_BOOT_VTOR_ADDR),
#endif /* OEMUROT_ENABLE */
  RE_BL2_SEC1_START = 0x0,
  RE_BL2_SEC1_END = (FLASH_AREA_0_OFFSET+SECURE_IMAGE_MAX_SIZE-0x1),
#if defined (OEMUROT_ENABLE)
  RE_BL2_WRP_START = OEMIROT_BL2_WRP_START,
  RE_BL2_WRP_END = (0x17FFF),
#else
  RE_BL2_WRP_START = (FLASH_AREA_PERSO_OFFSET),
  RE_BL2_WRP_END = (FLASH_AREA_BL2_NOHDP_OFFSET + FLASH_AREA_BL2_NOHDP_SIZE - 0x1),
#endif /* OEMUROT_ENABLE */
  RE_BL2_HDP_END = (FLASH_AREA_BL2_NOHDP_OFFSET-0x1),

  /* area for updates slot address */
  RE_AREA_0_OFFSET = FLASH_AREA_0_OFFSET,
  RE_AREA_0_SIZE = FLASH_AREA_0_SIZE,
  RE_AREA_1_OFFSET = FLASH_AREA_1_OFFSET,
  RE_AREA_1_SIZE = FLASH_AREA_1_SIZE,
  RE_AREA_2_OFFSET = FLASH_AREA_2_OFFSET,
  RE_AREA_2_SIZE = FLASH_AREA_2_SIZE,
  RE_AREA_3_OFFSET = FLASH_AREA_3_OFFSET,
  RE_AREA_3_SIZE = FLASH_AREA_3_SIZE,
  RE_AREA_4_OFFSET = FLASH_AREA_4_OFFSET,
  RE_AREA_4_SIZE = FLASH_AREA_4_SIZE,
  RE_AREA_5_OFFSET = FLASH_AREA_5_OFFSET,
  RE_AREA_5_SIZE = FLASH_AREA_5_SIZE,
  RE_AREA_6_OFFSET = FLASH_AREA_6_OFFSET,
  RE_AREA_6_SIZE = FLASH_AREA_6_SIZE,
  RE_AREA_7_OFFSET = FLASH_AREA_7_OFFSET,
  RE_AREA_7_SIZE = FLASH_AREA_7_SIZE,
  RE_S_NS_PARTITION_SIZE = FLASH_PARTITION_SIZE,
  RE_FLASH_B_SIZE = FLASH_B_SIZE,

  RE_CRYPTO_SCHEME = CRYPTO_SCHEME,
#if defined(MCUBOOT_ENC_IMAGES)
  RE_ENCRYPTION = (0x1),
#else
  RE_ENCRYPTION = (0x0),
#endif
#if defined(MCUBOOT_OVERWRITE_ONLY)
  RE_OVER_WRITE = (0x1),
#else
  RE_OVER_WRITE = (0x0),
#endif
  RE_FLASH_PAGE_NBR = (0x7F),
#if !defined(OEMIROT_FIRST_BOOT_STAGE) && (MCUBOOT_APP_IMAGE_NUMBER == 1) && (FLASH_NS_PARTITION_SIZE == 0)
  RE_OEMIROT_APPLI_FULL_SECURE = (0x1),
#else
  RE_OEMIROT_APPLI_FULL_SECURE = (0x0),
#endif
#if defined(STM32WBA55xx)
  RE_SELECT_WBA_TARGET = (0x55),   /* Select STM32WBA55xx */
#if defined(USE_NUCLEO_64)
  RE_IS_WBA_BOARD_DK  = (0x0),     /* Select NUCLEO-WBA55CG */
#elif defined(USE_STM32WBA55G_DK1)
  RE_IS_WBA_BOARD_DK  = (0x1),     /* Select STM32WBA55G-DK1 */
#else
#error "Wrong board configuration for WBA55"
#endif
#elif defined(STM32WBA65xx)
  RE_SELECT_WBA_TARGET = (0x65),   /* Select STM32WBA65xx */
#if defined(USE_NUCLEO_64)
  RE_IS_WBA_BOARD_DK  = (0x0),     /* Select NUCLEO-WBA65RI */
#elif defined(USE_STM32WBA65I_DK1)
  RE_IS_WBA_BOARD_DK  = (0x1),     /* Select STM32WBA65I-DK1 */
#else
#error "Wrong board configuration for WBA65"
#endif
#else
#error "No board selected"
#endif

#if defined(OEMIROT_FIRST_BOOT_STAGE)
  RE_OEMIROT_FIRST_BOOT_STAGE = (0x1),
#else
  RE_OEMIROT_FIRST_BOOT_STAGE = (0x0),
#endif /* OEMIROT_FIRST_BOOT_STAGE */
};
