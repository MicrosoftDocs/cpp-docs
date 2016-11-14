---
title: "&lt;set&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: d1277d14-8502-46c0-b820-bcda820f9406
caps.latest.revision: 7
manager: "ghogen"
---
# &lt;set&gt; functions
|||  
|-|-|  
|[swap (map)](#swap)|[swap (multiset)](#swap_multiset)|  
  
##  <a name="swap"></a>  swap  (map)
 Exchanges the elements of two sets.  
  
```
template <class Key, class Traits, class Allocator>  
void swap(set<Key, Traits, Allocator>& left, set<Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `right`  
 The set providing the elements to be swapped, or the set whose elements are to be exchanged with those of the set `left`.  
  
 `left`  
 The set whose elements are to be exchanged with those of the set `right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class set to execute the member function `left``.`[swap](../standard-library/set-class.md#set__swap)( `right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function  
  
 `template` \< **classT**> **void swap**( **T&**, **T&**)  
  
 in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
### Example  
  See the code example for the member class [set::swap](../standard-library/set-class.md#set__swap) for an example of the use of the template version of `swap`.  
  
##  <a name="swap_multiset"></a>  swap  (multiset)
 Exchanges the elements of two multisets.  
  
```
template <class Key, class Traits, class Allocator>  
void swap(multiset<Key, Traits, Allocator>& left, multiset<Key, Traits, Allocator>& right);
```  
  
### Parameters  
 `right`  
 The multiset providing the elements to be swapped, or the multiset whose elements are to be exchanged with those of the multiset `left`.  
  
 `left`  
 The multiset whose elements are to be exchanged with those of the multiset `right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class multiset to execute the member function `left``.`[swap](../standard-library/multiset-class.md#multiset__swap)( `right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function  
  
 `template` \< **classT**> **void swap**( **T&**, **T&**)  
  
 in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
### Example  
  See the code example for the member class [multiset::swap](../standard-library/multiset-class.md#multiset__swap)for an example of the use of the template version of `swap`.  
  
## See Also  
 [\<set>](../standard-library/set.md)



