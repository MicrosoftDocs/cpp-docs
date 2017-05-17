---
title: "add_cv Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology:  
  - "cpp-standard-libraries"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ['add_cv', 'type_traits/std::add_cv']  
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "add_cv class"
  - "add_cv"
ms.assetid: a5572c78-a097-45d7-b476-ed4876889dea
caps.latest.revision: 20
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# add_cv Class
Makes const volatile type from type.  
  
## Syntax  
  
```  
template <class T>  
struct add_cv;  
 
template <class T>
using add_cv_t = typename add_cv<T>::type;  
```  
  
#### Parameters  
*T*  
The type to modify.  
  
## Remarks  
An instance of the modified type `add_cv<T>` has a `type` member typedef equivalent to *T* modified by both [add_volatile](../standard-library/add-volatile-class.md) and [add_const](../standard-library/add-const-class.md), unless *T* already has the cv-qualifiers, is a reference, or is a function.  
  
The `add_cv_t<T>` helper type is a shortcut to access the `add_cv<T>` member typedef `type`.
  
## Example  
  
```cpp  
// add_cv.cpp
// compile by using: cl /EHsc /W4 add_cv.cpp
#include <type_traits>   
#include <iostream>   

struct S {
    void f() { 
        std::cout << "invoked non-cv-qualified S.f()" << std::endl; 
    }
    void f() const { 
        std::cout << "invoked const S.f()" << std::endl; 
    }
    void f() volatile { 
        std::cout << "invoked volatile S.f()" << std::endl; 
    }
    void f() const volatile { 
        std::cout << "invoked const volatile S.f()" << std::endl; 
    }
};

template <class T>
void invoke() {
    T t;
    ((T *)&t)->f(); 
}

int main()
{
    invoke<S>();
    invoke<std::add_const<S>::type>();
    invoke<std::add_volatile<S>::type>();
    invoke<std::add_cv<S>::type>();
}  
```  
  
```Output  
invoked non-cv-qualified S.f()
invoked const S.f()
invoked volatile S.f()
invoked const volatile S.f()  
```  
  
## Requirements  
**Header:** \<type_traits>  
**Namespace:** std  
  
## See Also  
[<type_traits>](../standard-library/type-traits.md)   
[remove_const Class](../standard-library/remove-const-class.md)   
[remove_volatile Class](../standard-library/remove-volatile-class.md)
