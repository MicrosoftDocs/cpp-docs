---
title: "is_member_pointer Class"
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
ms.assetid: da07ff4e-9ee0-4baa-ad93-1741f10913d1
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
# is_member_pointer Class
Tests if type is a pointer to member.  
  
## Syntax  
  
```  
template<class Ty>  
    struct is_member_pointer;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a pointer to member function or a pointer to member object, or a `cv-qualified` form of one of them, otherwise it holds false.  
  
## Example  
  
```  
// std_tr1__type_traits__is_member_pointer.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
struct functional   
    {   
    int f();   
    };   
  
int main()   
    {   
    std::cout << "is_member_pointer<trivial *> == "   
        << std::boolalpha   
        << std::is_member_pointer<trivial *>::value   
        << std::endl;   
    std::cout << "is_member_pointer<int trivial::*> == "   
        << std::boolalpha   
        << std::is_member_pointer<int trivial::*>::value   
        << std::endl;   
    std::cout << "is_member_pointer<int (functional::*)()> == "   
        << std::boolalpha   
        << std::is_member_pointer<int (functional::*)()>::value   
        << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is_member_pointer<trivial \*> == false**  
**is_member_pointer<int trivial::\*> == true**  
**is_member_pointer<int (functional::\*)()> == true**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [is_member_function_pointer Class](../VS_visualcpp/is_member_function_pointer-Class.md)   
 [is_member_object_pointer Class](../VS_visualcpp/is_member_object_pointer-Class.md)   
 [is_pointer Class](../VS_visualcpp/is_pointer-Class.md)