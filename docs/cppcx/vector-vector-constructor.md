---
title: "Vector::Vector Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::Vector::Vector"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Vector::Vector Constructor"
ms.assetid: 5454433d-e206-45ea-bc8b-bb5a7bf38c17
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# Vector::Vector Constructor
Initializes a new instance of the Vector class.  
  
## Syntax  
  
```  
Vector();  
  
explicit Vector(  
    unsigned int size  
    );  
  
Vector(  
    unsigned int size,  
    T value  
    );  
  
template <typename U> explicit Vector(  
    const ::std::vector<U>& v  
    );  
  
template <typename U> explicit Vector(  
    std::vector<U>&& v  
    );  
  
Vector(  
    const T * ptr,  
    unsigned int size  
    );  
  
template <size_t N> explicit Vector(  
    const T(&arr)[N]  
    );  
  
template <size_t N> explicit Vector(  
    const std::array<T, N>& a  
    );  
  
explicit Vector(  
    const Array<T>^ arr  
    );  
  
template <typename InIt> Vector(  
    InIt first,  
    InIt last  
    );  
  
Vector(  
    std::initializer_list<T> il  
    );  
```  
  
#### Parameters  
 a  
 A [std::array](../Topic/array%20Class%20\(STL\).md) that will be used to initialize the Vector.  
  
 a  
 A [Platform::Array](../cppcx/platform-array-class.md) that will be used to initialize the Vector.  
  
 `InIt`  
 The type of a collection of objects that is used to initialize the current Vector.  
  
 il  
 A [std::initializer_list](../Topic/initializer_list%20Class.md) of objects of type `T` that will be used to initialize the Vector.  
  
 `N`  
 The number of elements in a collection of objects that is used to initialize the current Vector.  
  
 `size`  
 The number of elements in the Vector.  
  
 `value`  
 A value that is used to initialize each element in the current Vector.  
  
 `v`  
 An [Lvalues and Rvalues](../Topic/Lvalues%20and%20Rvalues%20\(Visual%20C++\).md) to a [std::vector](../Topic/vector%20Class%201.md) that is used to initialize the current Vector.  
  
 `ptr`  
 Pointer to a `std::vector` that is used to initialize the current Vector.  
  
 `arr`  
 A [Platform::Array](../cppcx/platform-array-class.md) object that is used to initialize the current Vector.  
  
 `a`  
 A [std::array](../Topic/vector%20Class%201.md) object that is used to initialize the current Vector.  
  
 `first`  
 The first element in a sequence of objects that are used to initialize the current Vector. The type of `first` is passed by means of *perfect forwarding*. For more information, see [Rvalue Reference Declarator: &&](../Topic/Rvalue%20Reference%20Declarator:%20&&.md).  
  
 `last`  
 The last element in a sequence of objects that are used to initialize the current Vector. The type of `last` is passed by means of *perfect forwarding*. For more information, see [Rvalue Reference Declarator: &&](../Topic/Rvalue%20Reference%20Declarator:%20&&.md).  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md)   
 [Collections (C++/CX)](../cppcx/collections-c-cx.md)