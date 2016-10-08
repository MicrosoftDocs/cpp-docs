---
title: "iterator Struct"
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
ms.assetid: c74c8000-8b18-4829-9b71-6103c4229b74
caps.latest.revision: 16
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
# iterator Struct
An empty base struct used to ensure that a user-defined iterator class works properly with **iterator_trait**s.  
  
## Syntax  
  
```  
template<class Category, class Type, class Distance = ptrdiff_t  
    class Pointer = Type*, class Reference = Type&>  
    struct iterator {  
        typedef Category iterator_category;  
        typedef Type value_type;  
        typedef Distance difference_type;  
        typedef Distance distance_type;  
        typedef Pointer pointer;  
        typedef Reference reference;  
    };  
```  
  
## Remarks  
 The template struct serves as a base type for all iterators. It defines the member types  
  
-   `iterator_category` (a synonym for the template parameter `Category`).  
  
-   `value_type` (a synonym for the template parameter **Type**).  
  
-   `difference_type` (a synonym for the template parameter `Distance`).  
  
-   `distance_type` (a synonym for the template parameter `Distance`)  
  
-   `pointer` (a synonym for the template parameter `Pointer`).  
  
-   `reference` (a synonym for the template parameter `Reference`).  
  
 Note that `value_type` should not be a constant type even if **pointer** points at an object of const **Type** and reference designates an object of const **Type**.  
  
## Example  
 See [iterator_traits](../VS_visualcpp/iterator_traits-Struct.md) for an example of how to declare and use the types in the iterator base class.  
  
## Requirements  
 **Header:** <iterator\>  
  
 **Namespace:** std  
  
## See Also  
 [<iterator\>](../VS_visualcpp/-iterator-.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)   
 [Standard Template Library](../Topic/Standard%20Template%20Library.md)