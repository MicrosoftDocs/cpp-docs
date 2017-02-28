---
title: "String::operator&gt; Operator (C++-CX) | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::operator>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::String::operator>"
ms.assetid: d32ad538-b992-4487-a1d3-ad7ba84dbdff
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# String::operator&gt; Operator (C++-CX)
Indicates whether the value of one String object is greater than the value of a second String object.  
  
## Syntax  
  
```cpp  
  
bool String::operator>( String^ str1,  
                         String^ str2)  
  
```  
  
#### Parameters  
 `str1`  
 The first String object.  
  
 `str2`  
 The second String object.  
  
## Return Value  
 `true` if the value of `str1` is greater than the value of `str2`; otherwise, `false`.  
  
## Remarks  
 This operator is equivalent to explicitly calling [String::CompareOrdinal](../cppcx/string-class.md#compareordinal) and getting a result greater than zero.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** vccorlib.h  
  
## See Also  
 [Platform::String Class](../cppcx/platform-string-class.md)