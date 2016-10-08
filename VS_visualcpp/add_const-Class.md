---
title: "add_const Class"
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
ms.assetid: 1262a1eb-8c9c-4dd6-9f43-88ba280182f1
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
# add_const Class
Makes const type from type.  
  
## Syntax  
  
```  
template<class Ty>  
    struct add_const;  
```  
  
#### Parameters  
 `Ty`  
 The type to modify.  
  
## Remarks  
 An instance of the type modifier holds a modified-type that is `Ty` if `Ty` is a reference, a function, or a const-qualified type, otherwise `const Ty`.  
  
## Example  
  
```  
// std_tr1__type_traits__add_const.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::add_const<int>::type *p = (const int *)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "add_const<int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **add_const<int\> == int**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [remove_const Class](../VS_visualcpp/remove_const-Class.md)