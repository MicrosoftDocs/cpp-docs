---
title: "Platform::TypeCode Enumeration | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::TypeCode"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::TypeCode Enumeration"
ms.assetid: 93c1305f-eb16-4bec-aead-f88d9518b4cf
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::TypeCode Enumeration
Specifies a numeric category that represents a built-in type.  
  
## Syntax  
  
```cpp  
enum class TypeCode {};  
```  
  
### Members  
  
|Type Code|Description|  
|---------------|-----------------|  
|Boolean|A Platform::Boolean type.|  
|Char16|A default::char16 type.|  
|DateTime|A DateTime type.|  
|Decimal|A numeric type.|  
|Double|A default::float64 type.|  
|Empty|Void|  
|Int16|A default::int16 type.|  
|Int32|A default::int32 type.|  
|Int64|A default::int64 type.|  
|Int8|A default::int8 type.|  
|Object|A Platform::Object type.|  
|Single|A default::float32 type.|  
|String|A Platform::String type.|  
|UInt16|A default::uint16 type.|  
|UInt32|A default::uint32 type.|  
|UInt64|A default::uint64 type.|  
|UInt8|A default::uint8 type.|  
  
### Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** platform.winmd