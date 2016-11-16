---
title: "is_void Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_void"
  - "std.tr1.is_void"
  - "std::tr1::is_void"
  - "std.is_void"
  - "std::is_void"
  - "type_traits/std::is_void"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_void class [TR1]"
  - "is_void"
ms.assetid: 99b0de3b-1b38-4949-b053-080e5363174e
caps.latest.revision: 21
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
# is_void Class
Tests whether the type is void.  
  
## Syntax  
  
```  
template <class T>  
struct is_void;  
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is `void` or a cv-qualified form of `void`, otherwise it holds false.  
  
## Example  
  
```cpp  
// std__type_traits__is_void.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_void<trivial> == " << std::boolalpha   
        << std::is_void<trivial>::value << std::endl;   
    std::cout << "is_void<void()> == " << std::boolalpha   
        << std::is_void<void()>::value << std::endl;   
    std::cout << "is_void<void> == " << std::boolalpha   
        << std::is_void<void>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_void<trivial> == false  
is_void<void()> == false  
is_void<void> == true  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)

