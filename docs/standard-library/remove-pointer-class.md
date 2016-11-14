---
title: "remove_pointer Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "remove_pointer"
  - "std.tr1.remove_pointer"
  - "std::tr1::remove_pointer"
  - "std.remove_pointer"
  - "std::remove_pointer"
  - "type_traits/std::remove_pointer"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove_pointer class [TR1]"
  - "remove_pointer"
ms.assetid: 2cd4e417-32fb-4f53-bd16-4e8a98240832
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
# remove_pointer Class
Makes type from pointer to type.  
  
## Syntax  
  
```  
template <class T>  
struct remove_pointer;  
 
template <class T>  
using remove_pointer_t = typename remove_pointer<T>::type;  
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of `remove_pointer<T>` holds a modified-type that is `T1` when `T` is of the form `T1*`, `T1* const`, `T1* volatile`, or `T1* const volatile`, otherwise `T`.  
  
## Example  
  
```cpp  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    int *p = (std::remove_pointer_t<int *> *)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "remove_pointer_t<int *> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
remove_pointer_t<int *> == int  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [add_pointer Class](../standard-library/add-pointer-class.md)
