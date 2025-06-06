// Generated by write_buildconfig_header.py
// From "//third_party/connectedhomeip/src/platform:gen_platform_buildconfig"

#ifndef PLATFORM_CHIPDEVICEBUILDCONFIG_H_
#define PLATFORM_CHIPDEVICEBUILDCONFIG_H_

#define CHIP_DEVICE_CONFIG_CHIP_TASK_NAME "CHIPTask"

#define CHIP_DEVICE_CONFIG_ENABLE_WPA 0
#define CHIP_ENABLE_OPENTHREAD 0
#define CHIP_DEVICE_CONFIG_THREAD_FTD 0
#define CHIP_DEVICE_CONFIG_THREAD_BORDER_ROUTER 0
#define CHIP_DEVICE_CONFIG_USES_OTBR_POSIX_DBUS_STACK 0
//#define CHIP_STACK_LOCK_TRACKING_ENABLED 1
//#define CHIP_STACK_LOCK_TRACKING_ERROR_FATAL 1
#define CHIP_ENABLE_ADDITIONAL_DATA_ADVERTISING 0
#define CHIP_DEVICE_CONFIG_RUN_AS_ROOT 1
#define CHIP_DISABLE_PLATFORM_KVS 0
#define CHIP_USE_TRANSITIONAL_COMMISSIONABLE_DATA_PROVIDER 1
#define CHIP_USE_TRANSITIONAL_DEVICE_INSTANCE_INFO_PROVIDER 1
#define CHIP_DEVICE_CONFIG_ENABLE_DYNAMIC_MRP_CONFIG 0
#define CHIP_DEVICE_CONFIG_ENABLE_WIFIPAF 0

#define CHIP_DEVICE_CONFIG_ENABLE_OTA_REQUESTOR 0

//#define CHIP_DEVICE_PROJECT_CONFIG_INCLUDE <CHIPProjectConfig.h>
#define CHIP_DEVICE_PLATFORM_CONFIG_INCLUDE <platform/stm32/stm32h7/CHIPDevicePlatformConfig.h>

//#define CHIP_DEVICE_CONFIG_FIRWMARE_BUILD_DATE
//#define CHIP_DEVICE_CONFIG_FIRWMARE_BUILD_TIME

#define CHIP_DEVICE_LAYER_TARGET stm32/stm32h7
#define CHIP_DEVICE_LAYER_TARGET_STM32 1

#define CHIP_DEVICE_CONFIG_MAX_DISCOVERED_IP_ADDRESSES 5

#define CHIP_DEVICE_CONFIG_THREAD_NETWORK_ENDPOINT_ID 0

#endif  // PLATFORM_CHIPDEVICEBUILDCONFIG_H_
