---
title: "add_cv Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.add_cv"
  - "add_cv"
  - "std::tr1::add_cv"
  - "std.add_cv"
  - "std::add_cv"
  - "type_traits/std::add_cv"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "add_cv class [TR1]"
  - "add_cv"
ms.assetid: a5572c78-a097-45d7-b476-ed4876889dea
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# add_cv Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [add_cv Class](https://docs.microsoft.com/cpp/standard-library/add-cv-class).  
  
Makes const/volatile type from type.  
  
## Syntax  
  
```  
template <class Ty>  
struct add_cv;  
 
template <class T>using add_cv_t = typename add_cv<T>::type;  
```  
  
#### Parameters  
 `Ty`  
 The type to modify.  
  
## Remarks  
 An instance of the type modifier holds the modified-type [add_volatile Class](../standard-library/add-volatile-class.md)`<` [add_const Class](../standard-library/add-const-class.md)`<Ty> >`.  
  
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
  
```Output  
add_cv_t<int> == int  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [remove_const Class](../standard-library/remove-const-class.md)   
 [remove_volatile Class](../standard-library/remove-volatile-class.md)




