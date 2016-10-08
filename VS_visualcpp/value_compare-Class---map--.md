---
title: "value_compare Class (&lt;map&gt;)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: ea97c1d0-04b2-4d42-8d96-23522c04cc41
caps.latest.revision: 19
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# value_compare Class (&lt;map&gt;)
Provides a function object that can compare the elements of a map by comparing the values of their keys to determine their relative order in the map.  
  
## Syntax  
  
```  
class value_compare : public binary_function<value_type, value_type, bool>  
{  
public:  
   bool operator()(const value_type& _Left, const value_type& _Right) const;  
   value_compare(key_compare _Pred) : comp(_Pred);  
   protected:  
      key_compare comp;  
};  
```  
  
## Remarks  
 The comparison criterion provided by `value_compare` between **value_types** of whole elements contained by a map is induced from a comparison between the keys of the respective elements by the auxiliary class construction. The member function operator uses the object **comp** of type `key_compare` stored in the function object provided by `value_compare` to compare the sort-key components of two elements.  
  
 For sets and multisets, which are simple containers where the key values are identical to the element values, `value_compare` is equivalent to `key_compare`; for maps and multimaps they are not, as the value of the type `pair` elements is not identical to the value of the element's key.  
  
## Example  
  See example for [value_comp](../VS_visualcpp/map-Class.md#map__value_comp) for an example of how to declare and use `value_compare`.  
  
## Requirements  
 **Header:** <map\>  
  
 **Namespace:** std  
  
## See Also  
 [binary_function Struct](../VS_visualcpp/binary_function-Struct.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)