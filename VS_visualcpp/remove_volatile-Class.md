---
title: "remove_volatile Class"
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
ms.assetid: 8b87e2c2-a581-4eb3-8691-c5603910d61d
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
# remove_volatile Class
Makes non volatile type from type.  
  
## Syntax  
  
```  
template<class T>  
    struct remove_volatile;  
  
template<class T>  using remove_volatile_t = typename remove_volatile<T>::type;  
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of `remove_volatile<T>` holds a modified-type that is `T1` when `T` is of the form `volatile T1`, otherwise `T`.  
  
## Example  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    int *p = (std::remove_volatile_t<volatile int> *)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << " remove_volatile_t<volatile int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **remove_volatile_t<volatile int\> == int**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [add_volatile Class](../VS_visualcpp/add_volatile-Class.md)