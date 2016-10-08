---
title: "add_cv Class"
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
ms.assetid: a5572c78-a097-45d7-b476-ed4876889dea
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
# add_cv Class
Makes const/volatile type from type.  
  
## Syntax  
  
```  
template<class Ty>  
    struct add_cv;  
  
template<class T>using add_cv_t = typename add_cv<T>::type;  
```  
  
#### Parameters  
 `Ty`  
 The type to modify.  
  
## Remarks  
 An instance of the type modifier holds the modified-type [add_volatile Class](../VS_visualcpp/add_volatile-Class.md)`<` [add_const Class](../VS_visualcpp/add_const-Class.md)`<Ty> >`.  
  
## Example  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::add_cv_t<int> *p = (const volatile int *)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "add_cv<int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **add_cv_t<int\> == int**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [remove_const Class](../VS_visualcpp/remove_const-Class.md)   
 [remove_volatile Class](../VS_visualcpp/remove_volatile-Class.md)