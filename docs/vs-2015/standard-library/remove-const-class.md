---
title: "remove_const Class | Microsoft Docs"
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
  - "std.tr1.remove_const"
  - "std::tr1::remove_const"
  - "remove_const"
  - "std.remove_const"
  - "std::remove_const"
  - "type_traits/std::remove_const"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove_const class [TR1]"
  - "remove_const"
ms.assetid: feb76fb3-9228-41d6-80f6-2fbb04daec43
caps.latest.revision: 23
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# remove_const Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [remove_const Class](https://docs.microsoft.com/cpp/standard-library/remove-const-class).  
  
Makes a non const type from type.  
  
## Syntax  
  
```  
template <class T>  
struct remove_const;
```  
  
```  
template <class T>  
using remove_const_t = typename remove_const<T>::type;  
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of `remove_const<T>` holds a modified-type that is `T1` when `T` is of the form `const T1`, otherwise `T`.  
  
## Example  
  
```  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    int *p = (std::remove_const_t<const int>*)0;   
  
    p = p;  // to quiet "unused" warning   
    std::cout << "remove_const_t<const int> == "   
        << typeid(*p).name() << std::endl;   
  
    return (0);   
    }  
  
```  
  
```Output  
remove_const_t<const int> == int  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [add_const Class](../standard-library/add-const-class.md)   
 [remove_cv Class](../standard-library/remove-cv-class.md)




