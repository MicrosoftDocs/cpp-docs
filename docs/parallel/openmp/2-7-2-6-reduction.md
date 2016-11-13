---
title: "2.7.2.6 reduction | Microsoft Docs"
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
ms.assetid: e7630a15-2978-4dbe-a29b-3a46371a0151
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
# 2.7.2.6 reduction
This clause performs a reduction on the scalar variables that appear in *variable-list*, with the operator op. The syntax of the `reduction` clause is as follows:  
  
```  
  
reduction(  
op  
:  
variable-list  
)  
  
```  
  
 A reduction is typically specified for a statement with one of the following forms:  
  
```  
  
      x     =  xopexprxbinop=  exprx     =  expropx            (except for subtraction)  
x++  
++xx--  
--x  
```  
  
 where:  
  
 *x*  
 One of the reduction variables specified in the `list`.  
  
 *variable-list*  
 A comma-separated list of scalar reduction variables.  
  
 *expr*  
 An expression with scalar type that does not reference *x*.  
  
 `op`  
 Not an overloaded operator but one of +, *, -, &, ^, &#124;, &&, or &#124;&#124;.  
  
 `binop`  
 Not an overloaded operator but one of +, *, -, &, ^, or &#124;.  
  
 The following is an example of the `reduction` clause:  
  
```  
#pragma omp parallel for reduction(+: a, y) reduction(||: am)  
for (i=0; i<n; i++) {  
   a += b[i];  
   y = sum(y, c[i]);  
   am = am || b[i] == c[i];  
}  
```  
  
 As shown in the example, an operator may be hidden inside a function call. The user should be careful that the operator specified in the `reduction` clause matches the reduction operation.  
  
 Although the right operand of the &#124;&#124; operator has no side effects in this example, they are permitted, but should be used with care. In this context, a side effect that is guaranteed not to occur during sequential execution of the loop may occur during parallel execution. This difference can occur because the order of execution of the iterations is indeterminate.  
  
 The operator is used to determine the initial value of any private variables used by the compiler for the reduction and to determine the finalization operator. Specifying the operator explicitly allows the reduction statement to be outside the lexical extent of the construct. Any number of `reduction` clauses may be specified on the directive, but a variable may appear in at most one `reduction` clause for that directive.  
  
 A private copy of each variable in *variable-list* is created, one for each thread, as if the `private` clause had been used. The private copy is initialized according to the operator (see the following table).  
  
 At the end of the region for which the `reduction` clause was specified, the original object is updated to reflect the result of combining its original value with the final value of each of the private copies using the operator specified. The reduction operators are all associative (except for subtraction), and the compiler may freely reassociate the computation of the final value. (The partial results of a subtraction reduction are added to form the final value.)  
  
 The value of the original object becomes indeterminate when the first thread reaches the containing clause and remains so until the reduction computation is complete.  Normally, the computation will be complete at the end of the construct; however, if the `reduction` clause is used on a construct to which `nowait` is also applied, the value of the original object remains indeterminate until a barrier synchronization has been performed to ensure that all threads have completed the `reduction` clause.  
  
 The following table lists the operators that are valid and their canonical initialization values. The actual initialization value will be consistent with the data type of the reduction variable.  
  
|Operator|Initialization|  
|--------------|--------------------|  
|+|0|  
|*|1|  
|-|0|  
|&|~0|  
|&#124;|0|  
|^|0|  
|&&|1|  
|&#124;&#124;|0|  
  
 The restrictions to the `reduction` clause are as follows:  
  
-   The type of the variables in the `reduction` clause must be valid for the reduction operator except that pointer types and reference types are never permitted.  
  
-   A variable that is specified in the `reduction` clause must not be **const**-qualified.  
  
-   Variables that are private within a parallel region or that appear in the `reduction` clause of a **parallel** directive cannot be specified in a `reduction` clause on a work-sharing directive that binds to the parallel construct.  
  
    ```  
    #pragma omp parallel private(y)  
    { /* ERROR - private variable y cannot be specified  
                 in a reduction clause */  
       #pragma omp for reduction(+: y)  
       for (i=0; i<n; i++)  
          y += b[i];  
    }  
  
    /* ERROR - variable x cannot be specified in both  
               a shared and a reduction clause */  
    #pragma omp parallel for shared(x) reduction(+: x)  
    ```