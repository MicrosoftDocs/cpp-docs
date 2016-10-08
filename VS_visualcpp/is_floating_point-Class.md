---
title: "is_floating_point Class"
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
ms.assetid: 070679c1-115b-4ee4-8ab7-f52e5d9e157f
caps.latest.revision: 15
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
# is_floating_point Class
Tests if type is floating point.  
  
## Syntax  
  
```  
template<class Ty>  
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
  
  **is_floating_point<trivial\> == false**  
**is_floating_point<int\> == false**  
**is_floating_point<float\> == true**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [is_integral Class](../VS_visualcpp/is_integral-Class.md)