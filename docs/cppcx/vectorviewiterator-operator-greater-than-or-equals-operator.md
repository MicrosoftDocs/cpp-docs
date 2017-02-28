---
title: "VectorViewIterator::operator&gt;= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator>="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator>= Operator"
ms.assetid: 506fbf12-a28f-4695-a5a4-418341dec806
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator&gt;= Operator
Indicates whether the current VectorViewIterator is greater than or equal to the specified VectorViewIterator.  
  
## Syntax  
  
```  
  
bool operator>=(  
   const VectorViewIterator& other  
) const;  
```  
  
#### Parameters  
 `other`  
 Another VectorViewIterator.  
  
## Return Value  
 `true` if the current VectorViewIterator is greater than or equal to `other`; otherwise, `false`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorViewIterator Class](../cppcx/platform-collections-vectorviewiterator-class.md)