---
title: "__restrict | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "language-reference"
f1_keywords: 
  - "__restrict"
  - "__restrict_cpp"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "__restrict keyword [C++]"
ms.assetid: 2d151b4d-f930-49df-bd16-d8757ec7fa83
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
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
# __restrict
Like the **__declspec ( [restrict](../cpp/restrict.md) )** modifier, the `__restrict` keyword indicates that a symbol is not aliased in the current scope. The `__restrict` keyword differs from the `__declspec ( restrict )` modifier in the following ways:  
  
-   The `__restrict` keyword is valid only on variables, and `__declspec ( restrict )` is only valid on function declarations and definitions.  
  
-   `__restrict` is similar to `restrict` from the C99 spec, but `__restrict` can be used in C++ or C programs.  
  
-   When `__restrict` is used, the compiler will not propagate the no-alias property of a variable. That is, if you assign a `__restrict` variable to a non-`__restrict` variable, the compiler will still allow the non-__restrict variable to be aliased. This is different from the behavior of the `restrict` keyword from the C99 specification.  
  
 Generally, if you affect the behavior of an entire function, it is better to use `__declspec ( restrict )` than the keyword.  
  
 In Visual Studio 2015 and later, `__restrict` can be used on C++ references.  
  
> [!NOTE]
>  When used on a variable that also has the [volatile](../cpp/volatile-cpp.md) keyword, `volatile` will take precedence.  
  
## Example  
  
```  
// __restrict_keyword.c  
// compile with: /LD  
// In the following function, declare a and b as disjoint arrays  
// but do not have same assurance for c and d.  
void sum2(int n, int * __restrict a, int * __restrict b,   
          int * c, int * d) {  
   int i;  
   for (i = 0; i < n; i++) {  
      a[i] = b[i] + c[i];  
      c[i] = b[i] + d[i];  
    }  
}  
  
// By marking union members as __restrict, tell compiler that  
// only z.x or z.y will be accessed in any given scope.  
union z {  
   int * __restrict x;  
   double * __restrict y;  
};  
```  
  
## See Also  
 [Keywords](../cpp/keywords-cpp.md)