---
title: "String::CompareOrdinal Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::CompareOrdinal"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::CompareOrdinal"
ms.assetid: dd4a7acc-fd23-4f1e-af85-64b9086f63f8
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# String::CompareOrdinal Method
Compares two `String` objects by evaluating the numeric values of the corresponding characters in the two string values represented by the objects.  
  
## Syntax  
  
```cpp  
  
int CompareOrdinal(  
           String^ str1,   
           String^ str2)  
  
```  
  
#### Parameters  
 `str1`  
 The first String object.  
  
 `str2`  
 The second String object.  
  
## Return Value  
 An integer that indicates the lexical relationship between the two comparands. The following table lists the possible return values.  
  
|Value|Condition|  
|-----------|---------------|  
|-1|`str1` is less than `str2`.|  
|0|`str1` is equals `str2`.|  
|1|`str1` is greater than `str2`.|  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** vccorlib.h  
  
## See Also  
 [Platform::String Class](../cppcx/platform-string-class.md)