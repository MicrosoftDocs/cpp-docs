---
title: "VectorViewIterator::operator++ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator++"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator++ Operator"
ms.assetid: 5391e6e2-a7ee-4dab-8cee-b2237894246f
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator++ Operator
Increments the current VectorViewIterator.  
  
## Syntax  
  
```  
  
VectorViewIterator& operator++();  
VectorViewIterator operator++(  
   int  
);  
```  
  
## Return Value  
 The first syntax increments and then returns the current VectorViewIterator. The second syntax returns a copy of the current VectorViewIterator and then increments the current VectorViewIterator.  
  
## Remarks  
 The first VectorViewIterator syntax pre-increments the current VectorViewIterator.  
  
 The second syntax post-increments the current VectorViewIterator. The `int` type in the second syntax indicates a post-increment operation, not an actual integer operand.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorViewIterator Class](../cppcx/platform-collections-vectorviewiterator-class.md)