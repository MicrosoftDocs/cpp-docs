---
title: "String::Data Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::Data"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::Data"
ms.assetid: 9be4e015-dfb8-431e-a252-8498bd833f03
caps.latest.revision: 6
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# String::Data Method
Returns a pointer to the beginning of the object's data buffer as a C-style array of `char16` (`wchar_t`) elements.  
  
## Syntax  
  
```  
const char16* Data()  
```  
  
## Return Value  
 A pointer to the beginning of a `const``char16` array of Unicode characters (`char16` is a typedef for `wchar_t`).  
  
## Remarks  
 Use this method to convert from `Platform::String^` to `wchar_t*`. When the `String` object goes out of scope, the Data pointer is no longer guaranteed to be valid. To store the data beyond the lifetime of the original `String` object, use [wcscpy_s](../Topic/strcpy_s,%20wcscpy_s,%20_mbscpy_s.md) to copy the array into memory that you have allocated yourself.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** vccorlib.h  
  
## See Also  
 [Platform::String Class](../cppcx/platform-string-class.md)   
 [String::Begin Method](../cppcx/string-begin-method.md)