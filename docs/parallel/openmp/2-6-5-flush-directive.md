---
title: "2.6.5 flush Directive | Microsoft Docs"
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
ms.assetid: a2ec5f74-9c37-424a-8376-47ab4a5829a2
caps.latest.revision: 8
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
# 2.6.5 flush Directive
The **flush** directive, whether explicit or implied, specifies a "cross-thread" sequence point at which the implementation is required to ensure that all threads in a team have a consistent view of certain objects (specified below) in memory. This means that previous evaluations of expressions that reference those objects are complete and subsequent evaluations have not yet begun. For example, compilers must restore the values of the objects from registers to memory, and hardware may need to flush write buffers to memory and reload the values of the objects from memory.  
  
 The syntax of the **flush** directive is as follows:  
  
```  
#pragma omp flush [(variable-list)]  new-line  
```  
  
 If the objects that require synchronization can all be designated by variables, then those variables can be specified in the optional *variable-list*. If a pointer is present in the *variable-list*, the pointer itself is flushed, not the object the pointer refers to.  
  
 A **flush** directive without a *variable-list* synchronizes all shared objects except inaccessible objects with automatic storage duration. (This is likely to have more overhead than a **flush** with a *variable-list*.) A **flush** directive without a *variable-list* is implied for the following directives:  
  
-   `barrier`  
  
-   At entry to and exit from **critical**  
  
-   At entry to and exit from `ordered`  
  
-   At entry to and exit from **parallel**  
  
-   At exit from **for**  
  
-   At exit from **sections**  
  
-   At exit from **single**  
  
-   At entry to and exit from **parallel for**  
  
-   At entry to and exit from **parallel sections**  
  
 The directive is not implied if a `nowait` clause is present. It should be noted that the **flush** directive is not implied for any of the following:  
  
-   At entry to **for**  
  
-   At entry to or exit from **master**  
  
-   At entry to **sections**  
  
-   At entry to **single**  
  
 A reference that accesses the value of an object with a volatile-qualified type behaves as if there were a **flush** directive specifying that object at the previous sequence point. A reference that modifies the value of an object with a volatile-qualified type behaves as if there were a **flush** directive specifying that object at the subsequent sequence point.  
  
 Note that because the **flush** directive does not have a C language statement as part of its syntax, there are some restrictions on its placement within a program. See [Appendix C](../../parallel/openmp/c-openmp-c-and-cpp-grammar.md) for the formal grammar. The example below illustrates these restrictions.  
  
```  
/* ERROR - The flush directive cannot be the immediate  
*          substatement of an if statement.  
*/  
if (x!=0)  
   #pragma omp flush (x)  
...  
  
/* OK - The flush directive is enclosed in a  
*      compound statement  
*/  
if (x!=0) {  
   #pragma omp flush (x)  
}  
```  
  
 Restrictions to the **flush** directive are as follows:  
  
-   A variable specified in a **flush** directive must not have a reference type.