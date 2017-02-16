---
title: "VectorViewIterator::operator+ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator+"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator+ Operator"
ms.assetid: 8206de2f-61b3-49cd-9715-d57695d880b3
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator+ Operator
Returns a VectorViewIterator that references the element at the specified displacement from the specified VectorViewIterator.  
  
## Syntax  
  
```  
  
VectorViewIterator operator+(  
   difference_type n  
) const;  
  
template <  
   typename T  
>   
inline VectorViewIterator<T> operator+  
   (ptrdiff_t n,   
   const VectorViewIterator<T>& i  
);  
  
```  
  
#### Parameters  
 `T`  
 In the second syntax, the typename of the VectorViewIterator.  
  
 `n`  
 An integer displacement.  
  
 `i`  
 In the second syntax, a VectorViewIterator.  
  
## Return Value  
 In the first syntax, a VectorViewIterator that references the element at the specified displacement from the current VectorViewIterator.  
  
 In the second syntax, a VectorViewIterator that references the element at the specified displacement from the beginning of parameter `i`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorViewIterator Class](../cppcx/platform-collections-vectorviewiterator-class.md)