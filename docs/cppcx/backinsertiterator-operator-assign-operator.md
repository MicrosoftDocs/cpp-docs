---
title: "BackInsertIterator::operator= Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::BackInsertIterator::operator="
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BackInsertIterator::operator= Operator"
ms.assetid: 509c9b4c-14fb-4318-bf65-b8926cc72f4f
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# BackInsertIterator::operator= Operator
Appends the specified object to the end of the current sequential collection.  
  
## Syntax  
  
```  
  
BackInsertIterator& operator=(  
   const T& t  
);  
```  
  
#### Parameters  
 `t`  
 The object to append to the current collection.  
  
## Return Value  
 A reference to the current BackInsertIterator.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::BackInsertIterator Class](../cppcx/platform-collections-backinsertiterator-class.md)