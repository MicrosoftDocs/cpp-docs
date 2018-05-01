---
title: "is_floating_point Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_floating_point"
  - "std.tr1.is_floating_point"
  - "std::tr1::is_floating_point"
  - "std.is_floating_point"
  - "std::is_floating_point"
  - "type_traits/std::is_floating_point"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_floating_point class [TR1]"
  - "is_floating_point"
ms.assetid: 070679c1-115b-4ee4-8ab7-f52e5d9e157f
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_floating_point Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_floating_point Class](https://docs.microsoft.com/cpp/standard-library/is-floating-point-class).  
  
Tests if type is floating point.  
  
## Syntax  
  
```  
template <class Ty>  
struct is_floating_point;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a floating point type or a `cv-qualified` form of a floating point type, otherwise it holds false.  
  
 A floating point type is one of `float`, `double`, or `long double`.  
  
## Example  
  
```  
// std_tr1__type_traits__is_floating_point.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_floating_point<trivial> == " << std::boolalpha   
        << std::is_floating_point<trivial>::value << std::endl;   
    std::cout << "is_floating_point<int> == " << std::boolalpha   
        << std::is_floating_point<int>::value << std::endl;   
    std::cout << "is_floating_point<float> == " << std::boolalpha   
        << std::is_floating_point<float>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_floating_point<trivial> == false  
is_floating_point<int> == false  
is_floating_point<float> == true  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_integral Class](../standard-library/is-integral-class.md)




