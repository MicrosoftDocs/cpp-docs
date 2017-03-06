---
title: "VectorViewIterator::operator-= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator-="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator-= Operator"
ms.assetid: fc4d5f19-a001-44fd-aabe-972d8b54ca2f
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator-= Operator
Decrements the current VectorIterator by the specified displacement.  
  
## Syntax  
  
```  
VectorViewIterator& operator-=(  
   difference_type n  
);  
```  
  
#### Parameters  
 `n`  
 An integer displacement.  
  
## Return Value  
 The updated VectorIterator.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorViewIterator Class](../cppcx/platform-collections-vectorviewiterator-class.md)