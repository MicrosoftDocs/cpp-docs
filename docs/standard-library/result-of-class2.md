---
title: "result_of Class2 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "functional/std::tr1::result_of"
  - "std::tr1::result_of"
  - "result_of"
  - "std.tr1.result_of"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "result_of class [TR1]"
ms.assetid: 14ec0040-07f1-45a5-80b5-d0c9f9b00c8f
caps.latest.revision: 20
author: "corob-msft"
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
# result_of Class
The return type of a wrapped callable object.  
  
## Syntax  
  
struct result_of {  
   typedef T0 type;  
   };  
  
#### Parameters  
 `Ty`  
 A description of a function call (see Remarks section).  
  
## Remarks  
 The template class defines its member `type` as a synonym for the return type of a function call described by its template argument `Ty`. The template argument must be of the form `Fty(T1, T2, ..., TN)`, where `Fty` is a callable type. The template determines the return type according to the first of the following rules that applies:  
  
-   if `Fty` is a pointer to function type `R(*)(U1, U2, ..., UN)` the return type is `R`;  
  
-   if `Fty` is a reference to function type `R(&)(U1, U2, ..., UN)` the return type is `R`;  
  
-   if `Fty` is a pointer to member function type `R(U1::*)(U2, ..., UN)` the return type is `R`;  
  
-   if `Fty` is a pointer to data member type `R U1::*` the return type is `R`;  
  
-   if `Fty` is a class with a member typedef `result_type` the return type is `Fty::result_type`;  
  
-   if `N` is 0 (that is, `Ty` is of the form `Fty()`) the return type is `void`;  
  
-   if `Fty` is a class with a member template named `result` the return type is `Fty::result<T1, T2, ..., TN>::type`;  
  
-   in all other cases it is an error.  
  
## Example  
 Â  
  
```  
// std_tr1__functional__result_of.cpp   
// compile with: /EHsc   
#include <functional>   
#include <iostream>   
  
double square(double x)   
    {   
    return (x * x);   
    }   
  
template<class Fun,   
    class Arg>   
    void test_result(const Fun& fun, Arg arg)   
    {   
    typename std::result_of<Fun(Arg)>::type val = fun(arg);   
    std::cout << "val == " << val << std::endl;   
    }   
  
int main()   
    {   
    test_result(&square, 3.0);   
  
    return (0);   
    }  
  
```  
  
```Output  
val == 9  
```  
  
## Requirements  
 **Header:** \<functional>  
  
 **Namespace:** std

