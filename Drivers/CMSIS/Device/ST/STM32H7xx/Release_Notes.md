---
pagetitle: Release Notes for STM32H7xx CMSIS
lang: en
header-includes: <link rel="icon" type="image/x-icon" href="_htmresc/favicon.png" />
---

::: {.row}
::: {.col-sm-12 .col-lg-4}

<center>
# Release Notes for <mark>\ STM32H7xx CMSIS\ </mark>
Copyright &copy; 2017 STMicroelectronics\

[![ST logo](_htmresc/st_logo_2020.png)](https://www.st.com){.logo}
</center>


:::

::: {.col-sm-12 .col-lg-8}

# __Update History__

::: {.collapse}
<input type="checkbox" id="collapse-section18" checked aria-hidden="true">
<label for="collapse-section18" aria-hidden="true">__V1.10.6  /  06-December-2024__</label>
<div>

## Main Changes

- **system_stm32h7xx.c template files**
  - Fix computed frequencies returned by the HAL_RCC_GetHCLKFreq(), HAL_RCC_GetPCLK1Freq(), and HAL_RCC_GetPCLK2Freq() APIs.
  - Enable FMC clock to ensure effective write access to FMC Bank1 registers in the SystemInit() API.
- **STM32H723/H725/H730/H733/H735 devices header files**
  - Align the RTC TAMPER register and bitfields naming with the terminology used in the Reference Manual (RM0468).
- **STM32H742/H743/H745/H747/H750/H753/H755/H757/H7A3/H7B0/H7B3 device header files**
  - Define new RTC macros to manage specific supported Tamper features:
    - RTC_TAMPER2_SUPPORT to manage Tamper 2 support
    - RTC_TAMPMASKFLAG_SUPPORT to manage Tamper Event Masking support
    - RTC_TAMPNOERASE_SUPPORT to manage Backup Registers erasure upon Tamper Event support
    - RTC_TAMPxIE_SUPPORT to manage selective TAMPERx interrupt enable support.

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section17" aria-hidden="true">
<label for="collapse-section17" aria-hidden="true">__V1.10.5  /  30-October-2024__</label>
<div>

## Main Changes

- Update startup files to safely exit from Run* mode. 
  - Deploy the recommended “how to exit from Run* mode” configuration sequence available within product documentation.
- Update DBGMCU_APB1HFZ1_DBG_TIM24_Pos and FMC_SDCMR_MODE_2 macros with the new values.
- Align GPIO MODER defines with naming used in reference manual.
  - Rename “GPIO_MODER_MODExx” to “GPIO_MODER_MODERxx”.
- Add alignment statements ALIGN(4) to Flash sections in gcc template linker files.

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section16" aria-hidden="true">
<label for="collapse-section16" aria-hidden="true">__V1.10.4  /  15-March-2024__</label>
<div>

## Main Changes

- Update the values of the sensor calibration temperatures for H742, H743, and H753 part numbers.
- Remove the unsupported MDMA BASE channel.
- Align CMSIS with IP spec and product reference manual by adding missing bit fields definition.
- Update STM32CubeIDE projects to fix the location of .size directive in startup code to allow proper size information of vector table.
- Update the Cortex-M7 core revision.
- Set FMC_SDCMR_MODE_2 bit field definition to 0x4.
- Update to support I2S feature on SPI6 instance available on STM32H723xx, STM32H725xx, STM32H730xx, STM32H730xxQ, STM32H733xx and STM32H735xx devices.

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section15" aria-hidden="true">
<label for="collapse-section15" aria-hidden="true">__V1.10.3  /  23-September-2022__</label>
<div>

## Main Changes

- General updates to fix known defects and implementation enhancements
- Update system_stm32h7xx_*.c template files to fix typo in comment: the VTOR offset value is multiple of 0x400.
- Adjust QUADSPI FIFO level threshold bits mask definition on 5 bits instead of 4bits.

</div>
:::
::: {.collapse}
<input type="checkbox" id="collapse-section14" aria-hidden="true">
<label for="collapse-section14" aria-hidden="true">__V1.10.2  /  12-February-2022__</label>
<div>

## Main Changes

- General updates to fix known defects and implementation enhancements
- Add support for ADC LDO output voltage ready bit.
- Remove useless OCTOSPI_DCR1_CKCSHT definition: alignment with the reference manual
- All system_stm32h7xx.c template files
  - Update VTOR configuration to be modified by user

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section13" aria-hidden="true">
<label for="collapse-section13" aria-hidden="true">__V1.10.1  /  06-December-2021__</label>
<div>

## Main Changes

- General updates to fix known defects and implementation enhancements
- All source files: update disclaimer to add reference to the new license agreement.
- New CMSIS header files added for STM32H747xG and STM32H7575xG.
- Added new atomic register access macros in stm32h7xx.h file.
- Add LSI maximum startup time datasheet value: LSI_STARTUP_TIME.
- FLASH_SIZE incorrectly defined for CM4 for STM32H747xG and STM32H757xG.
- Add missing bit definition for HRTIM TimerB/C/D/E Reset Register.
- Fix wrong TIM_CR2_OIS6_Pos bit position.
- Add check on TIM15 within IS_TIM_SLAVE_INSTANCE() macro.
- Add check on TIM12 within IS_TIM_CLOCKSOURCE_TIX_INSTANCE() and IS_TIM_CLOCKSOURCE_ITRX_INSTANCE() macros as it supports 
  external clock mode 1 for TIX inputs and internal trigger inputs.
- Fix TIM_CCMR2_OC3M_Msk, TIM_CCMR2_OC4M_Msk, TIM_CCMR3_OC5M_Msk and TIM_CCMR3_OC6M_Msk incorrect definitions.
  - FLASH\_ACR\_LATENCY\_Msk corrected to be 3 bits instead of 4 bits.
- system_stm32h7xx.c
  - Update VTOR configuration to be modified by user

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section12" aria-hidden="true">
<label for="collapse-section12" aria-hidden="true">__V1.10.0  /  12-February-2021__</label>
<div>

## Main Changes

- Fix minor issues related to English typo in comments of registers and fields description
- Update STM32H7 devices header files to add GPV registers definition, base address and instance
- Update "FLASH_SIZE" define in STM32H7 devices header files to retrieve the flash size from the dedicated FLASH_SIZE_DATA_REGISTER register
- Update "IS_TIM_MASTER_INSTANCE" define in STM32H7 devices header files to consider TIM12 that can be a master timer
- Remove extra fields defines related to Domain D3 in DBGMCU_CR_DBG register
- Remove "FLASH_OPTCR_SWAP_BANK" and "FLASH_OPTSR_SWAP_BANK_OPT" field definitions from STM32H750xx device header file (that is a value line single bank device)
- Fix "__STM32H7xx_CMSIS_DEVICE_VERSION" definition in stm32h7xx.h file by referring to the right "STM32H7xx_CMSIS_DEVICE" defines
- Update "SystemCoreClockUpdate" function implementation in system_stm32h7xx.c files with default system_clock and PLL source set to HIS instead of CSI (as per the product specification)
- Update and improve GCC startup files to reduce the number of loads inside of the .data copy
- Update MDK-ARM template scatter files for dual core devices to fix a typo within the IRAM1 section
</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section11" aria-hidden="true">
<label for="collapse-section11" aria-hidden="true">__V1.9.0  /  29-May-2020__</label>
<div>

## Main Changes
-   Add support of stm32h723xx, stm32h725xx, stm32h733xx, stm32h735xx, stm32h730xx and stm32h730xxQ devices:
      - Add "stm32h723xx.h" , "stm32h725xx.h", "stm32h733xx.h", "stm32h735xx.h", "stm32h730xx.h" and "stm32h730xxq.h"   files
      - Add startup files "startup_stm32h723xx.s", "startup_stm32h725xx.s", "startup_stm32h733xx.s", "startup_stm32h735xx.s", "startup_stm32h730xx.s" and "startup_stm32h730xxq.s" for EWARM , MDK-ARM and GCC toolchains
      -   Add part numbers list to stm32h7xx.h header file:
          - STM32H723xx:  STM32H723VGH6, STM32H723VGT6, STM32H723ZGI6, STM32H723ZGT6, STM32H723VET6, STM32H723VEH6, STM32H723ZET6, STM32H723ZEI6 Devices
          - STM32H725xx:  STM32H725AGI6, STM32H725IGK6, STM32H725IGT6, STM32H725RGV6, STM32H725VGT6, STM32H725VGY6, STM32H725ZGT6, STM32H725REV6, SM32H725VET6, STM32H725ZET6, STM32H725AEI6, STM32H725IET6, STM32H725IEK6 Devices
          - STM32H733xx:  STM32H733VGH6, STM32H733VGT6, STM32H733ZGI6, STM32H733ZGT6, Devices
          - STM32H735xx:  STM32H735AGI6, STM32H735IGK6, STM32H735RGV6, STM32H735VGT6, STM32H735VGY6, STM32H735ZGT6 Devices
          - STM32H730xx:  STM32H730VBH6, STM32H730VBT6, STM32H730ZBT6, STM32H730ZBI6 Devices
          - STM32H730xxQ: STM32H730IBT6Q, STM32H730ABI6Q, STM32H730IBK6Q Devices

          - Add EWARM STM32H723xx, STM32H725xx, STM32H733xx, STM32H735xx, STM32H730xx and STM32H730xxQ  devices linker  files (1MB flash) for EWARM toolchain
          - Add EWARM STM32H723xE and STM32H725xE devices linker files (**Subset 512KB flash**) for EWARM toolchain

       -  Note : **stm32h730xx** and **stm32h730xxQ** are **Value line** devices with 128KB flash:
	  
-  Update STM32H7 devices header files:
   - Fix FDCAN_ECR_TEC_Msk definition (8 bits bit field instead of 4)
   - Fix IS_SMBUS_INSTANCE macro definition with the right instances list for each STM32H7 line
 
- Update system_stm32h7xx.c, system_stm32h7xx_dualcore_boot_cm4_cm7.c, system_stm32h7xx_dualcore_bootcm4_cm7gated.c, system_stm32h7xx_dualcore_bootcm7_cm4gated.c and system_stm32h7xx_singlecore.c files to:
   - Add Flash latency settings depending of the previous CPU frequency (Increasing or decreasing the CPU frequency)	
   - Fix RCC registers reset values settings
   - Disable the FMC bank1 (enabled after reset)
     - This prevents CPU speculation access on this bank which blocks the use of FMC during 24us. During this time the others FMC master (such as LTDC) cannot use it   
- Update system_stm32h7xx.c, system_stm32h7xx_dualcore_boot_cm4_cm7.c, system_stm32h7xx_dualcore_bootcm4_cm7gated.c and system_stm32h7xx_dualcore_bootcm7_cm4gated.c to:
   - Use D2_AXISRAM_BASE for Coretx-M4 VTOR when executing from RAM instead of D2_AHBSRAM_BASE
      - Note: both addresses are aliases to the same D2 domain physical RAM. D2_AXISRAM_BASE (@0x10000000) gives access to the RAM with access using Instruction bus (I), where D2_AHBSRAM_BASE(@0x30000000) gives access to the RAM with access using Data bus. thus when executing from this D2 RAM it is recommended  to use D2_AXISRAM_BASE alias so the execution scheme respects the Harvard architecture (One bus for data and one bus for instructions).
		  
- Update system_stm32h7xx.c and  system_stm32h7xx_dualcore_boot_cm4_cm7.c to:
   - Fix usage of SCB->SCR register: SEVONPEND enabled so that an interrupt generated by the other CPU triggers an event and wakes up the current CPU after a WFI/WFE instruction
    even if the interrupt is disabled
   
- Add EWARM, linker files for STM32H742xG and STM32H743xG devices coming with 1MB flash: 512KB for each bank
- Add EWARM, MDK-ARM and GCC linker files for STM32H745xG and STM32H747xG devices coming with 1MB flash: 512KB for each bank

- Update GCC startup files for all devices to align sequence to EWARM/MDK-ARM by calling "SystemInit" prior to any memory access
  - Allowing to avoid issues when using external memories 


</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section10" aria-hidden="true">
<label for="collapse-section10" aria-hidden="true">__V1.8.0  /  14-February-2020__</label>
<div>

## Main Changes

- General updates to align Bits and registers definitions with the STM32H7 reference manual
- Update "ErrorStatus" enumeration definition in stm32h7xx.h file with SUCCESS set to numerical value zero
- Add definition of DMA_SxCR_TRBUFF bit field of DMA SxCR register allowing to enabled/disable bufferable transfers
- Remove RCC_AHB2ENR_CRYPEN/RCC_AHB2RSTR_CRYPRST/RCC_AHB2LPENR_CRYPLPEN and RCC_AHB2ENR_HASHEN/RCC_AHB2RSTR_HASHRST/RCC_AHB2LPENR_HASHLPEN from H7 devices that doesn’t support CRYP/HASH (STM32H742/43/45/47/A3)
- Add STM32H7_DEV_ID define allowing to identify the H7 Device ID
- Update OCTOSPIM_TypeDef structure definition with 3 PCR registers instead of 8 (on STM32H7A3/B3/B0 devices supporting OctoSPI)
- Add definition for OCTOSPIM_CR_MUXEN and OCTOSPIM_CR_REQ2ACK_TIME in order to support OctoSPI IO Manager multiplexed mode feature (on STM32H7A3/B3/B0 devices supporting OctoSPI)
- Update system_stm32h7xx.c to reflect the current core clock in SystemCoreClock global variable (Corex-M7 or Corext-M4 clock depending of the current context in case of Dual Core)
- Add EWARM linker files for STM32H7A3 devices with reduced Flash size to 1MB: 
  - stm32h7a3xg_flash.icf, stm32h7a3xg_flash_rw_sram1.icf, stm32h7a3xg_flash_rw_sram2.icf. 
  - stm32h7a3xgq_flash.icf, stm32h7a3xgq_flash_rw_sram1.icf, stm32h7a3xgq_flash_rw_sram2.icf.
 
</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section9" aria-hidden="true">
<label for="collapse-section9" aria-hidden="true">__V1.7.0  /  06-December-2019__</label>
<div>

## Main Changes

-  General updates to align Bit and registers definition with the STM32H7 reference manual

-   Add support of stm32h7A3xx, stm32h7A3xxQ, stm32h7B3xx, stm32h7B3xxQ, stm32h7B0xx and stm32h7B0xxQ devices:
      - Add "stm32h7a3xx.h", "stm32h7a3xxq.h", "stm32h7b3xx.h", "stm32h7b3xxq.h", "stm32h7b0xx.h" and "stm32h7b0xxq.h" files
      - Add startup files "startup_stm32h7a3xx.s", "startup_stm32h7a3xxq.s", "startup_stm32h7b3xx.s", "startup_stm32h7b3xxq.s", "startup_stm32h7b0xx.s" and "startup_stm32h7b0xxq.s"  for EWARM , MDK-ARM and STM32CubeIDE toolchains
      -   Add part numbers list to stm32h7xx.h header file:
          - STM32H7A3xx  : STM32H7A3IIK6, STM32H7A3IIT6, STM32H7A3NIH6, STM32H7A3RIT6, STM32H7A3VIH6, STM32H7A3VIT6, STM32H7A3ZIT6
          - STM32H7A3xxQ : STM32H7A3QIY6Q, STM32H7A3IIK6Q, STM32H7A3IIT6Q, STM32H7A3LIH6Q, STM32H7A3VIH6Q, STM32H7A3VIT6Q, STM32H7A3AII6Q, STM32H7A3ZIT6Q
          - STM32H7B3xx  : STM32H7B3IIK6, STM32H7B3IIT6, STM32H7B3NIH6, STM32H7B3RIT6, STM32H7B3VIH6, STM32H7B3VIT6, STM32H7B3ZIT6
          - STM32H7B3xxQ : STM32H7B3QIY6Q, STM32H7B3IIK6Q, STM32H7B3IIT6Q, STM32H7B3LIH6Q, STM32H7B3VIH6Q, STM32H7B3VIT6Q, STM32H7B3AII6Q, STM32H7B3ZIT6Q
          - STM32H7B0xx  : STM32H7B0ABIxQ, STM32H7B0IBTx, STM32H7B0RBTx, STM32H7B0VBTx, STM32H7B0ZBTx, STM32H7B0IBKxQ


- Update DMA2D bits definitions: Update to support Line offset mode and swap bytes features
  - Add CR_LOM (Line Ofset Mode) bit definition,  Add OPFCCR_SB (Swap Bytes)  bit definition
  - Update CR_MODE, FGOR_LO, BGOR_LO and OOR_LO bit definition 

- Update USB_OTG_GAHBCFG bit definition: to be aligned with LL_USB usage
- Add USB_OTG_DOEPMSK_AHBERRM, USB_OTG_DOEPMSK_BERRM, USB_OTG_DOEPMSK_NAKM, USB_OTG_DOEPMSK_NYETM, USB_OTG_DIEPINT_AHBERR, USB_OTG_DIEPINT_INEPNM, USB_OTG_DOEPINT_AHBERR, USB_OTG_DOEPINT_OUTPKTERR, USB_OTG_DOEPINT_BERR, USB_OTG_DOEPINT_NAK and USB_OTG_DOEPINT_STPKTRX bit definitions

- Update IS_TIM_REMAP_INSTANCE and IS_TIM_SYNCHRO_INSTANCE macro implementation


</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section8" aria-hidden="true">
<label for="collapse-section8" aria-hidden="true">__V1.6.0 /  28-June-2019__</label>
<div>

## Main Changes

-   Add definition of "ART_TypeDef" structure: ART accelerator for Cortex-M4 available in Dual Core devices
-   Add definition of "ART" instance: pointer to "ART_TypeDef" structure
-   Add definition of "ART" bit fields: ART_CTR_EN and ART_CTR_PCACHEADDR  
-   Update definitions of "HRTIM1_TIMA" to "HRTIM1_TIME" : pointer to HRTIM_Timerx_TypeDef structure instead of HRTIM_TIM_TypeDef
-   Fix Typo in "ETH_TypeDef" definition: use uint32_t for "RESERVED16" registers instead of int32_t
-   Remove useless definition of "SDMMC" instance (keep only definitions of "SDMMC1" and "SDMMC2")  

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section7" aria-hidden="true">
<label for="collapse-section7" aria-hidden="true">__V1.5.0 / 05-April-2019__</label>
<div>

## Main Changes

-   General updates to align Bit and registers definition with the STM32H7 reference manual
-   Updates to aligned with STM32H7xx **rev.V** devices
-   Add support of stm32h745xx, stm32h747xx, stm32h755xx, stm32h757xx **Dual Core** devices and STM32H742xx (new single core device):
      - Add "stm32h745xx.h" , "stm32h747xx.h", "stm32h755xx.h", "stm32h757xx.h" and "stm32h742xx.h" files
      - Add startup files "startup_stm32h745xx.s", "startup_stm32h747xx.s", "startup_stm32h755xx.s", "startup_stm32h757xx.s" and "startup_stm32h742xx.s" for EWARM , MDK-ARM and SW4STM32 toolchains
      -   Add part numbers list to stm32h7xx.h header file:
          - STM32H742xx: STM32H742VI, STM32H742ZI, STM32H742AI, STM32H742II, STM32H742BI, STM32H742XI
          - STM32H743xx: STM32H743VI, STM32H743ZI, STM32H743AI, STM32H743II, STM32H743BI, STM32H743XI
          - STM32H753xx: STM32H753VI, STM32H753ZI, STM32H753AI, STM32H753II, STM32H753BI, STM32H753XI
          - STM32H750xx: STM32H750V, STM32H750I, STM32H750X
          - STM32H747xx: STM32H747ZI, STM32H747AI, STM32H747II, STM32H747BI, STM32H747XI
          - STM32H757xx: STM32H757ZI, STM32H757AI, STM32H757II, STM32H757BI, STM32H757XI
          - STM32H745xx: STM32H745ZI, STM32H745II, STM32H745BI, STM32H745XI
          - STM32H755xx: STM32H755ZI, STM32H755II, STM32H755BI, STM32H755XI

          - Add system_stm32h7xx_singlecore.c : system initialization template source file for single core lines (STM32H743xx, STM32H753xx, STM32H750xx and STM32H742xx)
          - Add system initialization template source file for dual core lines:
            - system_stm32h7xx_dualcore_boot_cm4_cm7.c: template for the boot case where Cortex-M7 and Cortex-M4 are boot at once
            - system_stm32h7xx_dualcore_bootcm7_cm4gated.c: template for the boot case where Cortex-M7 is booting and Cortex-M4 is gated using FLASH Option Bytes
            - system_stm32h7xx_dualcore_bootcm4_cm7gated.c: template for the boot case where Cortex-M4 is booting and Cortex-M7 is gated using FLASH Option Bytes
          - Add EWARM, MDK-ARM and SW4STM32 **Dual Core** devices linker files
          - Add EWARM STM32H742xx devices linker files

- **Registers and bit field definitions updates**:
  - Update SYSCFG_TypeDef structure to add
    - Add CFGR register: allowing to control connection between double ECC RAMs/Flash errors, PVD errors and CortexM7/M4 lockup to TIM1/8/15/16/17 and HRTIMER Break inputs
    - Add definitions of SYSCFG_CFGR register bit fields
    - PWRCR registers: allowing to control the PWR overdrive enable/disable for Voltage Scaling zero
    - Add SYSCFG_PWRCR register bit fields
  - Update RCC_TypeDef structure according to STM32H7xx **Rev.V** devices:
    - ICSCR: renamed to HSICFGR, HSI Clock Calibration Register
    - Rename also RCC_ICSCR_XXX bit definitions RCC_HSICFGR_XXX according to the new register HSICFGR
    - CSICFGR: New registers (on **Rev.V** devices), CSI Clock Calibration Register
    - Add dedicated RCC_CSICFGR_XXX bit definitions
  - Keep RCC_Core_TypeDef structure used for Dual Core lines devices only: allowing RCC clock enabling/allocation for each Core(Cortex-M7/M4)
     - RCC_Core_TypeDef structure and RCC_C1_BASE/RCC_C1 definition removed from STM32H743xx/53xx and STM32H750xx lines
  - Add CRYP_CR_NPBLB bit field definition: upon refresh of the CRYP peripheral on the STM32H7 **Rev.V** devices
  - Update ADC_CR_BOOST bot field definition for STM32H7 **Rev.V** devices: 2 bits instead of 1
  - Remove useless I2C_CR1_SWRST definition: alignment with the reference manual
  - Add SAI_xCR1_NODIV bit field definition upon SAI peripheral update for STM32H7 **Rev.V** devices
  - Rename SPI_TXCRC_RXCRC to SPI_RXCRC_RXCRC: typo fix and alignment with the reference manual
  - Fix QUADSPI_SR_FLEVEL bit field definition: Mask on 6 bits (0x3F mask) instead of 5 bits(0x1F mask) and add definition of QUADSPI_SR_FLEVEL_6
  - Add definition of SYSCFG_EXTICR3_EXTI8_PK, SYSCFG_EXTICR3_EXTI9_PK, SYSCFG_EXTICR3_EXTI10_PK, SYSCFG_EXTICR3_EXTI11_PK and  SYSCFG_EXTICR4_EXTI13_PK
  - Add definition of FLASH_LATENCY_DEFAULT: default safe FLASH latency



</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section6" aria-hidden="true">
<label for="collapse-section6" aria-hidden="true">__V1.3.1 /  31-January-2019__</label>
<div>

## Main Changes

-   __Patch Release on top of V1.3.0__
-   Add Definition of UID_BASE ( Unique device ID register base address) to the STM32H7xx include files:
    - stm32h743xx.h, stm32h750xx.h and stm32h753xx.h

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section5" aria-hidden="true">
<label for="collapse-section5" aria-hidden="true">__V1.4.0 / 30-November-2018__</label>
<div>


## Main Changes

-   STM32H7xx include files:
    - General updates to align Bit and registers definition with the STM32H7 reference manual
    - Update "_Mask" bits definition using UL suffix for Misra-C 2012 compliance
    - Add definition of __RAMECC_MonitorTypeDef__ and  __RAMECC_TypeDef__ structure
    - Add definition of __RAMECC__ peripheral base addresses
    - Add __RAMECC__ peripheral registers bit definitions
    - Add  IS_RAMECC_MONITOR_ALL_INSTANCE macro
    - Add __EXTI__ SWIER3 bit definitions
    - Update __FLASH__  sector number to 8 instead of 16 (8 sectors for each bank)
    - Remove extra bit definition : FLASH_CR_SNB_3 to FLASH_CR_SNB_7
    - Update __FLASH__ user option bytes bit definition
    - Fix FLASH_BANK_SIZE definition: add parenthesis
    - Remove __PWR__ extra bit definition  PWR_CR1_RLPSN
    - Add __PWR__ bit definition PWR_WKUPEPR_WKUPEN
    - Fix typo in __SDMMC__ bit definition: SDMMC_MASK_SDIOITIE_Pos, SDMMC_MASK_SDIOITIE_Msk and SDMMC_MASK_SDIOITIE
    - Add __SDMMC__ instance check macro: IS_SDMMC_ALL_INSTANCE
    - Fix typo in __SYSCFG__ bit definition: SYSCFG_PMCR_EPIS_SEL_Pos, SYSCFG_PMCR_EPIS_SEL_Msk, SYSCFG_PMCR_EPIS_SEL  and SYSCFG_PMCR_EPIS_SEL_0 to SYSCFG_PMCR_EPIS_SEL_2
    - Fix __SYSCFG__ bit definitions: SYSCFG_EXTICR1_EXTI0_Msk, to SYSCFG_EXTICR1_EXTI3_Msk, 4 bits instead of 3
    - Fix __SYSCFG__ bit definitions: SYSCFG_EXTICR2_EXTI0_Msk, to SYSCFG_EXTICR2_EXTI3_Msk, 4 bits instead of 3
    - Fix __SYSCFG__ bit definitions: SYSCFG_EXTICR3_EXTI0_Msk, to SYSCFG_EXTICR3_EXTI3_Msk, 4 bits instead of 3
    - Fix __SYSCFG__ bit definitions: SYSCFG_EXTICR4_EXTI0_Msk, to SYSCFG_EXTICR3_EXTI4_Msk, 4 bits instead of 3
    - Fix IS_ADC_COMMON_INSTANCE macro : add parenthesis
    - Fix  HSEM_CR_COREID_CURRENT and HSEM_CR_COREID_CURRENT: add parenthesis
    - Update __USART__ and __SMARTCARD__ bits definition
    - Update __GPIO__ registers and bit definition (BSRR register)
    - Add IS_GPIO_AF_INSTANCE macro
    - Update __DAC__ bits definition
    - Update __FDCAN__ bits definition
    - Update __USB__ bits definition (OTEPSPRM register)
    - Fix __CEC__ bit definition (RXDR register)
    - Update __TIM__ registers and bits definition naming
    - Fix  IS_TIM_CCX_INSTANCE macro : add  TIM_CHANNEL_4 to TIM_CHANNEL_6
    - Update __SPI__ and __I2S__ bits definition
    - Update __BDMA__ bits definition
    - Update __FMC__ bits definition

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section4" aria-hidden="true">
<label for="collapse-section4" aria-hidden="true">__V1.3.0 / 29-June-2018__</label>
<div>

## Main Changes

-   Add support for stm32h750xx value line devices:
    - Add "stm32h750xx.h" file
    - Add startup files startup_stm32h750xx.s for EWARM, MDK-ARM and SW4STM32

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section3"  aria-hidden="true">
<label for="collapse-section3" aria-hidden="true">__V1.2.0 / 29-December-2017__</label>
<div>

## Main Changes

-   Update FDCAN bit definition
-   Update SystemCoreClockUpdate() function in system_stm32h7xx.c file to use direct register access

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section2" aria-hidden="true">
<label for="collapse-section2" aria-hidden="true">__V1.1.0 / 31-August-2017__</label>
<div>

## Main Changes

-   Update USB OTG bit definition
-   Adjust PLL fractional computation

</div>
:::

::: {.collapse}
<input type="checkbox" id="collapse-section1" aria-hidden="true">
<label for="collapse-section1" aria-hidden="true">__V1.0.0 / 21-April-2017__</label>
<div>

## Main Changes

-   First official release for __STM32H743xx/753xx__  devices

</div>
:::

:::
:::

<footer class="sticky">
For complete documentation on STM32 Microcontrollers </mark> ,
visit: [[www.st.com/stm32](http://www.st.com/stm32)]{style="font-color: blue;"}
</footer>
