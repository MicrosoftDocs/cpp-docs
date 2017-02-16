---
title: "Vector::InsertAt Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::InsertAt"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::InsertAt"
ms.assetid: 05b2ca08-234e-4fc0-acfd-cafa148d1577
caps.latest.revision: 2
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::InsertAt Method
Inserts the specified item into the current Vector after the element identified by the specified index.  
  
## Syntax  
  
```  
  
virtual void InsertAt(  
   unsigned int index,   
   T item)  
```  
  
#### Parameters  
 `index`  
 A zero-based, unsigned integer that specifies a particular element in the Vector object.  
  
 `item`  
 An item to insert into the Vector after the element specified by `index`. The type of `item` is defined by the *T* typename.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)