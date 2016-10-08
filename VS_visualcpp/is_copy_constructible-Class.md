---
title: "is_copy_constructible Class"
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
ms.assetid: d8db9d4c-21ed-4884-bead-0b0b562de007
caps.latest.revision: 9
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
# is_copy_constructible Class
Tests if type has a copy constructor.  
  
## Syntax  
  
```  
template<class Ty>  
    struct is_copy_constructible;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a class that has a copy constructor, otherwise it holds false.  
  
## Example  
  
```  
#include <type_traits>   
#include <iostream>   
  
struct Copyable  
{  
    int val;  
};  
  
struct NotCopyable  
{  
   NotCopyable(const NotCopyable&) = delete;  
   int val;  
  
};  
  
int main()  
{  
    std::cout << "is_copy_constructible<Copyable> == " << std::boolalpha  
        << std::is_copy_constructible<Copyable>::value << std::endl;  
    std::cout << "is_copy_constructible<NotCopyable> == " << std::boolalpha  
        << std::is_copy_constructible<NotCopyable>::value << std::endl;  
  
    return (0);  
}  
  
```  
  
 **is_copy_constructible<Copyable\> == true**  
**is_copy_constructible<NotCopyable \> == false**   
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)