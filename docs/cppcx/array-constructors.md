---
title: "Array Constructors | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::Array::Array"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Array::Array"
ms.assetid: befb8088-3915-4b5c-b7fd-90f79961412d
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Array Constructors
Initializes a one-dimensional, modifiable array of types specified by the class template parameter, *T*.  
  
## Syntax  
  
```  
  
Array(unsigned int size);  
Array(T* data, unsigned int size);  
  
```  
  
#### Parameters  
 `T`  
 Class template parameter.  
  
 `size`  
 The number of elements in the array.  
  
 `data`  
 A pointer to an array of data of type `T` that is used to initialize this Array object.  
  
## Remarks  
 For more information about how to create instances of Platform::Array, see [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::Array Class](../cppcx/platform-array-class.md)