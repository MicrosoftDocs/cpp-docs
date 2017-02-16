---
title: "VectorViewIterator::operator&lt;= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorViewIterator::operator<="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorViewIterator::operator<= Operator"
ms.assetid: 523bf6ca-fb45-498b-8e94-fa8a093dd4ad
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorViewIterator::operator&lt;= Operator
Indicates whether the current VectorIterator is less than or equal to a specified VectorIterator.  
  
## Syntax  
  
```  
  
bool operator<=(  
   const VectorViewIterator& other  
) const;  
```  
  
#### Parameters  
 `other`  
 Another VectorIterator.  
  
## Return Value  
 `true` if the current VectorIterator is less than or equal to `other`; otherwise, `false`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorViewIterator Class](../cppcx/platform-collections-vectorviewiterator-class.md)