---
title: "integral_constant Class, bool_constant Class"
ms.custom: na
ms.date: 10/05/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 11c002c6-4d31-4042-9341-f2543f43e108
caps.latest.revision: 19
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
# integral_constant Class, bool_constant Class
Makes an integral constant from a type and value.  
  
## Syntax  
  
```  
template <class T, T v>  
    struct integral_constant {  
        static constexpr T value = v;  
        typedef T value_type;  
        typedef integral_constant<T, v> type;  
        constexpr operator value_type() const noexcept { return (value); }  
        constexpr value_type operator()() const noexcept { return (value); }  
    };  
  
template <bool v>  
    using bool_constant = integral_constant<bool, v>;  
  
```  
  
#### Parameters  
 `T`  
 The type of the constant.  
  
 `v`  
 The value of the constant.  
  
## Remarks  
 The `integral_constant` template class, when specialized with an integral type `T` and a value `v` of that type, represents an object that holds a constant of that integral type with the specified value. The member named `type` is an alias for the generated template specialization type, and the `value` member holds the value `v` used to create the specialization.  
  
 The `bool_constant` template class is an explicit partial specialization of `integral_constant` that uses `bool` as the `T` argument.  
  
## Example  
  
```cpp  
// std__type_traits__integral_constant.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::cout << "integral_constant<int, 5> == "   
        << std::integral_constant<int, 5>::value << std::endl;   
    std::cout << "integral_constant<bool, false> == " << std::boolalpha   
        << std::integral_constant<bool, false>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **integral_constant<int, 5> == 5**  
**integral_constant<bool, false> == false**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [false_type](../VS_visualcpp/-type_traits--typedefs.md#false_type_typedef)   
 [true_type](../VS_visualcpp/-type_traits--typedefs.md#true_type_typedef)