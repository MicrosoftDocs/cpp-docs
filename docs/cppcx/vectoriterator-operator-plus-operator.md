---
title: "VectorIterator::operator+ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator+"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator+ Operator"
ms.assetid: 5e907537-7d10-4766-a412-e7ea08b3456a
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator+ Operator
Returns a VectorIterator that references the element at the specified displacement from the specified VectorIterator.  
  
## Syntax  
  
```  
  
VectorIterator operator+(  
   difference_type n) ;  
  
template <  
   typename T  
>  
inline VectorIterator<T> operator+(  
   ptrdiff_t n,  
   const VectorIterator<T>& i  
);  
  
```  
  
#### Parameters  
 `T`  
 In the second syntax, the typename of the VectorIterator.  
  
 `n`  
 An integer displacement.  
  
 `i`  
 In the second syntax, a VectorIterator.  
  
## Return Value  
 In the first syntax, a VectorIterator that references the element at the specified displacement from the current VectorIterator.  
  
 In the second syntax, a VectorIterator that references the element at the specified displacement from the beginning of parameter `i`.  
  
## Remarks  
 The first syntax example  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform Namespace](platform-namespace-c-cx.md)