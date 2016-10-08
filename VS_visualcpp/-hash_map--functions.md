---
title: "&lt;hash_map&gt; functions"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 28748cd0-71f7-41b9-b068-579183645fba
caps.latest.revision: 7
---
# &lt;hash_map&gt; functions
|||  
|-|-|  
|[swap](#swap)|[swap (hash_map)](#swap__hash_map_)|  
  
##  <a name="swap__hash_map_"></a>  swap (hash_map)  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_map Class](../VS_visualcpp/unordered_map-Class.md).  
  
 Exchanges the elements of two hash_maps.  
  
```  
void swap(  
   hash_map <Key, Type, Traits, Alloctor>& _Left,  
   hash_map <Key, Type, Traits, Allocator>& _Right  
);  
```  
  
### Parameters  
 `_Right`  
 The hash_map whose elements are to be exchanged with those of the map `_Left`.  
  
 `_Left`  
 The hash_map whose elements are to be exchanged with those of the map `_Right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class hash_map to execute the member function `_Left.`[swap](../VS_visualcpp/basic_ios-Class.md#hash_map__swap)*(_Right*). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **template <class T\> void swap(T&, T&)**, in the algorithm header file works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../VS_visualcpp/-hash_map-.md) and [<hash_set>](../VS_visualcpp/-hash_set-.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../VS_visualcpp/stdext-Namespace.md) for more information.  
  
##  <a name="swap"></a>  swap  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_multimap Class](../VS_visualcpp/unordered_multimap-Class.md).  
  
 Exchanges the elements of two hash_multimaps.  
  
```  
void swap(  
   hash_multimap <Key, Type, Traits, Alloctor>& _Left,  
   hash_multimap <Key, Type, Traits, Allocator>& _Right  
);  
```  
  
### Parameters  
 `_Right`  
 The hash_multimap whose elements are to be exchanged with those of the map `_Left`.  
  
 `_Left`  
 The hash_multimap whose elements are to be exchanged with those of the map `_Right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class hash_multimap to execute the member function `_Left.`[swap](../VS_visualcpp/hash_multimap-Class.md#hash_multimap__swap)*(_Right*`)`. This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **template <class T\> void swap(T&, T&)**, in the algorithm header file works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../VS_visualcpp/-hash_map-.md) and [<hash_set>](../VS_visualcpp/-hash_set-.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../VS_visualcpp/stdext-Namespace.md) for more information.  
  
## See Also  
 [<hash_map>](../VS_visualcpp/-hash_map-.md)