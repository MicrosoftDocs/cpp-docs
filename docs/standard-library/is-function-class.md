---
title: "is_function Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::is_function"
  - "std.tr1.is_function"
  - "is_function"
  - "std.is_function"
  - "std::is_function"
  - "type_traits/std::is_function"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_function class [TR1]"
  - "is_function"
ms.assetid: e5c0dbcd-829b-415f-853f-8c5be47c5040
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
# is_function Class
Tests if type is a function type.  
  
## Syntax  
  
```  
template <class Ty>  
struct is_function;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a function type, otherwise it holds false.  
  
## Example  
  
```cpp  
// std_tr1__type_traits__is_function.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
struct functional   
    {   
    int f();   
    };   
  
int main()   
    {   
    std::cout << "is_function<trivial> == " << std::boolalpha   
        << std::is_function<trivial>::value << std::endl;   
    std::cout << "is_function<functional> == " << std::boolalpha   
        << std::is_function<functional>::value << std::endl;   
    std::cout << "is_function<float()> == " << std::boolalpha   
        << std::is_function<float()>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_function<trivial> == false  
is_function<functional> == false  
is_function<float()> == true  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_object Class](../standard-library/is-object-class.md)
