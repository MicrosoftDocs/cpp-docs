---
title: "VectorViewIterator::operator-&gt; Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator->"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator-> Operator"
ms.assetid: cc02cfa2-dfcb-4fb7-b4a0-c290f91aa4a6
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator-&gt; Operator
Retrieves the address of the element referenced by the current VectorViewIterator.  
  
## Syntax  
  
```  
Detail::ArrowProxy<T> operator->() const;  
```  
  
## Return Value  
 The value of the element that is referenced by the current VectorViewIterator.  
  
 The type of the return value is an unspecified internal type that is required for the implementation of this operator.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorViewIterator Class](../cppcx/platform-collections-vectorviewiterator-class.md)