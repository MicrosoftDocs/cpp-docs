---
title: "2.6.4 atomic Construct | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: e4232ef1-4058-42ce-9de0-0ca788312aba
caps.latest.revision: 6
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
# 2.6.4 atomic Construct
The `atomic` directive ensures that a specific memory location is updated atomically, rather than exposing it to the possibility of multiple, simultaneous writing threads. The syntax of the `atomic` directive is as follows:  
  
```  
#pragma omp atomic new-lineexpression-stmt  
```  
  
 The expression statement must have one of the following forms:  
  
 *x binop*= *expr*  
  
 x++  
  
 ++x  
  
 x--  
  
 --x  
  
 In the preceding expressions:  
  
-   *x* is an lvalue expression with scalar type.  
  
-   *expr* is an expression with scalar type, and it does not reference the object designated by *x*.  
  
-   `binop` is not an overloaded operator and is one of  +, *, -, /, &, ^, &#124;, <\<, or   >>.  
  
 Although it is implementation-defined whether an implementation replaces all `atomic` directives with **critical** directives that have the same unique *name*, the `atomic` directive permits better optimization. Often hardware instructions are available that can perform the atomic update with the least overhead.  
  
 Only the load and store of the object designated by *x* are atomic; the evaluation of *expr* is not atomic. To avoid race conditions, all updates of the location in parallel should be protected with the `atomic` directive, except those that are known to be free of race conditions.  
  
 Restrictions to the `atomic` directive are as follows:  
  
-   All atomic references to the storage location x throughout the program are required to have a compatible type.  
  
## Examples:  
  
```  
extern float a[], *p = a, b;  
/* Protect against races among multiple updates. */  
#pragma omp atomic  
a[index[i]] += b;  
/* Protect against races with updates through a. */  
#pragma omp atomic  
p[i] -= 1.0f;  
  
extern union {int n; float x;} u;  
/* ERROR - References through incompatible types. */  
#pragma omp atomic  
u.n++;  
#pragma omp atomic  
u.x -= 1.0f;  
```