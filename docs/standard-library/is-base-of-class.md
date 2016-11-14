---
title: "is_base_of Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.is_base_of"
  - "is_base_of"
  - "std::tr1::is_base_of"
  - "std.is_base_of"
  - "std::is_base_of"
  - "type_traits/std::is_base_of"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_base_of class [TR1]"
  - "is_base_of"
ms.assetid: 436f6213-1d4c-4ffc-a588-fc7c4887dd86
caps.latest.revision: 19
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
# is_base_of Class
Tests whether one type is base of another.  
  
## Syntax  
  
```  
template <class Base, class Derived>  
struct is_base_of;  
```  
  
#### Parameters  
 `Base`  
 The base class to test for.  
  
 `Derived`  
 The derived type to test for.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Base` is a base class of the type `Derived`, otherwise it holds false.  
  
## Example  
  
```cpp  
  
#include <type_traits>   
#include <iostream>   
  
struct base   
    {   
    int val;   
    };   
  
struct derived   
    : public base   
    {   
    };   
  
int main()   
    {   
    std::cout << "is_base_of<base, base> == " << std::boolalpha   
        << std::is_base_of<base, base>::value << std::endl;   
    std::cout << "is_base_of<base, derived> == " << std::boolalpha   
        << std::is_base_of<base, derived>::value << std::endl;   
    std::cout << "is_base_of<derived, base> == " << std::boolalpha   
        << std::is_base_of<derived, base>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_base_of<base, base> == true  
is_base_of<base, derived> == true  
is_base_of<derived, base> == false  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_convertible Class](../standard-library/is-convertible-class.md)
