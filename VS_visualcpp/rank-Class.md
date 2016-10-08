---
title: "rank Class"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: bc9f1b8f-800f-46ca-b6f4-d8579ed5406a
caps.latest.revision: 15
manager: ghogen
translation.priority.mt: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# rank Class
Gets number of array dimensions.  
  
## Syntax  
  
```  
template<class Ty>  
    struct rank;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 The type query holds the value of the number of dimensions of the array type `Ty`, or 0 if `Ty` is not an array type.  
  
## Example  
  
```  
// std_tr1__type_traits__rank.cpp   
// compile with: /EHsc   
#include <type_traits>   
#include <iostream>   
  
int main()   
    {   
    std::cout << "rank<int> == "   
        << std::rank<int>::value << std::endl;   
    std::cout << "rank<int[5]> == "   
        << std::rank<int[5]>::value << std::endl;   
    std::cout << "rank<int[5][10]> == "   
        << std::rank<int[5][10]>::value << std::endl;   
  
    return (0);   
    }  
  
```  
  
  **rank<int\> == 0**  
**rank<int[5]> == 1**  
**rank<int[5][10]> == 2**    
## Requirements  
 **Header:** <type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../VS_visualcpp/-type_traits-.md)   
 [extent Class](../VS_visualcpp/extent-Class.md)