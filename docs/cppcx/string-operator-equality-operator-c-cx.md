---
title: "String::operator== Operator (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::operator=="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::operator=="
ms.assetid: c804b269-64f9-4bc0-929b-2dfa87bf46ac
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# String::operator== Operator (C++-CX)
Indicates whether two specified String objects have the same text value.  
  
## Syntax  
  
```cpp  
  
bool String::operator==( String^ str1,  
                         String^ str2)  
  
```  
  
#### Parameters  
 `str1`  
 The first String object to compare.  
  
 `str2`  
 The second String object to compare.  
  
## Return Value  
 `true` if the contents of `str1` are equal to `str2`; otherwise, `false`.  
  
## Remarks  
 This operator is equivalent to [String::CompareOrdinal Method](../cppcx/string-compareordinal-method.md).  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** vccorlib.h  
  
## See Also  
 [Platform::String Class](../cppcx/platform-string-class.md)