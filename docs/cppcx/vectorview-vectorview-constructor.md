---
title: "VectorView::VectorView Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::VectorView::VectorView"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "VectorView::VectorView Constructor"
ms.assetid: 5ec14dbc-5f6f-44b6-8fc4-f5a31053eb5f
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# VectorView::VectorView Constructor
Initializes a new instance of the VectorView class.  
  
## Syntax  
  
```  
VectorView();  
explicit VectorView(  
   UInt32 size  
);  
VectorView(  
   UInt32 size,  
   T value  
);  
explicit VectorView(  
   const ::std::vector<T>& v  
);  
explicit VectorView(  
   ::std::vector<T>&& v  
);  
VectorView(  
   const T * ptr,  
   UInt32 size  
);  
  
template <  
   size_t N  
>  
explicit VectorView(  
   const T (&arr)[N]  
);  
  
template <  
   size_t N  
>  
explicit VectorView(  
   const ::std::array<T,  
   N>& a  
);  
  
explicit VectorView(  
   const ::Platform::Array<T>^ arr  
);  
  
template <  
   typename InIt  
>  
VectorView(  
   InItfirst,  
   InItlast  
);  
  
VectorView(  
   std::initializer_list<T> il  
);  
```  
  
#### Parameters  
 `InIt`  
 The type of a collection of objects that is used to initialize the current VectorView.  
  
 il  
 A [std::initializer_list](../standard-library/initializer-list-class.md) whose elements will be used to initialize the VectorView.  
  
 `N`  
 The number of elements in a collection of objects that is used to initialize the current VectorView.  
  
 `size`  
 The number of elements in the VectorView.  
  
 `value`  
 A value that is used to initialize each element in the current VectorView.  
  
 `v`  
 An [Lvalues and Rvalues](.../cpp/lvalues-and-rvalues-visual-cpp.md) to a [std::vector](../standard-library/vector-class.md) that is used to initialize the current VectorView.  
  
 `ptr`  
 Pointer to a `std::vector` that is used to initialize the current VectorView.  
  
 `arr`  
 A [Platform::Array](../cppcx/platform-array-class.md) object that is used to initialize the current VectorView.  
  
 `a`  
 A [std::array](../standard-library/array-class-stl.md) object that is used to initialize the current VectorView.  
  
 `first`  
 The first element in a sequence of objects that are used to initialize the current VectorView. The type of `first` is passed by means of *perfect forwarding*. For more information, see [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
 `last`  
 The last element in a sequence of objects that are used to initialize the current VectorView. The type of `last` is passed by means of *perfect forwarding*. For more information, see [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)