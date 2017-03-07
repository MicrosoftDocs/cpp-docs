---
title: "VectorIterator::operator++ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator++"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator++ Operator"
ms.assetid: c46b18ff-45be-436a-8f31-b3a5ecc19b77
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator++ Operator
Increments the current VectorIterator.  
  
## Syntax  
  
```  
  
VectorIterator& operator++();  
VectorIterator operator++(  
   int  
);  
```  
  
## Return Value  
 The first syntax increments and then returns the current VectorIterator. The second syntax returns a copy of the current VectorIterator and then increments the current VectorIterator.  
  
## Remarks  
 The first VectorIterator syntax pre-increments the current VectorIterator.  
  
 The second syntax post-increments the current VectorIterator. The `int` type in the second syntax indicates a post-increment operation, not an actual integer operand.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)