---
title: "remove_all_extents Class"
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
ms.assetid: 548dc536-82e7-423a-b8c1-443d66d9632e
caps.latest.revision: 14
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
# remove_all_extents Class
Makes non array type from array type.  
  
## Syntax  
  
```  
template<class T>  
    struct remove_all_extents;  
  
template<class T>  using remove_all_extents_t = typename remove_all_extents<T>::type;  
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of `remove_all_extents<T>` holds a modified-type that is the element type of the array type `T` with all array dimensions removed, or `T` if `T` is not an array type.  
  
## Example  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::cout << "remove_all_extents<int> == "   
        << typeid(std::remove_all_extents_t<int>).name()   
        << std::endl;   
    std::cout << "remove_all_extents_t<int[5]> == "   
        << typeid(std::remove_all_extents_t<int[5]>).name()   
        << std::endl;   
    std::cout << "remove_all_extents_t<int[5][10]> == "   
        << typeid(std::remove_all_extents_t<int[5][10]>).name()   
        << std::endl;   
  
    return (0);   
    }  
  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [remove_extent Class](../VS_visualcpp/remove_extent-Class.md)