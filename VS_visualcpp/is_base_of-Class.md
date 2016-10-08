---
title: "is_base_of Class"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 436f6213-1d4c-4ffc-a588-fc7c4887dd86
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
# is_base_of Class
Tests whether one type is base of another.  
  
## Syntax  
  
```  
template<class Base, class Derived>  
    struct is_base_of;  
```  
  
#### Parameters  
 `Base`  
 The base class to test for.  
  
 `Derived`  
 The derived type to test for.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Base` is a base class of the type `Derived`, otherwise it holds false.  
  
## Example  
  
```  
  
#include <type_traits>   
#include <iostream>   
  
struct base   
    {   
    int val;   
    };   
  
struct derived   
    : public base   
    {   
    };   
  
int main()   
    {   
    std::cout << "is_base_of<base, base> == " << std::boolalpha   
        << std::is_base_of<base, base>::value << std::endl;   
    std::cout << "is_base_of<base, derived> == " << std::boolalpha   
        << std::is_base_of<base, derived>::value << std::endl;   
    std::cout << "is_base_of<derived, base> == " << std::boolalpha   
        << std::is_base_of<derived, base>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is_base_of<base, base> == true**  
**is_base_of<base, derived> == true**  
**is_base_of<derived, base> == false**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [is_convertible Class](../VS_visualcpp/is_convertible-Class.md)