---
title: "&lt;map&gt; functions"
ms.custom: na
ms.date: "10/14/2016"
ms.reviewer: na
ms.suite: na
ms.tgt_pltfrm: na
ms.topic: "article"
ms.assetid: 7cb3d1a5-7add-4726-a73f-61927eafd466
caps.latest.revision: 5
---
# &lt;map&gt; functions
|||  
|-|-|  
|[swap](#swap)|[swap](#swap_multimap)|  
  
##  <a name="swap_multimap"></a>  swap  
 Exchanges the elements of two maps.  
  
```  
template<class _Key, class _Ty, class _Pr, class _Alloc>  
void swap(  
   map<Key, Traits, Compare, Alloctor >& _Left,  
   map<Key, Traits, Compare, Alloctor >& _Right  
);  
```  
  
### Parameters  
 `_Right`  
 The map providing the elements to be swapped, or the map whose elements are to be exchanged with those of the map `_Left`.  
  
 `_Left`  
 The map whose elements are to be exchanged with those of the map `_Right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class map to execute the member function `_Left.`[swap](../stdcpplib/map-class.md#map__swap)*(_Right*). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **template** \< **class T**>  **void swap**( **T&**, **T&**), in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
### Example  
  See the code example for member function [map::swap](../stdcpplib/map-class.md#map__swap) for an example that uses the template version of `swap`.  
  
##  <a name="swap"></a>  swap  
 Exchanges the elements of two multimaps.  
  
```  
template<class _Key, class _Ty, class _Pr, class _Alloc>  
void swap(  
   multimap<Key, Traits, Compare, Alloctor >& _Left,  
   multimap<Key, Traits, Compare, Alloctor >& _Right  
);  
```  
  
### Parameters  
 `_Right`  
 The multimap providing the elements to be swapped, or the multimap whose elements are to be exchanged with those of the multimap `_Left`.  
  
 `_Left`  
 The multimap whose elements are to be exchanged with those of the multimap `_Right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class map to execute on the container class multimap to execute the member function `_Left.`[swap](multi7876f4c9-ebb4-4878-af1e-09364c43af0a) ( `_Right`). This is an instance of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **template** \< **class T**>  **void swap**( **T&**, **T&**), in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
### Example  
  See the code example for member function [multimap::swap](multi7876f4c9-ebb4-4878-af1e-09364c43af0a) for an example that uses the template version of `swap`.  
  
## See Also  
 [\<map>](../stdcpplib/-map-.md)