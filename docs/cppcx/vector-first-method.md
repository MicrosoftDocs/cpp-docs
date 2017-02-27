---
title: "Vector::First Method | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::First"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::First Method"
ms.assetid: ca6b7b55-dd49-4346-bfa4-d8010b228d44
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::First Method
Returns an iterator that points to the first element in the Vector.  
  
## Syntax  
  
```  
  
virtual Windows::Foundation::Collections::IIterator <T>^   
   First();  
```  
  
## Return Value  
 An iterator that points to the first element in the Vector.  
  
## Remarks  
 A convenient way to hold the iterator returned by First() is to assign the return value to a variable that is declared with the **auto** type deduction keyword. For example, `auto x = myVector->First();`. This iterator knows the length of the collection.  
  
 When you need a pair of iterators to pass to an STL function, use the free functions [Windows::Foundation::Collections::begin](../cppcx/begin-function.md) and [Windows::Foundation::Collections::end](../cppcx/end-function.md)  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)   
 [Collections](../cppcx/collections-c-cx.md)