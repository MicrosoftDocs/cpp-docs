---
title: "rank Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["type_traits/std::rank"]
dev_langs: ["C++"]
helpviewer_keywords: ["rank class", "rank"]
ms.assetid: bc9f1b8f-800f-46ca-b6f4-d8579ed5406a
caps.latest.revision: 19
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# rank Class
Gets number of array dimensions.  
  
## Syntax  
  
```  
template <class Ty>  
struct rank;  
```  
  
#### Parameters  
 `Ty`  
 The type to query.  
  
## Remarks  
 The type query holds the value of the number of dimensions of the array type `Ty`, or 0 if `Ty` is not an array type.  
  
## Example  
  
```cpp  
// std__type_traits__rank.cpp   
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
  
```Output  
rank<int> == 0  
rank<int[5]> == 1  
rank<int[5][10]> == 2  
```  
  
## Requirements  
 **Header:** \<type_traits>  
  
 **Namespace:** std  
  
## See Also  
 [<type_traits>](../standard-library/type-traits.md)   
 [extent Class](../standard-library/extent-class.md)
