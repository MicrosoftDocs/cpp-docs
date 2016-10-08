---
title: "hash Structure"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: e5a41202-ef3b-45d0-b3a7-4c2dbdc0487a
caps.latest.revision: 11
manager: ghogen
translation.priority.mt: 
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
# hash Structure
The template class defines its method as returning `val.hash_code()`. The method defines a hash function that is used to map values of type [type_index](../VS_visualcpp/type_index-Class.md) to a distribution of index values.  
  
## Syntax  
  
```vb  
template<>  
    struct hash<type_index>  
        : public unary_function<type_index, size_t>  
    { // hashes a typeinfo object  
    size_t operator()(type_index val) const;  
    };  
```  
  
## See Also  
 [<typeindex\>](../VS_visualcpp/-typeindex-.md)