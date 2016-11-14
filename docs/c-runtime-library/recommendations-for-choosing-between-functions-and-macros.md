---
title: "Recommendations for Choosing Between Functions and Macros | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "c.functions"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "functions [CRT], vs. macros"
  - "macros, vs. functions"
ms.assetid: 18a633d6-cf1c-470c-a649-fa7677473e2b
caps.latest.revision: 7
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
# Recommendations for Choosing Between Functions and Macros
Most Microsoft run-time library routines are compiled or assembled functions, but some routines are implemented as macros. When a header file declares both a function and a macro version of a routine, the macro definition takes precedence, because it always appears after the function declaration. When you invoke a routine that is implemented as both a function and a macro, you can force the compiler to use the function version in two ways:  
  
-   Enclose the routine name in parentheses.  
  
    ```  
    #include <ctype.h>  
    a = _toupper(a);    // Use macro version of toupper.  
    a = (_toupper)(a);  // Force compiler to use   
                        // function version of toupper.  
    ```  
  
-   "Undefine" the macro definition with the `#undef` directive:  
  
    ```  
    #include <ctype.h>  
    #undef _toupper  
    ```  
  
 If you need to choose between a function and a macro implementation of a library routine, consider the following trade-offs:  
  
-   **Speed versus size** The main benefit of using macros is faster execution time. During preprocessing, a macro is expanded (replaced by its definition) inline each time it is used. A function definition occurs only once regardless of how many times it is called. Macros may increase code size but do not have the overhead associated with function calls.  
  
-   **Function evaluation** A function evaluates to an address; a macro does not. Thus you cannot use a macro name in contexts requiring a pointer. For instance, you can declare a pointer to a function, but not a pointer to a macro.  
  
-   **Type-checking** When you declare a function, the compiler can check the argument types. Because you cannot declare a macro, the compiler cannot check macro argument types; although it can check the number of arguments you pass to a macro.  
  
## See Also  
 [CRT Library Features](../c-runtime-library/crt-library-features.md)