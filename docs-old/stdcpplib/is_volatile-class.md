---
title: "is_volatile Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "std::tr1::is_volatile"
  - "std.tr1.is_volatile"
  - "is_volatile"
  - "std.is_volatile"
  - "std::is_volatile"
  - "type_traits/std::is_volatile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_volatile class [TR1]"
  - "is_volatile"
ms.assetid: 54922e8a-db4e-4cae-8931-b3352f0b8d3b
caps.latest.revision: 16
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
# is_volatile Class
Tests if type is volatile.  
  
## Syntax  
  
```
template<class Ty>
struct is_volatile;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if `Ty` is `volatile-qualified`.  
  
## Example  
  
```  
// std_tr1__type_traits__is_volatile.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_volatile<trivial> == " << std::boolalpha   
        << std::is_volatile<trivial>::value << std::endl;   
    std::cout << "is_volatile<volatile trivial> == " << std::boolalpha   
        << std::is_volatile<volatile trivial>::value << std::endl;   
    std::cout << "is_volatile<int> == " << std::boolalpha   
        << std::is_volatile<int>::value << std::endl;   
    std::cout << "is_volatile<volatile int> == " << std::boolalpha   
        << std::is_volatile<volatile int>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
 **is_volatile\<trivial> == false**  
**is_volatile\<volatile trivial> == true**  
**is_volatile\<int> == false**  
**is_volatile\<volatile int> == true**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../stdcpplib/-type_traits-.md)   
 [is_const Class](../stdcpplib/is_const-class.md)

