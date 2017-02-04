---
title: "Platform::Collections::BackInsertIterator Class | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::BackInsertIterator"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "BackInsertIterator Class"
ms.assetid: aecee1ff-100d-4129-b84b-1966f0923dbf
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Platform::Collections::BackInsertIterator Class
Represents an iterator that inserts, rather than overwrites, elements into the back end of a sequential collection.  
  
## Syntax  
  
```  
template <  
   typename T  
>  
class BackInsertIterator : public ::std::iterator< ::std::output_iterator_tag, void, void, void, void>;  
```  
  
#### Parameters  
 `T`  
 The type of item in the current collection.  
  
## Remarks  
 The BackInsertIterator class implements the rules required by the [back_insert_iterator Class](../Topic/back_insert_iterator%20Class.md).  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[BackInsertIterator::BackInsertIterator Constructor](../cppcx/backinsertiterator-backinsertiterator-constructor.md)|Initializes a new instance of the BackInsertIterator class.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[BackInsertIterator::operator* Operator](../cppcx/backinsertiterator-operator-dereference-operator.md)|Retrieves a reference to the current BackInsertIterator.|  
|[BackInsertIterator::operator++ Operator](../cppcx/backinsertiterator-operator-increment-operator.md)|Returns a reference to the current BackInsertIterator. The iterator is unmodified.|  
|[BackInsertIterator::operator= Operator](../cppcx/backinsertiterator-operator-assign-operator.md)|Appends the specified object to the end of the current sequential collection.|  
  
## Inheritance Hierarchy  
 `BackInsertIterator`  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [(NOTINBUILD) Platform Namespace](http://msdn.microsoft.com/en-us/f3ce3eab-028c-4204-ba9f-9ab8af17c8c4)