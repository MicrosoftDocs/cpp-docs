---
title: "BackInsertIterator::BackInsertIterator Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::BackInsertIterator::BackInsertIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BackInsertIterator::BackInsertIterator Constructor"
ms.assetid: ae6f0213-a7bb-43b8-9a5e-7a8dad7c76f8
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# BackInsertIterator::BackInsertIterator Constructor
Initializes a new instance of the `BackInsertIterator` class.  
  
## Syntax  
  
```  
  
explicit BackInsertIterator(  
   Windows::Foundation::Collections::IVector<T>^ v  
);  
```  
  
#### Parameters  
 `v`  
 An IVector\<T> object.  
  
## Remarks  
 A `BackInsertIterator` inserts elements after the last element of the object specified by parameter `v`.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::BackInsertIterator Class](../cppcx/platform-collections-backinsertiterator-class.md)