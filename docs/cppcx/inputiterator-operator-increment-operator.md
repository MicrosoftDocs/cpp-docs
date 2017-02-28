---
title: "InputIterator::operator++ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::InputIterator::operator++"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "InputIterator::operator++ Operator"
ms.assetid: 50781585-7a12-4f02-bff8-68fe0adf0693
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# InputIterator::operator++ Operator
Increments the current InputIterator.  
  
## Syntax  
  
```  
  
InputIterator& operator++();  
  
InputIterator operator++(  
   int  
);  
```  
  
## Return Value  
 The first syntax increments and then returns the current InputIterator. The second syntax returns a copy of the current InputIterator and then increments the current InputIterator.  
  
## Remarks  
 The first InputIterator syntax pre-increments the current InputIterator.  
  
 The second syntax post-increments the current InputIterator. The `int` type in the second syntax indicates a post-increment operation, not an actual integer operand.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::InputIterator Class](../cppcx/platform-collections-inputiterator-class.md)