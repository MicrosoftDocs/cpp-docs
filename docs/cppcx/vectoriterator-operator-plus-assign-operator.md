---
title: "VectorIterator::operator+= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator+="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator+= Operator"
ms.assetid: 9fd0d8a9-29ae-439a-b6ee-39e8fcf225ec
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator+= Operator
Increments the current VectorIterator by the specified displacement.  
  
## Syntax  
  
```  
VectorIterator& operator+=(  
   difference_type n  
);  
```  
  
#### Parameters  
 `n`  
 A integer displacement.  
  
## Return Value  
 The updated VectorIterator.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)