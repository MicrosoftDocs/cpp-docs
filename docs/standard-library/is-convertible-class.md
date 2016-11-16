---
title: "is_convertible Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_convertible"
  - "std.tr1.is_convertible"
  - "std::tr1::is_convertible"
  - "std.is_convertible"
  - "std::is_convertible"
  - "type_traits/std::is_convertible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_convertible class [TR1]"
  - "is_convertible"
ms.assetid: 75614008-1894-42ea-bd57-974399628536
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
# is_convertible Class
Tests if one type is convertible to another.  
  
## Syntax  
  
```  
template <class From, class To>  
struct is_convertible;  
```  
  
#### Parameters  
 `From`  
 The type to convert from.  
  
 `Ty`  
 The type to convert to.  
  
## Remarks  
 An instance of the type predicate holds true if the expression `To to = from;`, where `from` is an object of type `From`, is well-formed.  
  
## Example  
  
```cpp  
// std_tr1__type_traits__is_convertible.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_convertible<trivial, int> == " << std::boolalpha   
        << std::is_convertible<trivial, int>::value << std::endl;   
    std::cout << "is_convertible<trivial, trivial> == " << std::boolalpha   
        << std::is_convertible<trivial, trivial>::value << std::endl;   
    std::cout << "is_convertible<char, int> == " << std::boolalpha   
        << std::is_convertible<char, int>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_convertible<trivial, int> == false  
is_convertible<trivial, trivial> == true  
is_convertible<char, int> == true  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_base_of Class](../standard-library/is-base-of-class.md)
