---
title: "is_const Class"
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
ms.assetid: 55b8e887-9c3f-4a1d-823a-4a257337b205
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
# is_const Class
Tests if type is const.  
  
## Syntax  
  
```  
template<class Ty>  
    struct is_const;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if `Ty` is `const-qualified`.  
  
## Example  
  
```  
// std_tr1__type_traits__is_const.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_const<trivial> == " << std::boolalpha   
        << std::is_const<trivial>::value << std::endl;   
    std::cout << "is_const<const trivial> == " << std::boolalpha   
        << std::is_const<const trivial>::value << std::endl;   
    std::cout << "is_const<int> == " << std::boolalpha   
        << std::is_const<int>::value << std::endl;   
    std::cout << "is_const<const int> == " << std::boolalpha   
        << std::is_const<const int>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **is_const<trivial\> == false**  
**is_const<const trivial\> == true**  
**is_const<int\> == false**  
**is_const<const int\> == true**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [is_volatile Class](../VS_visualcpp/is_volatile-Class.md)