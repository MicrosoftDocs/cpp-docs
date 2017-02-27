---
title: "BackInsertIterator::operator* Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::BackInsertIterator::operator*"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BackInsertIterator::operator* Operator"
ms.assetid: 68d70bc8-da84-49c6-ba35-4ac5aa6dad16
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# BackInsertIterator::operator* Operator
Retrieves a reference to the current BackInsertIterator.  
  
## Syntax  
  
```  
BackInsertIterator& operator*();  
```  
  
## Return Value  
 A reference to the current BackInsertIterator.  
  
## Remarks  
 This operator returns a reference to the current BackInsertIterator; not to any element in the current collection.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::BackInsertIterator Class](../cppcx/platform-collections-backinsertiterator-class.md)