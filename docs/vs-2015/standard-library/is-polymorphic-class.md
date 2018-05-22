---
title: "is_polymorphic Class | Microsoft Docs"
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
  - "std.tr1.is_polymorphic"
  - "is_polymorphic"
  - "std::tr1::is_polymorphic"
  - "std.is_polymorphic"
  - "std::is_polymorphic"
  - "type_traits/std::is_polymorphic"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_polymorphic class [TR1]"
  - "is_polymorphic"
ms.assetid: 4e1704db-d6f9-4154-a100-0ba02a373f20
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_polymorphic Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_polymorphic Class](https://docs.microsoft.com/cpp/standard-library/is-polymorphic-class).  
  
Tests if type has a virtual function.  
  
## Syntax  
  
```  
template <class Ty>  
struct is_polymorphic;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `Ty` is a class that declares or inherits a virtual function, otherwise it holds false.  
  
## Example  
  
```  
// std_tr1__type_traits__is_polymorphic.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
struct trivial   
    {   
    int val;   
    };   
  
struct throws   
    {   
    throws() throw(int)   
        {   
        }   
  
    throws(const throws&) throw(int)   
        {   
        }   
  
    throws& operator=(const throws&) throw(int)   
        {   
        }   
  
    virtual ~throws()   
        {   
        }   
  
    int val;   
    };   
  
int main()   
    {   
    std::cout << "is_polymorphic<trivial> == " << std::boolalpha   
        << std::is_polymorphic<trivial>::value << std::endl;   
    std::cout << "is_polymorphic<throws> == " << std::boolalpha   
        << std::is_polymorphic<throws>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_polymorphic<trivial> == false  
is_polymorphic<throws> == true  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_abstract Class](../standard-library/is-abstract-class.md)




