---
title: "is_const Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.is_const"
  - "is_const"
  - "std::tr1::is_const"
  - "std.is_const"
  - "std::is_const"
  - "type_traits/std::is_const"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_const class [TR1]"
  - "is_const"
ms.assetid: 55b8e887-9c3f-4a1d-823a-4a257337b205
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
# is_const Class
Tests if type is const.  
  
## Syntax  
  
```  
template <class Ty>  
struct is_const;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if `Ty` is `const-qualified`.  
  
## Example  
  
```cpp  
// std_tr1__type_traits__is_const.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   

struct trivial
{
    int val;
};

int main()
{
    std::cout << "is_const<trivial> == " << std::boolalpha
        << std::is_const<trivial>::value << std::endl;
    std::cout << "is_const<const trivial> == " << std::boolalpha
        << std::is_const<const trivial>::value << std::endl;
    std::cout << "is_const<int> == " << std::boolalpha
        << std::is_const<int>::value << std::endl;
    std::cout << "is_const<const int> == " << std::boolalpha
        << std::is_const<const int>::value << std::endl;

    return (0);
}

```  
  
```Output  
is_const<trivial> == false  
is_const<const trivial> == true  
is_const<int> == false  
is_const<const int> == true  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_volatile Class](../standard-library/is-volatile-class.md)
