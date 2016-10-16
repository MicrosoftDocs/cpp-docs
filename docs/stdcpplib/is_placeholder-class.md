---
title: "is_placeholder Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "is_placeholder"
  - "std.tr1.is_placeholder"
  - "functional/std::tr1::is_placeholder"
  - "std::tr1::is_placeholder"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "is_placeholder class [TR1]"
ms.assetid: 2b21a792-96d1-4bb8-b911-0db796510835
caps.latest.revision: 19
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
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
# is_placeholder Class
Tests if type is a placeholder.  
  
## Syntax  
  
```
template<class Ty>
struct is_placeholder {
    static const int value;
 };
```  
  
## Remarks  
 The constant value `value` is 0 if the type `Ty` is not a placeholder; otherwise, its value is the position of the function call argument that it binds to. You use it to determine the value `N` for the Nth placeholder `_N`.  
  
## Example  
  
```  
// std_tr1__functional__is_placeholder.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
using namespace std::placeholders;   
  
template<class Expr>   
    void test_for_placeholder(const Expr&)   
    {   
    std::cout << std::is_placeholder<Expr>::value << std::endl;   
    }   
  
int main()   
    {   
    test_for_placeholder(3.0);   
    test_for_placeholder(_3);   
  
    return (0);   
    }  
  
```  
  
 **0**  
**3**    
## Requirements  
 **Header:** \<functional>  
  
 **Namespace:** std  
  
## See Also  
 [_1 Object](../stdcpplib/_1-object.md)

