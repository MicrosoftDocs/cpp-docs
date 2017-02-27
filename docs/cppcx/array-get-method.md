---
title: "Array::get Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "vccorlib/Platform::Array::get"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Array::get Method"
ms.assetid: 3bbcd829-35e7-4912-99ba-6ab9de407287
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Array::get Method
Retrieves a reference to the array element at the specified index location.  
  
## Syntax  
  
```  
  
T& get(  
unsigned int index  
)  const;  
```  
  
#### Parameters  
 `index`  
 A zero-based index that identifies an element in the array. The minimum index is 0 and the maximum index is the value specified by the `size` parameter in the [Array constructor](../cppcx/array-constructors.md).  
  
## Return Value  
 The array element specified by the `index` parameter.  
  
## Requirements  
 **Header:** vccorlib.h  
  
 **Namespace:** Platform  
  
## See Also  
 [Platform::Array Class](../cppcx/platform-array-class.md)