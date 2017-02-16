---
title: "WriteOnlyArray::set Function | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::WriteOnlyArray::set"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WriteOnlyArray::set Function"
ms.assetid: 0359f922-f25e-47d1-b7df-87e7fd0f76e5
caps.latest.revision: 8
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WriteOnlyArray::set Function
Sets the specified value at the specified index in the array.  
  
## Syntax  
  
```cpp  
T& set(  
   unsigned int indexArg,  
   T valueArg);  
```  
  
#### Parameters  
 `indexArg`  
 The index of the element to set.  
  
 `valueArg`  
 The value to set at `indexArg`.  
  
## Return Value  
 A reference to the element that was just set.  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::WriteOnlyArray Class](../cppcx/platform-writeonlyarray-class.md)   
 [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)