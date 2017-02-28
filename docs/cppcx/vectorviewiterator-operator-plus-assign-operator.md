---
title: "VectorViewIterator::operator+= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator+="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator+= Operator"
ms.assetid: 2009e54e-a4f2-444a-b729-a1b6b8b707bb
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator+= Operator
Increments the current VectorViewIterator by the specified displacement.  
  
## Syntax  
  
```  
VectorViewIterator& operator+=(  
   difference_type n  
);  
```  
  
#### Parameters  
 `n`  
 A integer displacement.  
  
## Return Value  
 The updated VectorViewIterator.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorViewIterator Class](../cppcx/platform-collections-vectorviewiterator-class.md)