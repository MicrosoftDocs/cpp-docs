---
title: "UnorderedMapView::UnorderedMapView Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMapView::UnorderedMapView"
ms.assetid: 408aa6ca-dd8d-4946-a817-42a31d19f429
caps.latest.revision: 4
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMapView::UnorderedMapView Constructor
Initializes a new instance of the UnorderedMapView class.  
  
## Syntax  
  
```cpp  
  
UnorderedMapView();  
  
explicit UnorderedMapView(size_t n);  
  
UnorderedMapView(size_t n, const H& h);  
  
UnorderedMapView(size_t n, const H& h, const P& p);  
  
explicit UnorderedMapView(  
    const std::unordered_map<K, V, H, P>& m  
    );  
explicit UnorderedMapView(  
    std::unordered_map<K, V, H, P>&& m  
    );  
  
template <typename InIt> UnorderedMapView(  
    InIt first,  
    InIt last  
    );  
  
template <typename InIt> UnorderedMapView(  
    InIt first,  
    InIt last,  
    size_t n  
    );  
  
template <typename InIt> UnorderedMapView(  
    InIt first,  
    InIt last,  
    size_t n,  
    const H& h  
    );  
  
template <typename InIt> UnorderedMapView(  
    InIt first,  
    InIt last,  
    size_t n,  
    const H& h,  
    const P& p  
    );  
  
UnorderedMapView(  
    std::initializer_list<std::pair<const K, V>> il  
    );  
  
UnorderedMapView(  
    std::initializer_list< std::pair<const K, V>> il,  
    size_t n  
    );  
  
UnorderedMapView(  
    std::initializer_list< std::pair<const K, V>> il,  
    size_t n,  
    const H& h  
    );  
  
UnorderedMapView(  
    std::initializer_list< std::pair<const K, V>> il,  
    size_t n,  
    const H& h,  
    const P& p  
    );  
```  
  
#### Parameters  
 n  
 The number of elements to preallocate space for.  
  
 `InIt`  
 The typename of the UnorderedMapView.  
  
 `H`  
 A function object that can a hash value for a key. Defaults to [std::hash\<K>](http://msdn.microsoft.com/en-us/54f67435-af9d-4217-a29d-fa4d2491a104) for the types that `std::hash` supports.  
  
 `P`  
 A type that provides a function object that can compare two keys to determine their equality. Defaults to [std::equal_to\<K>](../standard-library/equal-to-struct.md).  
  
 `m`  
 A reference or [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) to a [std::unordered_map](../standard-library/unordered-map-class.md) that is used to initialize the UnorderedMapView.  
  
 `first`  
 The input iterator of the first element in a range of elements used to initialize the UnorderedMapView.  
  
 `last`  
 The input iterator of the first element after a range of elements used to initialize the UnorderedMapView.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections::UnorderedMapView Class](../cppcx/platform-collections-unorderedmapview-class.md)