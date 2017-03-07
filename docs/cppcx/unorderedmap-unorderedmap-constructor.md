---
title: "UnorderedMap::UnorderedMap Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "12/30/2016"
ms.prod: "windows-client-threshold"  
ms.technology: ""
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "collection/Platform::Collections::UnorderedMap::UnorderedMap"
ms.assetid: bd62e663-7f3a-43ef-ad6d-8266128c778b
caps.latest.revision: 5
author: "ghogen"
ms.author: "ghogen"
manager: "ghogen"
---
# UnorderedMap::UnorderedMap Constructor
Initializes a new instance of the UnorderedMap class.  
  
## Syntax  
  
```cpp  
UnorderedMap();  
  
  explicit UnorderedMap(  
      size_t n  
      );  
  
  UnorderedMap(  
      size_t n,  
      const H& h  
      );  
  
  UnorderedMap(  
      size_t n,  
      const H& h,  
      const P& p  
      );  
  
  explicit UnorderedMap(  
      const std::unordered_map<K, V, H, P>& m  
      );  
  
  explicit UnorderedMap(  
      std::unordered_map<K, V, H, P>&& m  
      );  
  
  template <typename InIt> UnorderedMap(  
      InIt first,  
      InIt last  
      );  
  
  template <typename InIt> UnorderedMap(  
      InIt first,  
      InIt last,  
      size_t n  
      );  
  
  template <typename InIt> UnorderedMap(  
      InIt first,  
      InIt last,  
      size_t n,  
      const H& h  
      );  
  
  template <typename InIt> UnorderedMap(  
      InIt first,  
      InIt last,  
      size_t n,  
      const H& h,  
      const P& p  
      );  
  
  UnorderedMap(std::initializer_list<  
      std::pair<const K, V>> il  
      );  
  
  UnorderedMap(::std::initializer_list<  
      std::pair<const K, V>> il,  
      size_t n  
      );  
  
  UnorderedMap(  
      ::std::initializer_list< ::std::pair<const K, V>> il,  
      size_t n,  
      const H& h  
      );  
  
  UnorderedMap(::std::initializer_list<  
      ::std::pair<const K, V>> il,  
      size_t n,  
      const H& h,  
      const P& p  
      );  
```  
  
#### Parameters  
 `InIt`  
 The typename of the current UnorderedMap.  
  
 `P`  
 A function object that can compare two keys to determine whether they are equal. This parameter defaults to [std::equal_to\<K>](../standard-library/equal-to-struct.md).  
  
 `H`  
 A function object that produces a hash value for a keys. This parameter defaults to [hash Class 1](../standard-library/hash-class.md) for the key types that that class supports.  
  
 `m`  
 A reference or [Lvalues and Rvalues](../cpp/lvalues-and-rvalues-visual-cpp.md) to a [std::unordered_map](../standard-library/unordered-map-class.md) that is used to initialize the current UnorderedMap.  
  
 il  
 A [std::initializer_list](../standard-library/initializer-list-class.md) of [std::pair](../standard-library/pair-structure.md)objects that will be used to initialize the map.  
  
 `first`  
 The input iterator of the first element in a range of elements used to initialize the current UnorderedMap.  
  
 `last`  
 The input iterator of the first element after a range of elements used to initialize the current UnorderedMap.  
  
## Requirements  
 **Header:** collection.h  
  
 **Namespace:** Platform::Collections  
  
## See Also  
 [Platform::Collections Namespace](../cppcx/platform-collections-namespace.md)   
 [Collections](../cppcx/collections-c-cx.md)