---
title: "is_arithmetic Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_arithmetic"
  - "std.tr1.is_arithmetic"
  - "std::tr1::is_arithmetic"
  - "std.is_arithmetic"
  - "std::is_arithmetic"
  - "type_traits/std::is_arithmetic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_arithmetic class [TR1]"
  - "is_arithmetic"
ms.assetid: ea427b7e-0141-4a04-848f-561054c53001
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
# is_arithmetic Class
Tests if type is arithmetic.  
  
## Syntax  
  
```  
template <class Ty>  
struct is_arithmetic;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is an arithmetic type, that is, an integral type or a floating point type, or a `cv-qualified` form of one of them, otherwise it holds false.  
  
## Example  
  
```cpp  
// std_tr1__type_traits__is_arithmetic.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_arithmetic<trivial> == " << std::boolalpha   
        << std::is_arithmetic<trivial>::value << std::endl;   
    std::cout << "is_arithmetic<int> == " << std::boolalpha   
        << std::is_arithmetic<int>::value << std::endl;   
    std::cout << "is_arithmetic<float> == " << std::boolalpha   
        << std::is_arithmetic<float>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_arithmetic<trivial> == false  
is_arithmetic<int> == true  
is_arithmetic<float> == true  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_floating_point Class](../standard-library/is-floating-point-class.md)   
 [is_integral Class](../standard-library/is-integral-class.md)
