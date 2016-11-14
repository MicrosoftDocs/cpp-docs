---
title: "is_default_constructible Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "is_default_constructible"
  - "std.is_default_constructible"
  - "std::is_default_constructible"
  - "type_traits/std::is_default_constructible"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_default_constructible"
ms.assetid: dd8f1c44-dae5-4258-891f-c5e048d94092
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# is_default_constructible Class
Tests if a type has a default constructor.  
  
## Syntax  
  
```  
template <class Ty>  
struct is_default_constructible;  
```  
  
#### Parameters  
 `T`  
 The type to query.  
  
## Remarks  
 An instance of the type predicate holds true if the type `T` is a class type that has a default constructor, otherwise it holds false. This is equivalent to the predicate `is_constructible<T>`. Type `T` must be a complete type, `void`, or an array of unknown bound.  
  
## Example  
  
```cpp  
  
#include <type_traits>   
#include <iostream>   
  
struct Simple  
{  
    Simple() : val(0) {}  
    int val;  
};  
  
struct Simple2  
{  
    Simple2(int v) : val(v) {}  
    int val;  
};  
  
int main()  
{  
    std::cout << "is_default_constructible<Simple> == " << std::boolalpha  
        << std::is_default_constructible<Simple>::value << std::endl;  
    std::cout << "is_default_constructible<Simple2> == " << std::boolalpha  
        << std::is_default_constructible<Simple2>::value << std::endl;  
  
    return (0);  
}  
  
```  
  
```Output  
is_default_constructible<Simple> == true  
is_default_constructible<Simple2> == false  
```  
  
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)

