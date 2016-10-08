---
title: "remove_pointer Class"
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
ms.assetid: 2cd4e417-32fb-4f53-bd16-4e8a98240832
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
# remove_pointer Class
Makes type from pointer to type.  
  
## Syntax  
  
```  
template<class T>  
    struct remove_pointer;  
  
template<class T>  using remove_pointer_t = typename remove_pointer<T>::type;  
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of `remove_pointer<T>` holds a modified-type that is `T1` when `T` is of the form `T1*`, `T1* const`, `T1* volatile`, or `T1* const volatile`, otherwise `T`.  
  
## Example  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    int *p = (std::remove_pointer_t<int *> *)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "remove_pointer_t<int *> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **remove_pointer_t<int \*> == int**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [add_pointer Class](../VS_visualcpp/add_pointer-Class.md)