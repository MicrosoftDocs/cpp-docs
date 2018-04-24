---
title: "is_object Class | Microsoft Docs"
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
  - "is_object"
  - "std.tr1.is_object"
  - "std::tr1::is_object"
  - "std.is_object"
  - "std::is_object"
  - "type_traits/std::is_object"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_object class [TR1]"
  - "is_object"
ms.assetid: b452ceea-5676-488f-925b-ab881126c387
caps.latest.revision: 22
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# is_object Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [is_object Class](https://docs.microsoft.com/cpp/standard-library/is-object-class).  
  
Tests if type is an object type.  
  
## Syntax  
  
```  
template <class Ty>  
struct is_object;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds false if the type `Ty` is a reference type, a function type, or void, or a `cv-qualified` form of one of them, otherwise holds true.  
  
## Example  
  
```  
// std_tr1__type_traits__is_object.cpp   
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
    std::cout << "is_object<trivial> == " << std::boolalpha   
        << std::is_object<trivial>::value << std::endl;   
    std::cout << "is_object<functional> == " << std::boolalpha   
        << std::is_object<functional>::value << std::endl;   
    std::cout << "is_object<trivial&> == " << std::boolalpha   
        << std::is_object<trivial&>::value << std::endl;   
    std::cout << "is_object<float()> == " << std::boolalpha   
        << std::is_object<float()>::value << std::endl;   
    std::cout << "is_object<void> == " << std::boolalpha   
        << std::is_object<void>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
is_object<trivial> == true  
is_object<functional> == true  
is_object<trivial&> == false  
is_object<float()> == false  
is_object<void> == false  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [is_function Class](../standard-library/is-function-class.md)




