---
title: "add_pointer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::add_pointer"
  - "std.tr1.add_pointer"
  - "add_pointer"
  - "std.add_pointer"
  - "std::add_pointer"
  - "type_traits/std::add_pointer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "add_pointer class [TR1]"
  - "add_pointer"
ms.assetid: d8095cb0-6578-4143-b78f-87f82485298c
caps.latest.revision: 22
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
# add_pointer Class
Makes a pointer-to-type from a specified type.  
  
## Syntax  
  
```  
template <class Ty>  
struct add_pointer;  
 
template <class T>using add_pointer_t = typename add_pointer<T>::type;  
```  
  
#### Parameters  
 `Ty`  
 The type to modify.  
  
## Remarks  
 The member typedef type names the same type as `remove_reference<T>::type*`.  
  
 Because it is invalid to make a pointer from a reference, `add_pointer` removes the reference, if any, from the specified type before it makes a pointer-to-type. Consequently, you can use a type with `add_pointer` without being concerned about whether the type is a reference.  
  
## Example  
 The following example demonstrates that `add_pointer` of a type is the same as a pointer to that type.  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::add_pointer_t<int> *p = (int **)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "add_pointer_t<int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
add_pointer_t<int> == int *  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [remove_pointer Class](../standard-library/remove-pointer-class.md)
