---
title: "Vector::GetMany Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::GetMany"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::GetMany Method"
ms.assetid: e2d5ccf4-101a-47e5-a0d8-56f65a7ff28d
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::GetMany Method
Retrieves a sequence of items from the current Vector, starting at the specified index, and copies them into the caller-allocated array.  
  
## Syntax  
  
```  
  
virtual unsigned int GetMany(  
   unsigned int startIndex,   
   ::Platform::WriteOnlyArray<T>^ dest  
);  
```  
  
#### Parameters  
 `startIndex`  
 The zero-based index of the start of the items to retrieve.  
  
 `dest`  
 A caller-allocated array of items that begin at the element specified by `startIndex` and end at the last element in the Vector.  
  
## Return Value  
 The number of items retrieved.  
  
## Remarks  
 This function is not intended for use directly by client code. It is used internally in the [to_vector Function](../cppcx/to-vector-function.md) to enable efficient conversion of Platform::Vector intances to std::vector instances.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)