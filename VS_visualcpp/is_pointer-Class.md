---
title: "is_pointer Class"
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
ms.assetid: 44e0a403-7241-4e0a-8922-32877bcb9a4c
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
# is_pointer Class
Tests if type is a pointer.  
  
## Syntax  
  
```  
template<class Ty>  
    struct is_pointer;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a pointer to `void`, a pointer to an object, or a pointer to a function, or a `cv-qualified` form of one of them, otherwise it holds false. Note that `is_pointer` holds false if `Ty` is a pointer to member or a pointer to member function.  
  
## Example  
  
```  
// std_tr1__type_traits__is_pointer.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_pointer<trivial> == " << std::boolalpha   
        << std::is_pointer<trivial>::value << std::endl;   
    std::cout << "is_pointer<int trivial::*> == " << std::boolalpha   
        << std::is_pointer<int trivial::*>::value << std::endl;   
    std::cout << "is_pointer<trivial *> == " << std::boolalpha   
        << std::is_pointer<trivial *>::value << std::endl;   
    std::cout << "is_pointer<int> == " << std::boolalpha   
        << std::is_pointer<int>::value << std::endl;   
    std::cout << "is_pointer<int *> == " << std::boolalpha   
        << std::is_pointer<int *>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is_pointer<trivial\> == false**  
**is_pointer<int trivial::\*> == false**  
**is_pointer<trivial \*> == true**  
**is_pointer<int\> == false**  
**is_pointer<int \*> == true**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [is_member_pointer Class](../VS_visualcpp/is_member_pointer-Class.md)   
 [is_reference Class](../VS_visualcpp/is_reference-Class.md)