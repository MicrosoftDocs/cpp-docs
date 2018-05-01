---
title: "add_volatile Class | Microsoft Docs"
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
  - "std::tr1::add_volatile"
  - "add_volatile"
  - "std.tr1.add_volatile"
  - "std.add_volatile"
  - "std::add_volatile"
  - "type_traits/std::add_volatile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "add_volatile class [TR1]"
  - "add_volatile"
ms.assetid: cde57277-d764-402d-841e-97611ebaab14
caps.latest.revision: 24
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# add_volatile Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [add_volatile Class](https://docs.microsoft.com/cpp/standard-library/add-volatile-class).  
  
Makes volatile type from the specified type.  
  
## Syntax  
  
```  
template <class Ty>  
struct add_volatile;  
 
template <class T>using add_volatile_t = typename add_volatile<T>::type;  
```  
  
#### Parameters  
 `Ty`  
 The type to modify.  
  
## Remarks  
 An instance of the type modifier holds a modified-type that is `Ty` if `Ty` is a reference, a function, or a volatile-qualified type, otherwise `volatile Ty`.  
  
## Example  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::add_volatile_t<int> *p = (volatile int *)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "add_volatile<int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
add_volatile<int> == int  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [remove_volatile Class](../standard-library/remove-volatile-class.md)




