---
title: "VectorIterator::operator-= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator-="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator-= Operator"
ms.assetid: 30bcf93c-4760-410d-b344-09741be10069
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator-= Operator
Decrements the current VectorIterator by the specified displacement.  
  
## Syntax  
  
```  
VectorIterator& operator-=(  
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
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)