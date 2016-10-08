---
title: "add_lvalue_reference Class"
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
ms.assetid: 9933afc2-ad0d-465d-98fe-7d547fa3efe2
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
# add_lvalue_reference Class
Makes reference to type from type.  
  
## Syntax  
  
```  
template<class T>  
    struct add_lvalue_reference;  
  
template<class T>  
    using add_lvalue_reference_t = typename add_lvalue_reference<T>::type;  
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of the type modifier holds a modified-type that is `T` if `T` is an lvalue reference, otherwise `T&`.  
  
## Example  
  
```  
#include <type_traits>   
#include <iostream>   
  
using namespace std;  
int main()  
{  
    int val = 0;  
    add_lvalue_reference_t<int> p = (int&)val;  
    p = p;  // to quiet "unused" warning   
    cout << "add_lvalue_reference_t<int> == "  
        << typeid(p).name() << endl;  
  
    return (0);  
}  
```  
  
  **add_lvalue_reference_t<int\> == int**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [remove_reference Class](../VS_visualcpp/remove_reference-Class.md)