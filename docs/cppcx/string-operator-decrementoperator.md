---
title: "String::operator+ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::String::operator+"
dev_langs: 
  - "C++"
ms.assetid: 919b5ba4-3d3b-47a4-9893-9a9ce51fb9c8
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# String::operator+ Operator
Indicates whether two specifed [String](../cppcx/platform-string-class.md) objects have the same value.  
  
## Syntax  
  
```cpp  
  
bool String::operator+( String^ str1,  
                         String^ str2)  
  
```  
  
#### Parameters  
 `str1`  
 The first `String` object.  
  
 `str2`  
 The second `String` object, whose contents will be appended to `str1`.  
  
## Return Value  
 `true` if `str1` is equal to `str2`; otherwise, `false`.  
  
## Remarks  
 This operator creates a `String^` object that contains the data from the two operands. Use it for convenience when extreme performance is not critical. A few calls to "`+`" in a function will probably not be noticeable, but if you are manipulating large objects or text data in a tight loop, then use the standard C++ mechanisms and types.  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Metadata:** vccorlib.h  
  
## See Also  
 [Platform::String Class](../cppcx/platform-string-class.md)