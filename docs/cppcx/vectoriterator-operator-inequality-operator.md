---
title: "VectorIterator::operator!= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorIterator::operator!="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorIterator::operator!= Operator"
ms.assetid: 88b71c7e-9c88-4282-a518-455059da16c2
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorIterator::operator!= Operator
Indicates whether the current VectorIterator is not equal to a specified VectorIterator.  
  
## Syntax  
  
```  
bool operator!=(  
   const VectorIterator& other  
) const;  
```  
  
#### Parameters  
 `other`  
 Another VectorIterator.  
  
## Return Value  
 `true` if the current VectorIterator is not equal to `other`; otherwise, `false`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::VectorIterator Class](../cppcx/platform-collections-vectoriterator-class.md)