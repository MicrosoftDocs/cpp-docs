---
title: "to_vector Function | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.technology: "cpp-windows"
ms.topic: "language-reference"
f1_keywords: ["collection/Windows::Foundation::Collections::to_vector"]
dev_langs: ["C++"]
helpviewer_keywords: ["to_vector Function"]
ms.assetid: 9cdd5123-7243-4def-a1d3-162e0bf6219e
author: "ghogen"
ms.author: "ghogen"
ms.workload: ["cplusplus"]
---
# to_vector Function
Returns a `std::vector` whose value is the same as the collection underlying the specified IVector or IVectorView parameter.  
  
## Syntax  
  
```  
template <typename T>  
inline ::std::vector<T> to_vector(IVector<T>^ v); 
 
template <typename T>  
inline ::std::vector<T> to_vector(IVectorView<T>^ v);  
```  
  
#### Parameters  
 `T`  
 The template type parameter.  
  
 `v`  
 An IVector or IVectorView interface that provides access to an underlying Vector or VectorView object.  
  
### Return Value  
  
### Requirements  
 **Header:** collection.h  
  
 **Namespace:** Windows::Foundation::Collections  
  
## See Also  
 [Windows::Foundation::Collections Namespace](../cppcx/windows-foundation-collections-namespace-c-cx.md)