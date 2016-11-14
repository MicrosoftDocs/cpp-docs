---
title: "&lt;vector&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: 6cdcf043-eef6-4330-83f0-4596fb9f968a
caps.latest.revision: 10
manager: "ghogen"
---
# &lt;vector&gt; functions

  
##  <a name="swap"></a>  swap  
 Exchanges the elements of two vectors.  
  
```  
template <class Type, class Allocator>  
void swap(vector<Type, Allocator>& left, vector<Type, Allocator>& right);
```  
  
### Parameters  
 ` right`  
 The vector providing the elements to be swapped, or the vector whose elements are to be exchanged with those of the vector ` left`.  
  
 ` left`  
 The vector whose elements are to be exchanged with those of the vector ` right`.  
  
### Remarks  
 The template function is an algorithm specialized on the container class vector to execute the member function ` left.` [vector::swap](../standard-library/vector-class.md) *( right*). These are instances of the partial ordering of function templates by the compiler. When template functions are overloaded in such a way that the match of the template with the function call is not unique, then the compiler will select the most specialized version of the template function. The general version of the template function, **template** \< **class T**> **void swap**( **T&**, **T&**), in the algorithm class works by assignment and is a slow operation. The specialized version in each container is much faster as it can work with the internal representation of the container class.  
  
### Example  
  See the code example for member function [vector::swap](../standard-library/vector-class.md) for an example that uses the template version of `swap`.  
  
## See Also  
 [\<vector>](../standard-library/vector.md)

