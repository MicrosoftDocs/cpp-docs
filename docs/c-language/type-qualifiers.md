---
title: "Type Qualifiers | Microsoft Docs"
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
  - "C"
helpviewer_keywords: 
  - "volatile keyword [C], type qualifier"
  - "type qualifiers"
  - "volatile keyword [C]"
  - "qualifiers for types"
  - "const keyword [C]"
  - "memory, access using volatile"
  - "volatile keyword [C], type specifier"
ms.assetid: bb4c6744-1dd7-40a8-b4eb-f5585be30908
caps.latest.revision: 7
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
# Type Qualifiers
Type qualifiers give one of two properties to an identifier. The **const** type qualifier declares an object to be nonmodifiable. The `volatile` type qualifier declares an item whose value can legitimately be changed by something beyond the control of the program in which it appears, such as a concurrently executing thread.  
  
 The two type qualifiers, **const** and `volatile`, can appear only once in a declaration. Type qualifiers can appear with any type specifier; however, they cannot appear after the first comma in a multiple item declaration. For example, the following declarations are legal:  
  
```  
typedef volatile int VI;  
const int ci;  
```  
  
 These declarations are not legal:  
  
```  
typedef int *i, volatile *vi;  
float f, const cf;     
```  
  
 Type qualifiers are relevant only when accessing identifiers as l-values in expressions. See [L-Value and R-Value Expressions](../c-language/l-value-and-r-value-expressions.md) for information about l-values and expressions.  
  
## Syntax  
 *type-qualifier*:  
 **constvolatile**  
  
 The following are legal **const** and `volatile` declarations:  
  
```  
int const *p_ci;       /* Pointer to constant int */  
int const (*p_ci);     /* Pointer to constant int */  
int *const cp_i;       /* Constant pointer to int */  
int (*const cp_i);     /* Constant pointer to int */  
int volatile vint;     /* Volatile integer        */  
```  
  
 If the specification of an array type includes type qualifiers, the element is qualified, not the array type. If the specification of the function type includes qualifiers, the behavior is undefined. Neither `volatile` nor **const** affects the range of values or arithmetic properties of the object.  
  
 This list describes how to use **const** and `volatile`.  
  
-   The **const** keyword can be used to modify any fundamental or aggregate type, or a pointer to an object of any type, or a `typedef`. If an item is declared with only the **const** type qualifier, its type is taken to be **const int**. A **const** variable can be initialized or can be placed in a read-only region of storage. The **const** keyword is useful for declaring pointers to **const** since this requires the function not to change the pointer in any way.  
  
-   The compiler assumes that, at any point in the program, a `volatile` variable can be accessed by an unknown process that uses or modifies its value. Therefore, regardless of the optimizations specified on the command line, the code for each assignment to or reference of a `volatile` variable must be generated even if it appears to have no effect.  
  
     If `volatile` is used alone, `int` is assumed. The `volatile` type specifier can be used to provide reliable access to special memory locations. Use `volatile` with data objects that may be accessed or altered by signal handlers, by concurrently executing programs, or by special hardware such as memory-mapped I/O control registers. You can declare a variable as `volatile` for its lifetime, or you can cast a single reference to be `volatile`.  
  
-   An item can be both **const** and `volatile`, in which case the item could not be legitimately modified by its own program, but could be modified by some asynchronous process.  
  
## See Also  
 [Declarations and Types](../c-language/declarations-and-types.md)