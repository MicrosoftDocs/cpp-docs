---
title: "begin Function | Microsoft Docs"
ms.custom: ""
ms.date: "01/22/2017"
ms.technology: "cpp-windows"
ms.topic: "language-reference"
f1_keywords: ["collection/Windows::Foundation::Collections::begin"]
dev_langs: ["C++"]
helpviewer_keywords: ["begin Function"]
ms.assetid: 5a44fb33-e247-49fd-b7a1-4a5b42e9e1e4
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# begin Function
Returns an iterator that points to the beginning of a collection that is accessed by the specified interface parameter.  
  
## Syntax  
  
```  
  
template <typename T>   
    ::Platform::Collections::VectorIterator<T>   
    begin(  
          IVector<T>^ v         );  
  
template <typename T>   
    ::Platform::Collections::VectorViewIterator<T>   
    begin(  
          IVectorView<T>^ v  
         );   
  
template <typename T>   
    ::Platform::Collections::InputIterator<T>   
    begin(  
          IIterable<T>^ i         );  
  
```  
  
#### Parameters  
*T*<br/>
A template type parameter.  
  
*v*<br/>
A collection of Vector\<T> or VectorView\<T> objects that are accessed by an IVector\<T> or IVectorView\<T> interface.  
  
*i*<br/>
A collection of arbitrary Windows Runtime objects that are accessed by an IIterable\<T> interface.  
  
### Return Value  
 An iterator that points to the beginning of the collection.  
  
### Remarks  
 The first two template functions return iterators, and the third template function returns an input iterator.  
  
 The VectorIterator object that is returned by begin is a proxy iterator that stores elements of type VectorProxy\<T>. However, the proxy object is almost never visible to user code. For more information, see [Collections (C++/CX)](../cppcx/collections-c-cx.md).  
  
### Requirements  
 **Header:** collection.h  
  
 **Namespace:** Windows::Foundation::Collections  
  
## See Also  
 [Windows::Foundation::Collections Namespace](../cppcx/windows-foundation-collections-namespace-c-cx.md)