---
title: "BackInsertIterator::operator++ Operator | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::BackInsertIterator::operator++"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BackInsertIterator::operator++ Operator"
ms.assetid: 08324574-db2b-4d95-825e-a93a56f327da
caps.latest.revision: 3
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# BackInsertIterator::operator++ Operator
Returns a reference to the current BackInsertIterator. The iterator is unmodified.  
  
## Syntax  
  
```  
  
BackInsertIterator& operator++();  
  
BackInsertIterator operator++(  
   int  
);  
```  
  
## Return Value  
 A reference to the current BackInsertIterator.  
  
## Remarks  
 By design, the first syntax example pre-increments the current BackInsertIterator, and the second syntax post-increments the current BackInsertIterator. The `int` type in the second syntax indicates a post-increment operation, not an actual integer operand.  
  
 However, this operator does not actually modify the BackInsertIterator. Instead, this operator returns a reference to the unmodified, current iterator. This is the same behavior as [operator*](../cppcx/backinsertiterator-operator-dereference-operator.md).  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::BackInsertIterator Class](../cppcx/platform-collections-backinsertiterator-class.md)