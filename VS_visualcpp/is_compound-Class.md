---
title: "is_compound Class"
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
ms.assetid: bdad1167-cf3f-4f37-8321-62a5df159ead
caps.latest.revision: 17
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
# is_compound Class
Tests if the specified type is not fundamental.  
  
## Syntax  
  
```  
template<class Ty>  
    struct is_compound;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds `false` if the type of `Ty` is a fundamental type (that is, if [is_fundamental](../VS_visualcpp/is_fundamental-Class.md)`<``Ty``>` holds `true`); otherwise, it holds `true`. Thus, the predicate holds `true` if `Ty` is an array type, a function type, a pointer to `void` or an object or a function, a reference, a class, a union, an enumeration, or a pointer to non-static class member, or a *cv-qualified* form of one of them.  
  
## Example  
  
```  
// std_tr1__type_traits__is_compound.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_compound<trivial> == " << std::boolalpha   
        << std::is_compound<trivial>::value << std::endl;   
    std::cout << "is_compound<int[]> == " << std::boolalpha   
        << std::is_compound<int[]>::value << std::endl;   
    std::cout << "is_compound<int()> == " << std::boolalpha   
        << std::is_compound<int()>::value << std::endl;   
    std::cout << "is_compound<int&> == " << std::boolalpha   
        << std::is_compound<int&>::value << std::endl;   
    std::cout << "is_compound<void *> == " << std::boolalpha   
        << std::is_compound<void *>::value << std::endl;   
    std::cout << "is_compound<int> == " << std::boolalpha   
        << std::is_compound<int>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is_compound<trivial\> == true**  
**is_compound<int[]> == true**  
**is_compound<int()> == true**  
**is_compound<int&> == true**  
**is_compound<void \*> == true**  
**is_compound<int\> == false**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [is_class Class](../VS_visualcpp/is_class-Class.md)