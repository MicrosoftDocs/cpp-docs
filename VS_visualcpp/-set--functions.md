---
title: "&lt;set&gt; functions"
ms.custom: na
ms.date: 10/03/2016
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: d1277d14-8502-46c0-b820-bcda820f9406
caps.latest.revision: 5
---
# &lt;set&gt; functions
|||  
|-|-|  
|[swap](#swap)|[swap](#swap_multiset)|  
  
##  <a name="swap"></a>  swap  
 Exchanges the elements of two sets.  
  
```  
template<class Key, class Traits, class Allocator> void swap(    set< Key, Traits, Allocator>&  _Left ,    set< Key, Traits, Allocator>&  _Right );  
  
```  
  
### Parameters  
 `_Right`  
 The set providing the elements to be swapped, or the set whose elements are to be exchanged with those of the set `_Left`.  
  
 `_Left`  
 The set whose elements are to be exchanged with those of the set `_Right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class set to execute the member function `_Left``.`[swap](../VS_visualcpp/set-Class.md#set__swap)( `_Right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function  
  
 `template` < **classT**> **void swap**( **T&**, **T&**)  
  
 in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
### Example  
  See the code example for the member class [set::swap](../VS_visualcpp/set-Class.md#set__swap) for an example of the use of the template version of `swap`.  
  
##  <a name="swap_multiset"></a>  swap  
 Exchanges the elements of two multisets.  
  
```  
template<class Key, class Traits, class Allocator> void swap(    multiset< Key, Traits, Allocator>&  _Left ,    multiset< Key, Traits, Allocator>&  _Right );  
  
```  
  
### Parameters  
 `_Right`  
 The multiset providing the elements to be swapped, or the multiset whose elements are to be exchanged with those of the multiset `_Left`.  
  
 `_Left`  
 The multiset whose elements are to be exchanged with those of the multiset `_Right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class multiset to execute the member function `_Left``.`[swap](../VS_visualcpp/multiset-Class.md#multiset__swap)( `_Right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function  
  
 `template` < **classT**> **void swap**( **T&**, **T&**)  
  
 in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
### Example  
  See the code example for the member class [multiset::swap](../VS_visualcpp/multiset-Class.md#multiset__swap)for an example of the use of the template version of `swap`.  
  
## See Also  
 [<set\>](../VS_visualcpp/-set-.md)