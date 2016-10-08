---
title: "&lt;hash_set&gt; functions"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 557a0162-3728-4537-97dc-f9f6cc7ece94
caps.latest.revision: 5
---
# &lt;hash_set&gt; functions
|||  
|-|-|  
|[swap](#swap)|[swap (hash_multiset)](#swap__hash_multiset_)|  
  
##  <a name="swap"></a>  swap  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../VS_visualcpp/unordered_set-Class.md).  
  
 Exchanges the elements of two hash_sets.  
  
```  
void swap(  
   hash_set <Key, Traits, Allocator>& _Left,  
   hash_set <Key, Traits, Allocator>& _Right  
);  
```  
  
### Parameters  
 `_Right`  
 The hash_set providing the elements to be swapped, or the hash_set whose elements are to be exchanged with those of the hash_set `_Left`.  
  
 `_Left`  
 The hash_set whose elements are to be exchanged with those of the hash_set `_Right`.  
  
### Remarks  
 The `swap` template function is an algorithm specialized on the container class hash_set to execute the member function `_Left``.`[swap](../VS_visualcpp/hash_set-Class.md#hash_set__swap)( `_Right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function  
  
 **template <class T\> void swap(T&, T&),**  
  
 in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../VS_visualcpp/-hash_map-.md) and [<hash_set>](../VS_visualcpp/-hash_set-.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../VS_visualcpp/stdext-Namespace.md) for more information.  
  
### Example  
  See the code example for the member class [hash_set::swap](../VS_visualcpp/hash_set-Class.md#hash_set__swap) for an example that uses the template version of `swap`.  
  
##  <a name="swap__hash_multiset_"></a>  swap (hash_multiset)  
  
> [!NOTE]
>  This API is obsolete. The alternative is [unordered_set Class](../VS_visualcpp/unordered_set-Class.md).  
  
 Exchanges the elements of two hash_multisets.  
  
```  
void swap(    hash_multiset <Key, Traits, Allocator>&  _Left ,    hash_multiset <Key, Traits, Allocator>&  _Right );  
  
```  
  
### Parameters  
 `_Right`  
 The hash_multiset providing the elements to be swapped, or the hash_multiset whose elements are to be exchanged with those of the hash_multiset `_Left`.  
  
 `_Left`  
 The hash_multiset whose elements are to be exchanged with those of the hash_multiset `_Right`.  
  
### Remarks  
 The `swap` template function is an algorithm specialized on the container class hash_multiset to execute the member function `_Left``.`[swap](../VS_visualcpp/hash_multiset-Class.md#hash_multiset__swap)( `_Right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function  
  
 **template <class T\> void swap(T&, T&),**  
  
 in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
 In Visual C++ .NET 2003, members of the [<hash_map>](../VS_visualcpp/-hash_map-.md) and [<hash_set>](../VS_visualcpp/-hash_set-.md) header files are no longer in the std namespace, but rather have been moved into the stdext namespace. See [The stdext Namespace](../VS_visualcpp/stdext-Namespace.md) for more information.  
  
### Example  
  See the code example for the member class [hash_multiset::swap](../VS_visualcpp/hash_multiset-Class.md#hash_multiset__swap) for an example that uses the template version of `swap`.  
  
## See Also  
 [<hash_set>](../VS_visualcpp/-hash_set-.md)