---
title: "WriteOnlyArray::end Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::WriteOnlyArray::end"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WriteOnlyArray::end Method"
ms.assetid: 045045fe-f210-400b-b688-7abb95fc702a
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WriteOnlyArray::end Method
Returns a pointer to one past the last element in the array.  
  
## Syntax  
  
```cpp  
T* end() const;  
```  
  
## Return Value  
 A pointer iterator to one past the last element in the array.  
  
## Remarks  
 This iterator can be used with STL algorithms to perform operations such as `std::sort` on the array elements.  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::WriteOnlyArray Class](../cppcx/platform-writeonlyarray-class.md)   
 [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)