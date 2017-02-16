---
title: "VectorIterator::operator-&gt; Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator->"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator-> Operator"
ms.assetid: d6caed5c-4899-45f8-95a2-687eafeeb8e1
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator-&gt; Operator
Retrieves the address of the element referenced by the current VectorIterator.  
  
## Syntax  
  
```  
Detail::ArrowProxy<T> operator->() const;  
```  
  
## Return Value  
 The value of the element that is referenced by the current VectorIterator.  
  
 The type of the return value is an unspecified internal type that is required for the implementation of this operator.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)