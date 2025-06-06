/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

// Prevent multiple inclusion
#pragma once

#include <lib/core/CHIPConfig.h>
#include <app/util/endpoint-config-defines.h>


// Default values for the attributes longer than a pointer,
// in a form of a binary blob
// Separate block is generated for big-endian and little-endian cases.
#if CHIP_CONFIG_BIG_ENDIAN_TARGET
#define GENERATED_DEFAULTS { \
\
  /* Endpoint: 0, Cluster: Localization Configuration (server), big-endian */\
\
  /* 0 - ActiveLocale, */\
  5, 'e', 'n', '-', 'U', 'S', \
\
\
  /* Endpoint: 0, Cluster: General Commissioning (server), big-endian */\
\
  /* 6 - Breadcrumb, */\
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,\
\
\
  /* Endpoint: 1, Cluster: Actions (server), big-endian */\
\
  /* 14 - SetupURL, */\
  19, 0, 'h', 't', 't', 'p', 's', ':', '/', '/', 'e', 'x', 'a', 'm', 'p', 'l', 'e', '.', 'c', 'o', 'm', \
\
}


#else // !CHIP_CONFIG_BIG_ENDIAN_TARGET
#define GENERATED_DEFAULTS { \
\
  /* Endpoint: 0, Cluster: Localization Configuration (server), little-endian */\
\
  /* 0 - ActiveLocale, */\
  5, 'e', 'n', '-', 'U', 'S', \
\
\
  /* Endpoint: 0, Cluster: General Commissioning (server), little-endian */\
\
  /* 6 - Breadcrumb, */\
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,  0x00, \
\
\
  /* Endpoint: 1, Cluster: Actions (server), little-endian */\
\
  /* 14 - SetupURL, */\
  19, 0, 'h', 't', 't', 'p', 's', ':', '/', '/', 'e', 'x', 'a', 'm', 'p', 'l', 'e', '.', 'c', 'o', 'm', \
\
}

#endif // CHIP_CONFIG_BIG_ENDIAN_TARGET

#define GENERATED_DEFAULTS_COUNT (3)

// This is an array of EmberAfAttributeMinMaxValue structures.
#define GENERATED_MIN_MAX_DEFAULT_COUNT 0
#define GENERATED_MIN_MAX_DEFAULTS { \
}


// This is an array of EmberAfAttributeMetadata structures.
#define GENERATED_ATTRIBUTE_COUNT 139
#define GENERATED_ATTRIBUTES { \
\
  /* Endpoint: 0, Cluster: Descriptor (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* DeviceTypeList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ServerList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ClientList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* PartsList */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* FeatureMap */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFD, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Access Control (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* ACL */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* Extension */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* SubjectsPerAccessControlEntry */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* TargetsPerAccessControlEntry */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000004, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* AccessControlEntriesPerFabric */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFD, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Basic Information (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* DataModelRevision */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 33, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* VendorName */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 2, ZAP_TYPE(VENDOR_ID), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* VendorID */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 33, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* ProductName */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000004, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* ProductID */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000005, 33, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(TOKENIZE) | ZAP_ATTRIBUTE_MASK(SINGLETON) | ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* NodeLabel */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000006, 3, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) | ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* Location */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000007, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* HardwareVersion */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000008, 65, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* HardwareVersionString */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000009, 4, ZAP_TYPE(INT32U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* SoftwareVersion */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000000A, 65, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* SoftwareVersionString */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000000B, 17, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* ManufacturingDate */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000000C, 33, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* PartNumber */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000000D, 258, ZAP_TYPE(LONG_CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* ProductURL */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000000E, 65, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* ProductLabel */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000000F, 33, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* SerialNumber */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x00000010, 1, ZAP_TYPE(BOOLEAN), ZAP_ATTRIBUTE_MASK(TOKENIZE) | ZAP_ATTRIBUTE_MASK(SINGLETON) | ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* LocalConfigDisabled */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000012, 33, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* UniqueID */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000013, 0, ZAP_TYPE(STRUCT), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* CapabilityMinima */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000015, 4, ZAP_TYPE(INT32U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* SpecificationVersion */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000016, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* MaxPathsPerInvoke */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(4), 0x0000FFFD, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(SINGLETON) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Localization Configuration (server) */ \
  { ZAP_LONG_DEFAULTS_INDEX(0), 0x00000000, 36, ZAP_TYPE(CHAR_STRING), ZAP_ATTRIBUTE_MASK(TOKENIZE) | ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* ActiveLocale */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* SupportedLocales */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Time Format Localization (server) */ \
  { ZAP_SIMPLE_DEFAULT(0), 0x00000000, 1, ZAP_TYPE(ENUM8), ZAP_ATTRIBUTE_MASK(TOKENIZE) | ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* HourFormat */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x00000001, 1, ZAP_TYPE(ENUM8), ZAP_ATTRIBUTE_MASK(TOKENIZE) | ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* ActiveCalendarType */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* SupportedCalendarTypes */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: General Commissioning (server) */ \
  { ZAP_LONG_DEFAULTS_INDEX(6), 0x00000000, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* Breadcrumb */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 0, ZAP_TYPE(STRUCT), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* BasicCommissioningInfo */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 1, ZAP_TYPE(ENUM8), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* RegulatoryConfig */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 1, ZAP_TYPE(ENUM8), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* LocationCapability */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000004, 1, ZAP_TYPE(BOOLEAN), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* SupportsConcurrentConnection */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Network Commissioning (server) */ \
  { ZAP_SIMPLE_DEFAULT(1), 0x00000000, 1, ZAP_TYPE(INT8U), 0 }, /* MaxNetworks */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* Networks */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000004, 1, ZAP_TYPE(BOOLEAN), ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* InterfaceEnabled */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000005, 1, ZAP_TYPE(ENUM8), ZAP_ATTRIBUTE_MASK(NULLABLE) }, /* LastNetworkingStatus */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000006, 33, ZAP_TYPE(OCTET_STRING), ZAP_ATTRIBUTE_MASK(NULLABLE) }, /* LastNetworkID */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000007, 4, ZAP_TYPE(INT32S), ZAP_ATTRIBUTE_MASK(NULLABLE) }, /* LastConnectErrorValue */  \
  { ZAP_SIMPLE_DEFAULT(4), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(2), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Diagnostic Logs (server) */ \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: General Diagnostics (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* NetworkInterfaces */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* RebootCount */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* UpTime */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 4, ZAP_TYPE(INT32U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* TotalOperationalHours */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000004, 1, ZAP_TYPE(ENUM8), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* BootReason */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000005, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ActiveHardwareFaults */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000006, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ActiveRadioFaults */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000007, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ActiveNetworkFaults */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000008, 1, ZAP_TYPE(BOOLEAN), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* TestEventTriggersEnabled */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* FeatureMap */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFD, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Software Diagnostics (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* CurrentHeapFree */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* CurrentHeapUsed */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* CurrentHeapHighWatermark */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Ethernet Network Diagnostics (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 1, ZAP_TYPE(ENUM8), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(NULLABLE) }, /* PHYRate */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 1, ZAP_TYPE(BOOLEAN), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(NULLABLE) }, /* FullDuplex */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* PacketRxCount */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* PacketTxCount */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000004, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* TxErrCount */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000005, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* CollisionCount */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000006, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* OverrunCount */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000007, 1, ZAP_TYPE(BOOLEAN), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(NULLABLE) }, /* CarrierDetect */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000008, 8, ZAP_TYPE(INT64U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* TimeSinceReset */  \
  { ZAP_SIMPLE_DEFAULT(3), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Administrator Commissioning (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 1, ZAP_TYPE(ENUM8), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* WindowStatus */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 1, ZAP_TYPE(FABRIC_IDX), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(NULLABLE) }, /* AdminFabricIndex */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 2, ZAP_TYPE(VENDOR_ID), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(NULLABLE) }, /* AdminVendorId */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Operational Credentials (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* NOCs */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* Fabrics */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 1, ZAP_TYPE(INT8U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* SupportedFabrics */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 1, ZAP_TYPE(INT8U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* CommissionedFabrics */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000004, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* TrustedRootCertificates */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000005, 1, ZAP_TYPE(INT8U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* CurrentFabricIndex */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Group Key Management (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* GroupKeyMap */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* GroupTable */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* MaxGroupsPerFabric */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* MaxGroupKeysPerFabric */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* FeatureMap */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFD, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: Fixed Label (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* LabelList */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 0, Cluster: User Label (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) | ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* LabelList */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 1, Cluster: Identify (server) */ \
  { ZAP_SIMPLE_DEFAULT(0x0), 0x00000000, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(WRITABLE) }, /* IdentifyTime */  \
  { ZAP_SIMPLE_DEFAULT(0x0), 0x00000001, 1, ZAP_TYPE(ENUM8), 0 }, /* IdentifyType */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(5), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 1, Cluster: Descriptor (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* DeviceTypeList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ServerList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ClientList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* PartsList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000004, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* TagList */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* FeatureMap */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFD, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ClusterRevision */  \
\
  /* Endpoint: 1, Cluster: Actions (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ActionList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* EndpointLists */  \
  { ZAP_LONG_DEFAULTS_INDEX(14), 0x00000002, 514, ZAP_TYPE(LONG_CHAR_STRING), 0 }, /* SetupURL */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(1), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 2, Cluster: On/Off (server) */ \
  { ZAP_SIMPLE_DEFAULT(0), 0x00000000, 1, ZAP_TYPE(BOOLEAN), 0 }, /* OnOff */  \
  { ZAP_SIMPLE_DEFAULT(0), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), 0 }, /* FeatureMap */  \
  { ZAP_SIMPLE_DEFAULT(6), 0x0000FFFD, 2, ZAP_TYPE(INT16U), 0 }, /* ClusterRevision */  \
\
  /* Endpoint: 2, Cluster: Descriptor (server) */ \
  { ZAP_EMPTY_DEFAULT(), 0x00000000, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* DeviceTypeList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000001, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ServerList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000002, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ClientList */  \
  { ZAP_EMPTY_DEFAULT(), 0x00000003, 0, ZAP_TYPE(ARRAY), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* PartsList */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFC, 4, ZAP_TYPE(BITMAP32), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* FeatureMap */  \
  { ZAP_EMPTY_DEFAULT(), 0x0000FFFD, 2, ZAP_TYPE(INT16U), ZAP_ATTRIBUTE_MASK(EXTERNAL_STORAGE) }, /* ClusterRevision */  \
}


// clang-format off
#define GENERATED_EVENT_COUNT 7
#define GENERATED_EVENTS { \
  /* Endpoint: 0, Cluster: Access Control (server) */ \
  /* EventList (index=0) */ \
  0x00000000, /* AccessControlEntryChanged */ \
  /* Endpoint: 0, Cluster: Basic Information (server) */ \
  /* EventList (index=1) */ \
  0x00000000, /* StartUp */ \
  0x00000001, /* ShutDown */ \
  0x00000002, /* Leave */ \
  /* Endpoint: 0, Cluster: General Diagnostics (server) */ \
  /* EventList (index=4) */ \
  0x00000003, /* BootReason */ \
  /* Endpoint: 0, Cluster: Software Diagnostics (server) */ \
  /* EventList (index=5) */ \
  0x00000000, /* SoftwareFault */ \
  /* Endpoint: 1, Cluster: Actions (server) */ \
  /* EventList (index=6) */ \
  0x00000000, /* StateChanged */ \
}

// clang-format on

// Cluster function static arrays
#define GENERATED_FUNCTION_ARRAYS   \
const EmberAfGenericClusterFunction chipFuncArrayLocalizationConfigurationServer[] = {\
  (EmberAfGenericClusterFunction) emberAfLocalizationConfigurationClusterServerInitCallback,\
  (EmberAfGenericClusterFunction) MatterLocalizationConfigurationClusterServerPreAttributeChangedCallback,\
};\
const EmberAfGenericClusterFunction chipFuncArrayTimeFormatLocalizationServer[] = {\
  (EmberAfGenericClusterFunction) emberAfTimeFormatLocalizationClusterServerInitCallback,\
  (EmberAfGenericClusterFunction) MatterTimeFormatLocalizationClusterServerPreAttributeChangedCallback,\
};\
const EmberAfGenericClusterFunction chipFuncArrayIdentifyServer[] = {\
  (EmberAfGenericClusterFunction) emberAfIdentifyClusterServerInitCallback,\
  (EmberAfGenericClusterFunction) MatterIdentifyClusterServerAttributeChangedCallback,\
};\
const EmberAfGenericClusterFunction chipFuncArrayOnOffServer[] = {\
  (EmberAfGenericClusterFunction) emberAfOnOffClusterServerInitCallback,\
  (EmberAfGenericClusterFunction) MatterOnOffClusterServerShutdownCallback,\
};\



// clang-format off
#define GENERATED_COMMANDS { \
  /* Endpoint: 0, Cluster: General Commissioning (server) */\
  /*   AcceptedCommandList (index=0) */ \
  0x00000000 /* ArmFailSafe */, \
  0x00000002 /* SetRegulatoryConfig */, \
  0x00000004 /* CommissioningComplete */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=4)*/ \
  0x00000001 /* ArmFailSafeResponse */, \
  0x00000003 /* SetRegulatoryConfigResponse */, \
  0x00000005 /* CommissioningCompleteResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 0, Cluster: Diagnostic Logs (server) */\
  /*   AcceptedCommandList (index=8) */ \
  0x00000000 /* RetrieveLogsRequest */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=10)*/ \
  0x00000001 /* RetrieveLogsResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 0, Cluster: General Diagnostics (server) */\
  /*   AcceptedCommandList (index=12) */ \
  0x00000000 /* TestEventTrigger */, \
  0x00000001 /* TimeSnapshot */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=15)*/ \
  0x00000002 /* TimeSnapshotResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 0, Cluster: Ethernet Network Diagnostics (server) */\
  /*   AcceptedCommandList (index=17) */ \
  0x00000000 /* ResetCounts */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 0, Cluster: Administrator Commissioning (server) */\
  /*   AcceptedCommandList (index=19) */ \
  0x00000000 /* OpenCommissioningWindow */, \
  0x00000001 /* OpenBasicCommissioningWindow */, \
  0x00000002 /* RevokeCommissioning */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 0, Cluster: Operational Credentials (server) */\
  /*   AcceptedCommandList (index=23) */ \
  0x00000000 /* AttestationRequest */, \
  0x00000002 /* CertificateChainRequest */, \
  0x00000004 /* CSRRequest */, \
  0x00000006 /* AddNOC */, \
  0x00000007 /* UpdateNOC */, \
  0x00000009 /* UpdateFabricLabel */, \
  0x0000000A /* RemoveFabric */, \
  0x0000000B /* AddTrustedRootCertificate */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=32)*/ \
  0x00000001 /* AttestationResponse */, \
  0x00000003 /* CertificateChainResponse */, \
  0x00000005 /* CSRResponse */, \
  0x00000008 /* NOCResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 0, Cluster: Group Key Management (server) */\
  /*   AcceptedCommandList (index=37) */ \
  0x00000000 /* KeySetWrite */, \
  0x00000001 /* KeySetRead */, \
  0x00000003 /* KeySetRemove */, \
  0x00000004 /* KeySetReadAllIndices */, \
  chip::kInvalidCommandId /* end of list */, \
  /*   GeneratedCommandList (index=42)*/ \
  0x00000002 /* KeySetReadResponse */, \
  0x00000005 /* KeySetReadAllIndicesResponse */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 1, Cluster: Identify (server) */\
  /*   AcceptedCommandList (index=45) */ \
  0x00000000 /* Identify */, \
  0x00000040 /* TriggerEffect */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 1, Cluster: Actions (server) */\
  /*   AcceptedCommandList (index=48) */ \
  0x00000000 /* InstantAction */, \
  chip::kInvalidCommandId /* end of list */, \
  /* Endpoint: 2, Cluster: On/Off (server) */\
  /*   AcceptedCommandList (index=50) */ \
  0x00000000 /* Off */, \
  0x00000001 /* On */, \
  0x00000002 /* Toggle */, \
  chip::kInvalidCommandId /* end of list */, \
}

// clang-format on

// This is an array of EmberAfCluster structures.
#define GENERATED_CLUSTER_COUNT 23
// clang-format off
#define GENERATED_CLUSTERS { \
  { \
      /* Endpoint: 0, Cluster: Descriptor (server) */ \
      .clusterId = 0x0000001D, \
      .attributes = ZAP_ATTRIBUTE_INDEX(0), \
      .attributeCount = 6, \
      .clusterSize = 0, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: Access Control (client) */ \
      .clusterId = 0x0000001F, \
      .attributes = ZAP_ATTRIBUTE_INDEX(6), \
      .attributeCount = 0, \
      .clusterSize = 0, \
      .mask = ZAP_CLUSTER_MASK(CLIENT), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: Access Control (server) */ \
      .clusterId = 0x0000001F, \
      .attributes = ZAP_ATTRIBUTE_INDEX(6), \
      .attributeCount = 7, \
      .clusterSize = 4, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = ZAP_GENERATED_EVENTS_INDEX( 0 ), \
      .eventCount = 1, \
    },\
  { \
      /* Endpoint: 0, Cluster: Basic Information (server) */ \
      .clusterId = 0x00000028, \
      .attributes = ZAP_ATTRIBUTE_INDEX(13), \
      .attributeCount = 23, \
      .clusterSize = 40, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = ZAP_GENERATED_EVENTS_INDEX( 1 ), \
      .eventCount = 3, \
    },\
  { \
      /* Endpoint: 0, Cluster: Localization Configuration (server) */ \
      .clusterId = 0x0000002B, \
      .attributes = ZAP_ATTRIBUTE_INDEX(36), \
      .attributeCount = 4, \
      .clusterSize = 42, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION) | ZAP_CLUSTER_MASK(PRE_ATTRIBUTE_CHANGED_FUNCTION), \
      .functions = chipFuncArrayLocalizationConfigurationServer, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: Time Format Localization (server) */ \
      .clusterId = 0x0000002C, \
      .attributes = ZAP_ATTRIBUTE_INDEX(40), \
      .attributeCount = 5, \
      .clusterSize = 8, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION) | ZAP_CLUSTER_MASK(PRE_ATTRIBUTE_CHANGED_FUNCTION), \
      .functions = chipFuncArrayTimeFormatLocalizationServer, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: General Commissioning (server) */ \
      .clusterId = 0x00000030, \
      .attributes = ZAP_ATTRIBUTE_INDEX(45), \
      .attributeCount = 7, \
      .clusterSize = 14, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 0 ), \
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 4 ), \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: Network Commissioning (server) */ \
      .clusterId = 0x00000031, \
      .attributes = ZAP_ATTRIBUTE_INDEX(52), \
      .attributeCount = 8, \
      .clusterSize = 46, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: Diagnostic Logs (server) */ \
      .clusterId = 0x00000032, \
      .attributes = ZAP_ATTRIBUTE_INDEX(60), \
      .attributeCount = 2, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 8 ), \
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 10 ), \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: General Diagnostics (server) */ \
      .clusterId = 0x00000033, \
      .attributes = ZAP_ATTRIBUTE_INDEX(62), \
      .attributeCount = 11, \
      .clusterSize = 0, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 12 ), \
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 15 ), \
      .eventList = ZAP_GENERATED_EVENTS_INDEX( 4 ), \
      .eventCount = 1, \
    },\
  { \
      /* Endpoint: 0, Cluster: Software Diagnostics (server) */ \
      .clusterId = 0x00000034, \
      .attributes = ZAP_ATTRIBUTE_INDEX(73), \
      .attributeCount = 5, \
      .clusterSize = 2, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = ZAP_GENERATED_EVENTS_INDEX( 5 ), \
      .eventCount = 1, \
    },\
  { \
      /* Endpoint: 0, Cluster: Ethernet Network Diagnostics (server) */ \
      .clusterId = 0x00000037, \
      .attributes = ZAP_ATTRIBUTE_INDEX(78), \
      .attributeCount = 11, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 17 ), \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: Administrator Commissioning (server) */ \
      .clusterId = 0x0000003C, \
      .attributes = ZAP_ATTRIBUTE_INDEX(89), \
      .attributeCount = 5, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 19 ), \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: Operational Credentials (server) */ \
      .clusterId = 0x0000003E, \
      .attributes = ZAP_ATTRIBUTE_INDEX(94), \
      .attributeCount = 8, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 23 ), \
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 32 ), \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: Group Key Management (server) */ \
      .clusterId = 0x0000003F, \
      .attributes = ZAP_ATTRIBUTE_INDEX(102), \
      .attributeCount = 6, \
      .clusterSize = 0, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 37 ), \
      .generatedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 42 ), \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: Fixed Label (server) */ \
      .clusterId = 0x00000040, \
      .attributes = ZAP_ATTRIBUTE_INDEX(108), \
      .attributeCount = 3, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 0, Cluster: User Label (server) */ \
      .clusterId = 0x00000041, \
      .attributes = ZAP_ATTRIBUTE_INDEX(111), \
      .attributeCount = 3, \
      .clusterSize = 6, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 1, Cluster: Identify (server) */ \
      .clusterId = 0x00000003, \
      .attributes = ZAP_ATTRIBUTE_INDEX(114), \
      .attributeCount = 4, \
      .clusterSize = 9, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION) | ZAP_CLUSTER_MASK(ATTRIBUTE_CHANGED_FUNCTION), \
      .functions = chipFuncArrayIdentifyServer, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 45 ), \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 1, Cluster: Descriptor (server) */ \
      .clusterId = 0x0000001D, \
      .attributes = ZAP_ATTRIBUTE_INDEX(118), \
      .attributeCount = 7, \
      .clusterSize = 0, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 1, Cluster: Binding (client) */ \
      .clusterId = 0x0000001E, \
      .attributes = ZAP_ATTRIBUTE_INDEX(125), \
      .attributeCount = 0, \
      .clusterSize = 0, \
      .mask = ZAP_CLUSTER_MASK(CLIENT), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 1, Cluster: Actions (server) */ \
      .clusterId = 0x00000025, \
      .attributes = ZAP_ATTRIBUTE_INDEX(125), \
      .attributeCount = 5, \
      .clusterSize = 520, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 48 ), \
      .generatedCommandList = nullptr, \
      .eventList = ZAP_GENERATED_EVENTS_INDEX( 6 ), \
      .eventCount = 1, \
    },\
  { \
      /* Endpoint: 2, Cluster: On/Off (server) */ \
      .clusterId = 0x00000006, \
      .attributes = ZAP_ATTRIBUTE_INDEX(130), \
      .attributeCount = 3, \
      .clusterSize = 7, \
      .mask = ZAP_CLUSTER_MASK(SERVER) | ZAP_CLUSTER_MASK(INIT_FUNCTION) | ZAP_CLUSTER_MASK(SHUTDOWN_FUNCTION), \
      .functions = chipFuncArrayOnOffServer, \
      .acceptedCommandList = ZAP_GENERATED_COMMANDS_INDEX( 50 ), \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
  { \
      /* Endpoint: 2, Cluster: Descriptor (server) */ \
      .clusterId = 0x0000001D, \
      .attributes = ZAP_ATTRIBUTE_INDEX(133), \
      .attributeCount = 6, \
      .clusterSize = 0, \
      .mask = ZAP_CLUSTER_MASK(SERVER), \
      .functions = NULL, \
      .acceptedCommandList = nullptr, \
      .generatedCommandList = nullptr, \
      .eventList = nullptr, \
      .eventCount = 0, \
    },\
}

// clang-format on

#define ZAP_FIXED_ENDPOINT_DATA_VERSION_COUNT 21

// This is an array of EmberAfEndpointType structures.
#define GENERATED_ENDPOINT_TYPES { \
  { ZAP_CLUSTER_INDEX(0), 17, 192 }, \
  { ZAP_CLUSTER_INDEX(17), 4, 529 }, \
  { ZAP_CLUSTER_INDEX(21), 2, 7 }, \
}



// Largest attribute size is needed for various buffers
#define ATTRIBUTE_LARGEST (515)

static_assert(ATTRIBUTE_LARGEST <= CHIP_CONFIG_MAX_ATTRIBUTE_STORE_ELEMENT_SIZE,
              "ATTRIBUTE_LARGEST larger than expected");

// Total size of singleton attributes
#define ATTRIBUTE_SINGLETONS_SIZE (36)

// Total size of attribute storage
#define ATTRIBUTE_MAX_SIZE (728)

// Number of fixed endpoints
#define FIXED_ENDPOINT_COUNT (3)

// Array of endpoints that are supported, the data inside
// the array is the endpoint number.
#define FIXED_ENDPOINT_ARRAY { 0x0000, 0x0001, 0x0002 }

// Array of profile ids
#define FIXED_PROFILE_IDS { 0x0103, 0x0103, 0x0103 }

// Array of device types
#define FIXED_DEVICE_TYPES {{0x00000016,1},{0x0000000E,1},{0x0000000E,1}}

// Array of device type offsets
#define FIXED_DEVICE_TYPE_OFFSETS { 0,1,2}

// Array of device type lengths
#define FIXED_DEVICE_TYPE_LENGTHS { 1,1,1}

// Array of endpoint types supported on each endpoint
#define FIXED_ENDPOINT_TYPES { 0, 1, 2 }

// Array of parent endpoints for each endpoint
#define FIXED_PARENT_ENDPOINTS { kInvalidEndpointId, kInvalidEndpointId, kInvalidEndpointId }

