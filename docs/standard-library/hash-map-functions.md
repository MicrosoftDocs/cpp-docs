---
title: "&lt;hash_map&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 28748cd0-71f7-41b9-b068-579183645fba
caps.latest.revision: 9
manager: "ghogen"
---
# &lt;hash_map&gt; functions
|||  
|-|-|  
|[swap](#swap)|[swap (hash_map)](#swap__hash_map_)|  
  
##  <a name="swap__hash_map_"></a>  swap (hash_map)  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_map Class](../standard-library/unordered-map-class.md).  
  
 Exchanges the elements of two hash_maps.  
  
```
void swap(
    hash_map <Key, Type, Traits, Alloctor>& left,
    hash_map <Key, Type, Traits, Allocator>& right);
```  
  
### Parameters  
 `right`  
 The hash_map whose elements are to be exchanged with those of the map `left`.  
  
 `left`  
 The hash_map whose elements are to be exchanged with those of the map `right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class hash_map to execute the member function `left.`[swap](../standard-library/basic-ios-class.md#basic_ios__swap)*(right*). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **template \<class T> void swap(T&, T&)**, in the algorithm header file works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
##  <a name="swap"></a>  swap  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_multimap Class](../standard-library/unordered-multimap-class.md).  
  
 Exchanges the elements of two hash_multimaps.  
  
```
void swap(
    hash_multimap <Key, Type, Traits, Alloctor>& left,
    hash_multimap <Key, Type, Traits, Allocator>& right);
```  
  
### Parameters  
 `right`  
 The hash_multimap whose elements are to be exchanged with those of the map `left`.  
  
 `left`  
 The hash_multimap whose elements are to be exchanged with those of the map `right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class hash_multimap to execute the member function `left.`[swap](../standard-library/hash-multimap-class.md#hash_multimap__swap)*(right*`)`. This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **template \<class T> void swap(T&, T&)**, in the algorithm header file works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../standard-library/hash-map.md) and [<hash_set>](../standard-library/hash-set.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../standard-library/stdext-namespace.md) for more information.  
  
## See Also  
 [<hash_map>](../standard-library/hash-map.md)



