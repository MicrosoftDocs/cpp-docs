---
title: "is_abstract Class"
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
  - "std.tr1.is_abstract"
  - "std::tr1::is_abstract"
  - "is_abstract"
  - "std.is_abstract"
  - "std::is_abstract"
  - "type_traits/std::is_abstract"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_abstract class [TR1]"
  - "is_abstract"
ms.assetid: 8867f660-3434-404c-ba90-c26607a5e0d2
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
# is_abstract Class
Tests if type is abstract class.  
  
## Syntax  
  
```
template<class Ty>
struct is_abstract;
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a class that has at least one pure virtual function, otherwise it holds false.  
  
## Example  
  
```  
// std_tr1__type_traits__is_abstract.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
struct abstract   
    {   
    virtual int val() = 0;   
    };   
  
int main()   
    {   
    std::cout << "is_abstract<trivial> == " << std::boolalpha   
        << std::is_abstract<trivial>::value << std::endl;   
    std::cout << "is_abstract<abstract> == " << std::boolalpha   
        << std::is_abstract<abstract>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
 **is_abstract\<trivial> == false**  
**is_abstract\<abstract> == true**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../stdcpplib/-type_traits-.md)   
 [is_polymorphic Class](../stdcpplib/is_polymorphic-class.md)

