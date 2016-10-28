---
title: "value_compare Class (&lt;map&gt;)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "std::value_compare"
  - "std.value_compare"
  - "map/std::value_compare"
  - "value_compare"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value_compare class"
ms.assetid: ea97c1d0-04b2-4d42-8d96-23522c04cc41
caps.latest.revision: 20
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# value_compare Class (&lt;map&gt;)
Provides a function object that can compare the elements of a map by comparing the values of their keys to determine their relative order in the map.  
  
## Syntax  
  
```
class value_compare : public binary_function<value_type, value_type, bool>
{
public:
    bool operator()(const value_type& left, const value_type& right) const;

    value_compare(key_compare _Pred) : comp(_Pred);

    protected:
 key_compare comp;
};
```  
  
## Remarks  
 The comparison criterion provided by `value_compare` between **value_types** of whole elements contained by a map is induced from a comparison between the keys of the respective elements by the auxiliary class construction. The member function operator uses the object **comp** of type `key_compare` stored in the function object provided by `value_compare` to compare the sort-key components of two elements.  
  
 For sets and multisets, which are simple containers where the key values are identical to the element values, `value_compare` is equivalent to `key_compare`; for maps and multimaps they are not, as the value of the type `pair` elements is not identical to the value of the element's key.  
  
## Example  
  See example for [value_comp](../stdcpplib/map-class.md#map__value_comp) for an example of how to declare and use `value_compare`.  
  
## Requirements  
 **Header:** \<map>  
  
 **Namespace:** std  
  
## See Also  
 [binary_function Struct](../stdcpplib/binary_function-struct.md)   
 [Thread Safety in the C++ Standard Library](../stdcpplib/thread-safety-in-the-c---standard-library.md)   
 [Standard Template Library](../notintoc/standard-template-library.md)

