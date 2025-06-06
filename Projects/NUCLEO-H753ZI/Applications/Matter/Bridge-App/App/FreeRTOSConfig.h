/*
 * FreeRTOS Kernel V10.0.1
 * Copyright (C) 2017 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://aws.amazon.com/freertos
 * http://www.FreeRTOS.org
 */


#ifndef FREERTOS_CONFIG_H
#define FREERTOS_CONFIG_H

/*-----------------------------------------------------------
* Application specific definitions.
*
* These definitions should be adjusted for your particular hardware and
* application requirements.
*
* THESE PARAMETERS ARE DESCRIBED WITHIN THE 'CONFIGURATION' SECTION OF THE
* FreeRTOS API DOCUMENTATION AVAILABLE ON THE FreeRTOS.org WEB SITE.
*
* See http://www.freertos.org/a00110.html.
*----------------------------------------------------------*/

/* Ensure stdint is only used by the compiler, and not the assembler. */
#if !defined(__IASMARM__)
    #include <stdint.h>
    extern uint32_t SystemCoreClock;
#endif

#define stMAX_SECTOR_SIZE         128     /* For Flash update */

#define configSUPPORT_STATIC_ALLOCATION              0

#define configUSE_PREEMPTION                         1
#define configUSE_IDLE_HOOK                          1
#define configUSE_TICK_HOOK                          0
#define configUSE_TICKLESS_IDLE                      0
#define configUSE_DAEMON_TASK_STARTUP_HOOK           1
#define configCPU_CLOCK_HZ                           ( SystemCoreClock )
#define configTICK_RATE_HZ                           ( ( TickType_t ) 1000 )
#define configMAX_PRIORITIES                         ( 7 )
#define configMINIMAL_STACK_SIZE                     ( ( uint16_t ) 128 )
#define configTOTAL_HEAP_SIZE                        ( ( size_t ) ( ( configMINIMAL_STACK_SIZE * 8 ) * 27 ) )
#define configMAX_TASK_NAME_LEN                      ( 15 )
#define configUSE_TRACE_FACILITY                     1
#define configUSE_16_BIT_TICKS                       0
#define configIDLE_SHOULD_YIELD                      1
#define configUSE_MUTEXES                            1
#define configQUEUE_REGISTRY_SIZE                    8
#define configCHECK_FOR_STACK_OVERFLOW               0
#define configUSE_RECURSIVE_MUTEXES                  1
#define configUSE_MALLOC_FAILED_HOOK                 0
#define configUSE_APPLICATION_TASK_TAG               1
#define configUSE_COUNTING_SEMAPHORES                1
#define configGENERATE_RUN_TIME_STATS                0
#define configOVERRIDE_DEFAULT_TICK_CONFIGURATION    0
#define configRECORD_STACK_HIGH_ADDRESS              1
#define configUSE_POSIX_ERRNO                        1

/* Co-routine definitions. */
#define configUSE_CO_ROUTINES                        0
#define configMAX_CO_ROUTINE_PRIORITIES              ( 2 )

/* Software timer definitions. */
#define configUSE_TIMERS                             1
#define configTIMER_TASK_PRIORITY                    ( configMAX_PRIORITIES - 2 )
#define configTIMER_QUEUE_LENGTH                     10
#define configTIMER_TASK_STACK_DEPTH                 ( configMINIMAL_STACK_SIZE )

/* Set the following definitions to 1 to include the API function, or zero
 * to exclude the API function. */
#define INCLUDE_vTaskPrioritySet                     1
#define INCLUDE_uxTaskPriorityGet                    1
#define INCLUDE_vTaskDelete                          1
#define INCLUDE_vTaskCleanUpResources                0
#define INCLUDE_vTaskSuspend                         1
#define INCLUDE_vTaskDelayUntil                      1
#define INCLUDE_vTaskDelay                           1
#define INCLUDE_xTaskGetSchedulerState               1
#define INCLUDE_xTaskAbortDelay                      1
#define INCLUDE_xTaskGetCurrentTaskHandle            1
#define INCLUDE_xTaskGetHandle                       1

/* Cortex-M specific definitions. */
#ifdef __NVIC_PRIO_BITS
    /* __BVIC_PRIO_BITS will be specified when CMSIS is being used. */
    #define configPRIO_BITS    __NVIC_PRIO_BITS
#else
    #define configPRIO_BITS    4                                 /* 15 priority levels. */
#endif

/* The lowest interrupt priority that can be used in a call to a "set priority"
 * function. */
#define configLIBRARY_LOWEST_INTERRUPT_PRIORITY         0xf

/* The highest interrupt priority that can be used by any interrupt service
 * routine that makes calls to interrupt safe FreeRTOS API functions.  DO NOT CALL
 * INTERRUPT SAFE FREERTOS API FUNCTIONS FROM ANY INTERRUPT THAT HAS A HIGHER
 * PRIORITY THAN THIS! (higher priorities are lower numeric values. */
/* The numeric value must not be suffixed by 'U' because the MDK-ARM assembler does not support it */
#define configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY    1

/* Interrupt priorities used by the kernel port layer itself.  These are generic
* to all Cortex-M ports, and do not rely on any particular library functions. */
#define configKERNEL_INTERRUPT_PRIORITY \
    ( configLIBRARY_LOWEST_INTERRUPT_PRIORITY << ( 8 - configPRIO_BITS ) )

/* !!!! configMAX_SYSCALL_INTERRUPT_PRIORITY must not be set to zero !!!!
 * See http://www.FreeRTOS.org/RTOS-Cortex-M3-M4.html. */
#define configMAX_SYSCALL_INTERRUPT_PRIORITY \
    ( configLIBRARY_MAX_SYSCALL_INTERRUPT_PRIORITY << ( 8 - configPRIO_BITS ) )

/* Normal assert() semantics without relying on the provision of an assert.h
 * header file. */
#ifdef AMAZON_FREERTOS_ENABLE_UNIT_TESTS
#define configASSERT( x )                                       \
    if( ( x ) == 0 )  TEST_ABORT()
#else /* AMAZON_FREERTOS_ENABLE_UNIT_TESTS */
#define configASSERT( x )                                        \
    if( ( x ) == 0 ) { taskDISABLE_INTERRUPTS(); for( ; ; ) {; } \
    }
#endif /* AMAZON_FREERTOS_ENABLE_UNIT_TESTS */

/* Logging task definitions. */
//#if !defined(__IASMARM__)
//extern void vMainUARTPrintString( char * pcString );
//extern void vLoggingPrintf( const char * pcFormat,
//                     ... );
//extern void vLoggingPrint( const char * pcMessage );
//#endif

extern void vMainUARTPrintString( const char * pcString );

/* Map the FreeRTOS printf() to the logging task printf. */
//#define configPRINTF( x )          vLoggingPrintf x
//#define configPRINT( X )           vLoggingPrint( X )
/* Map the logging task's printf to the board specific output function. */
#define configPRINT_STRING( x )    vMainUARTPrintString( x );

/* Sets the length of the buffers into which logging messages are written - so
 * also defines the maximum length of each log message. */
#define configLOGGING_MAX_MESSAGE_LENGTH            1600

/* Set to 1 to prepend each log message with a message number, the task name,
 * and a time stamp. */
#define configLOGGING_INCLUDE_TIME_AND_TASK_NAME    1

/* Pseudo random number generator, just used by demos so does not have to be
 * secure.  Do not use the standard C library rand() function as it can cause
 * unexpected behaviour, such as calls to malloc(). */
#if !defined(__IASMARM__)
extern int iMainRand32( void );
#define configRAND32()    iMainRand32()
#endif

/* Demo specific macros that allow the application writer to insert code to be
 * executed immediately before the MCU's STOP low power mode is entered and exited
 * respectively.  These macros are in addition to the standard
 * configPRE_SLEEP_PROCESSING() and configPOST_SLEEP_PROCESSING() macros, which are
 * called pre and post the low power SLEEP mode being entered and exited.  These
 * macros can be used to turn turn off and on IO, clocks, the Flash etc. to obtain
 * the lowest power possible while the tick is off. */
#if !defined(__IASMARM__)
    void vMainPreStopProcessing( void );
    void vMainPostStopProcessing( void );
#endif /* defined(__ICCARM__) || defined(__CC_ARM) || defined(__GNUC__) */

#define configPRE_STOP_PROCESSING     vMainPreStopProcessing
#define configPOST_STOP_PROCESSING    vMainPostStopProcessing

/* Definitions that map the FreeRTOS port interrupt handlers to their CMSIS
 * standard names. */
#define vPortSVCHandler               SVC_Handler
#define xPortPendSVHandler            PendSV_Handler
#define vHardFault_Handler            HardFault_Handler

/* IMPORTANT: This define MUST be commented when used with STM32Cube firmware,
 *            to prevent overwriting SysTick_Handler defined within STM32Cube HAL. */
#define xPortSysTickHandler SysTick_Handler

/*********************************************
 * FreeRTOS specific demos
 ********************************************/

/* The platform FreeRTOS is running on. */
#define configPLATFORM_NAME    "STM32H753ZI-Nucleo"

#define INCLUDE_uxTaskGetStackHighWaterMark 1

#define INCLUDE_xSemaphoreGetMutexHolder             1

/* The name allocated to the Idle task. */
#define configIDLE_TASK_NAME "IdleTask"
/* The name assigned to the timer service task. */
#define configTIMER_SERVICE_TASK_NAME "TmrSvcTask"

#endif /* FREERTOS_CONFIG_H */
