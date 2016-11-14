---
title: "remove_volatile Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std::tr1::remove_volatile"
  - "std.tr1.remove_volatile"
  - "remove_volatile"
  - "std.remove_volatile"
  - "std::remove_volatile"
  - "type_traits/std::remove_volatile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove_volatile class [TR1]"
  - "remove_volatile"
ms.assetid: 8b87e2c2-a581-4eb3-8691-c5603910d61d
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
# remove_volatile Class
Makes non volatile type from type.  
  
## Syntax  
  
```  
template <class T>  
struct remove_volatile;  
 
template <class T>  
using remove_volatile_t = typename remove_volatile<T>::type;  
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of `remove_volatile<T>` holds a modified-type that is `T1` when `T` is of the form `volatile T1`, otherwise `T`.  
  
## Example  
  
```cpp  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    int *p = (std::remove_volatile_t<volatile int> *)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << " remove_volatile_t<volatile int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
remove_volatile_t<volatile int> == int  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [add_volatile Class](../standard-library/add-volatile-class.md)
