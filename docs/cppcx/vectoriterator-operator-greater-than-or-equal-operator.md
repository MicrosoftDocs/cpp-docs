---
title: "VectorIterator::operator&gt;= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator>="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator>= Operator"
ms.assetid: 8154015e-8da7-4381-8128-d3669eb88e16
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator&gt;= Operator
Indicates whether the current VectorIterator is greater than or equal to the specified VectorIterator.  
  
## Syntax  
  
```cpp  
  
bool operator>=(  
   const VectorIterator& other  
) const   
```  
  
#### Parameters  
 `other`  
 Another VectorIterator.  
  
## Return Value  
 `true` if the current VectorIterator is greater than or equal to `other`; otherwise, `false`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)