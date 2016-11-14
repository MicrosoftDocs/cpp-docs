---
title: "remove_all_extents Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "std.tr1.remove_all_extents"
  - "std::tr1::remove_all_extents"
  - "remove_all_extents"
  - "std.remove_all_extents"
  - "std::remove_all_extents"
  - "type_traits/std::remove_all_extents"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "remove_all_extents class [TR1]"
  - "remove_all_extents"
ms.assetid: 548dc536-82e7-423a-b8c1-443d66d9632e
caps.latest.revision: 16
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
# remove_all_extents Class
Makes non array type from array type.  
  
## Syntax  
  
```
template <class T>
struct remove_all_extents;

template <class T>  
using remove_all_extents_t = typename remove_all_extents<T>::type;
```  
  
#### Parameters  
 `T`  
 The type to modify.  
  
## Remarks  
 An instance of `remove_all_extents<T>` holds a modified-type that is the element type of the array type `T` with all array dimensions removed, or `T` if `T` is not an array type.  
  
## Example  
  
```cpp  
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::cout << "remove_all_extents<int> == "   
        << typeid(std::remove_all_extents_t<int>).name()   
        << std::endl;   
    std::cout << "remove_all_extents_t<int[5]> == "   
        << typeid(std::remove_all_extents_t<int[5]>).name()   
        << std::endl;   
    std::cout << "remove_all_extents_t<int[5][10]> == "   
        << typeid(std::remove_all_extents_t<int[5][10]>).name()   
        << std::endl;   
  
    return (0);   
    }  
  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [remove_extent Class](../standard-library/remove-extent-class.md)
