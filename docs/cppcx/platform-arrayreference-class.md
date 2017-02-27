---
title: "Platform::ArrayReference Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "Platform/Platform::ArrayReference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Platform::ArrayReference Class"
ms.assetid: 9ab3b15e-8a60-4600-8fcb-7d6c86284f4b
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::ArrayReference Class
`ArrayReference` is an optimization type that you can substitute for [Platform::Array^](../cppcx/platform-array-class.md) in input parameters when you want to fill a C-style array with the input data.  
  
## Syntax  
  
```cpp  
class ArrayReference  
```
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ArrayReference::ArrayReference Constructor](../cppcx/arrayreference-arrayreference-constructor.md)|Initializes a new instance of the `ArrayReference` class.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[ArrayReference::operator() Operator](../cppcx/arrayreference-operator-call-operator.md)|Converts this `ArrayReference` to a `Platform::Array<T>^*`.|  
|[ArrayReference::operator= Operator](../cppcx/arrayreference-operator-assign-operator.md)|Assigns the contents of another `ArrayReference` to this instance.|  
  
## Exceptions  
  
## Remarks  
 By using `ArrayReference` to fill a C-style array, you avoid the extra copy operation that would be involved in copying first to a `Platform::Array` variable, and then into the C-style array. When you use `ArrayReference`, there is only one copy operation. For a code example, see [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md).  
  
## Requirements  
 **Minimum supported client:** [!INCLUDE[win8](../cppcx/includes/win8-md.md)]  
  
 **Minimum supported server:** [!INCLUDE[winserver8](../cppcx/includes/winserver8-md.md)]  
  
 **Namespace:** Platform  
  
 **Header:** vccorlib.h  
  
## Subsection Heading  
  
## See Also  
 [Platform namespace](../cppcx/platform-namespace-c-cx.md)