---
title: "is_enum Class | Microsoft Docs"
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
  - "is_enum"
  - "std.tr1.is_enum"
  - "std::tr1::is_enum"
  - "std.is_enum"
  - "std::is_enum"
  - "type_traits/std::is_enum"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_enum class [TR1]"
  - "is_enum"
ms.assetid: df3b00b7-4f98-4b3a-96ce-10ad958ee69c
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_enum Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_enum Class](https://docs.microsoft.com/cpp/standard-library/is-enum-class).  
  
Tests if type is an enumeration.  
  
## Syntax  
  
```  
template <class Ty>  
struct is_enum;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is an enumeration type or a `cv-qualified` form of an enumeration type, otherwise it holds false.  
  
## Example  
  
```  
// std_tr1__type_traits__is_enum.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
enum color {   
    red, greed, blue};   
  
int main()   
    {   
    std::cout << "is_enum<trivial> == " << std::boolalpha   
        << std::is_enum<trivial>::value << std::endl;   
    std::cout << "is_enum<color> == " << std::boolalpha   
        << std::is_enum<color>::value << std::endl;   
    std::cout << "is_enum<int> == " << std::boolalpha   
        << std::is_enum<int>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_enum<trivial> == false  
is_enum<color> == true  
is_enum<int> == false  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_integral Class](../standard-library/is-integral-class.md)




