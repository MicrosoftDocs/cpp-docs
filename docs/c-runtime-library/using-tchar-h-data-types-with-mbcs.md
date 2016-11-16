---
title: "Using TCHAR.H Data Types with _MBCS | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "_mbcs"
dev_langs: 
  - "C++"
  - "C"
helpviewer_keywords: 
  - "TCHAR.H data types"
  - "MBCS data type"
  - "_MBCS data type"
ms.assetid: 48f471e7-9d2b-4a39-b841-16a0e15c0a18
caps.latest.revision: 8
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
# Using TCHAR.H Data Types with _MBCS
**Microsoft Specific**  
  
 As the table of generic-text routine mappings indicates (see [Generic-Text Mappings](../c-runtime-library/generic-text-mappings.md)), when the manifest constant `_MBCS` is defined, a given generic-text routine maps to one of the following kinds of routines:  
  
-   An SBCS routine that handles multibyte bytes, characters, and strings appropriately. In this case, the string arguments are expected to be of type `char*`. For example, `_tprintf` maps to `printf`; the string arguments to `printf` are of type `char*`. If you use the `_TCHAR` generic-text data type for your string types, the formal and actual parameter types for `printf` match because `_TCHAR*` maps to `char*`.  
  
-   An MBCS-specific routine. In this case, the string arguments are expected to be of type `unsigned char*`. For example, `_tcsrev` maps to `_mbsrev`, which expects and returns a string of type `unsigned char*`. Again, if you use the `_TCHAR` generic-text data type for your string types, there is a potential type conflict because `_TCHAR` maps to type `char`.  
  
 Following are three solutions for preventing this type conflict (and the C compiler warnings or C++ compiler errors that would result):  
  
-   Use the default behavior. TCHAR.H provides generic-text routine prototypes for routines in the run-time libraries, as in the following example.  
  
    ```  
    char *_tcsrev(char *);  
    ```  
  
     In the default case, the prototype for `_tcsrev` maps to `_mbsrev` through a thunk in LIBC.LIB. This changes the types of the `_mbsrev` incoming parameters and outgoing return value from `_TCHAR *` (such as `char *`) to `unsigned char *`. This method ensures type matching when you are using `_TCHAR`, but it is relatively slow because of the function call overhead.  
  
-   Use function inlining by incorporating the following preprocessor statement in your code.  
  
    ```  
    #define _USE_INLINING  
    ```  
  
     This method causes an inline function thunk, provided in TCHAR.H, to map the generic-text routine directly to the appropriate MBCS routine. The following code excerpt from TCHAR.H provides an example of how this is done.  
  
    ```  
    __inline char *_tcsrev(char *_s1)  
    {return (char *)_mbsrev((unsigned char *)_s1);}  
    ```  
  
     If you can use inlining, this is the best solution, because it guarantees type matching and has no additional time cost.  
  
-   Use "direct mapping" by incorporating the following preprocessor statement in your code.  
  
    ```  
    #define _MB_MAP_DIRECT  
    ```  
  
     This approach provides a fast alternative if you do not want to use the default behavior or cannot use inlining. It causes the generic-text routine to be mapped by a macro directly to the MBCS version of the routine, as in the following example from TCHAR.H.  
  
    ```  
    #define _tcschr _mbschr  
    ```  
  
 When you take this approach, you must be careful to ensure that appropriate data types are used for string arguments and string return values. You can use type casting to ensure proper type matching or you can use the `_TXCHAR` generic-text data type. `_TXCHAR` maps to type `char` in SBCS code but maps to type `unsigned char` in MBCS code. For more information about generic-text macros, see [Generic-Text Mappings](../c-runtime-library/generic-text-mappings.md).  
  
 **END Microsoft Specific**  
  
## See Also  
 [Internationalization](../c-runtime-library/internationalization.md)   
 [Run-Time Routines by Category](../c-runtime-library/run-time-routines-by-category.md)