---
title: "WriteOnlyArray::begin Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::WriteOnlyArray::begin"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "WriteOnlyArray::begin Method"
ms.assetid: 25025fa0-8f55-4abf-93ad-71db45ddfae3
caps.latest.revision: 7
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# WriteOnlyArray::begin Method
Returns a pointer to the first element in the array.  
  
## Syntax  
  
```cpp  
T* begin() const;  
```  
  
## Return Value  
 A pointer to the first element in the array.  
  
## Remarks  
 This iterator can be used with STL algorithms such as `std::sort` to operate on elements in the array.  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::WriteOnlyArray Class](../cppcx/platform-writeonlyarray-class.md)   
 [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)