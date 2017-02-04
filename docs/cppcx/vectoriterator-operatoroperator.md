---
title: "VectorIterator::operatorOperator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator[]"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator[] Operator"
ms.assetid: e1ba8101-8c16-4be1-b31b-91099d6e81f3
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operatorOperator
Retrieves a reference to the element that is a specified displacement from the current VectorIterator.  
  
## Syntax  
  
```  
  
reference operator[](difference_type n) const;  
```  
  
#### Parameters  
 `n`  
 An integer displacement.  
  
## Return Value  
 The element that is displaced by `n` elements from the current VectorIterator.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)