---
title: "integral_constant Class, bool_constant Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.integral_constant"
  - "integral_constant"
  - "std::tr1::integral_constant"
  - "std.integral_constant"
  - "std::integral_constant"
  - "type_traits/std::integral_constant"
  - "std.bool_constant"
  - "std::bool_constant"
  - "type_traits/std::bool_constant"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "integral_constant class [TR1]"
  - "integral_constant"
  - "bool_constant"
ms.assetid: 11c002c6-4d31-4042-9341-f2543f43e108
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# integral_constant Class, bool_constant Class
Makes an integral constant from a type and value.  
  
## Syntax  
  
struct integral_constant {  
   static constexpr T value = v;  
   typedef T value_type;  
   typedef integral_constant\<T, v>  
   type;  
   constexpr operator value_type() const noexcept { return (value);
   }  
   constexpr value_type operator()() const noexcept { return (value);
   }  
   };  
  
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
  
```Output  
integral_constant<int, 5> == 5  
integral_constant<bool, false> == false  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [false_type Typedef](../standard-library/type-traits-typedefs.md#false_type_typedef)   
 [true_type Typedef](../standard-library/type-traits-typedefs.md#true_type_typedef)

