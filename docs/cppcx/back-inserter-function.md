---
title: "back_inserter Function | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.topic: "language-reference"
f1_keywords: ["collection/Windows::Foundation::Collections::back_inserter"]
dev_langs: ["C++"]
helpviewer_keywords: ["back_inserter Function"]
ms.assetid: 91476338-5548-44b7-bc7e-2150f4fbe31a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# back_inserter Function
Returns an iterator that is used to insert elements at the end of the specified collection.  
  
## Syntax  
  
```  
  
template <typename T>
Platform::BackInsertIterator<T>   
    back_inserter(IVector<T>^ v);  
  
template<typename T>  
Platform::BackInsertIterator<T>   
   back_inserter(IObservableVector<T>^ v);  
```  
  
#### Parameters  
*T*<br/>
A template type parameter.  
  
*v*<br/>
An interface pointer that provides access to the underlying collection.  
  
### Return Value  
 An iterator.  
  
### Requirements  
 **Header:** collection.h  
  
 **Namespace:** Windows::Foundation::Collections  
  
## See Also  
 [Windows::Foundation::Collections Namespace](../cppcx/windows-foundation-collections-namespace-c-cx.md)