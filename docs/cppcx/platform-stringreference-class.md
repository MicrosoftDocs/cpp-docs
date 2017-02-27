---
title: "Platform::StringReference Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::StringReference"
dev_langs: 
  - "C++"
ms.assetid: 2d09c7ec-0f16-458e-83ed-7225a1b9221e
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::StringReference Class
An optimization type that you can use to pass string data from `Platform::String^` input parameters to other methods with a minimum of copy operations.  
  
## Syntax  
  
```cpp  
class StringReference  
```  
  
## Remarks  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[StringReference::StringReference Constructor](../cppcx/stringreference-stringreference-constructor.md)|Two constructors for creating instances of `StringReference`.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[StringReference::Data Method](../cppcx/stringreference-data-method.md)|Returns the string data as an array of char16 values.|  
|[StringReference::Length Method](../cppcx/stringreference-length-method.md)|Returns the number of characters in the string.|  
|[StringReference::GetHSTRING Method](../cppcx/stringreference-gethstring-method.md)|Returns the string data as an HSTRING.|  
|[StringReference::GetString Method](../cppcx/stringreference-getstring-method.md)|Returns the string data as a `Platform::String^`.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|`StringReference::operator=`|Assigns a `StringReference` to a new `StringReference` instance.|  
|`StringReference::operator()`|Converts a `StringReference` to a `Platform::String^`.|  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## See Also  
 [Platform::StringReference Class](../cppcx/platform-stringreference-class.md)