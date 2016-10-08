---
title: "remove_extent Class"
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
ms.assetid: b9320862-3891-49fc-80bc-571eb2c035cf
caps.latest.revision: 16
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
# remove_extent Class
Makes element type from array type.  
  
## Syntax  
  
```  
template<class T>  
    struct remove_extent;  
  
template<class T>  
using remove_extent_t = typename remove_extent<T>::type;  
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of `remove_extent<T>` holds a modified-type that is `T1` when `T` is of the form `T1[N]`, otherwise `T`.  
  
## Example  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::cout << "remove_extent_t<int> == "  
        << typeid(std::remove_extent_t<int>).name()  
        << std::endl;T  
    std::cout << "remove_extent_t<int[5]> == "  
        << typeid(std::remove_extent_t<int[5]>).name()  
        << std::endl;T  
    std::cout << "remove_extent_t<int[5][10]> == "  
        << typeid(std::remove_extent_t<int[5][10]>).name()  
        << std::endl;   
    return (0);   
    }  
  
```  
  
  **remove_extent_t<int\> == int**  
**remove_extent_t<int[5]> == int**  
**remove_extent_t<int[5][10]> == int [10]**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [remove_all_extents Class](../VS_visualcpp/remove_all_extents-Class.md)