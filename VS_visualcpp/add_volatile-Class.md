---
title: "add_volatile Class"
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
ms.assetid: cde57277-d764-402d-841e-97611ebaab14
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
# add_volatile Class
Makes volatile type from the specified type.  
  
## Syntax  
  
```  
template<class Ty>  
    struct add_volatile;  
  
template<class T>using add_volatile_t = typename add_volatile<T>::type;  
```  
  
#### Parameters  
 `Ty`  
 The type to modify.  
  
## Remarks  
 An instance of the type modifier holds a modified-type that is `Ty` if `Ty` is a reference, a function, or a volatile-qualified type, otherwise `volatile Ty`.  
  
## Example  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::add_volatile_t<int> *p = (volatile int *)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "add_volatile<int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **add_volatile<int\> == int**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [remove_volatile Class](../VS_visualcpp/remove_volatile-Class.md)