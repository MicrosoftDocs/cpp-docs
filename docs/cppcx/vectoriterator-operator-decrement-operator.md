---
title: "VectorIterator::operator-- Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator--"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator-- Operator"
ms.assetid: 650a3037-2984-4110-9d7c-cd3756e5f4b9
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator-- Operator
Decrements the current VectorIterator.  
  
## Syntax  
  
```  
  
VectorIterator& operator--();  
VectorIterator operator--(  
   int  
);  
```  
  
## Return Value  
 The first syntax decrements and then returns the current VectorIterator. The second syntax returns a copy of the current VectorIterator and then decrements the current VectorIterator.  
  
## Remarks  
 The first VectorIterator syntax pre-decrements the current VectorIterator.  
  
 The second syntax post-decrements the current VectorIterator. The `int` type in the second syntax indicates a post-decrement operation, not an actual integer operand.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)