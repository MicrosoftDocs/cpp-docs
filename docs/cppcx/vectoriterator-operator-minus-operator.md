---
title: "VectorIterator::operator- Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator-"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator- Operator"
ms.assetid: 5714c132-e973-47fd-901b-ba13da7b9372
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator- Operator
Subtracts either a specified number of elements from the current iterator yielding a new iterator, or a specified iterator from the current iterator yielding the number of elements between the iterators.  
  
## Syntax  
  
```  
  
VectorIterator operator-(  
   difference_type n  
) const;  
  
difference_type operator-(  
   const VectorIterator& other  
) const;  
```  
  
#### Parameters  
 `n`  
 A number of elements.  
  
 `other`  
 Another VectorIterator.  
  
## Return Value  
 The first operator syntax returns a VectorIterator object that is `n` elements less than the current VectorIterator. The second operator syntax returns the number of elements between the current and the `other` VectorIterator.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)