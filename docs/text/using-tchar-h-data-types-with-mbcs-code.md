---
description: "Learn more about: Using TCHAR.H Data Types with _MBCS Code"
title: "Using TCHAR.H Data Types with _MBCS Code"
ms.date: "11/04/2016"
helpviewer_keywords: ["mapping generic-text", "generic-text data types [C++]", "generic-text mappings [C++]", "MBCS [C++], generic-text mappings", "TCHAR.H data types, mapping", "mappings [C++], TCHAR.H"]
ms.assetid: 298583c5-22c3-40f6-920e-9ec96d42abd8
---
# Using TCHAR.H Data Types with _MBCS Code

When the manifest constant `_MBCS` is defined, a given generic-text routine maps to one of the following kinds of routines:

- An SBCS routine that handles multibyte bytes, characters, and strings appropriately. In this case, the string arguments are expected to be of type **`char*`**. For example, `_tprintf` maps to `printf`; the string arguments to `printf` are of type **`char*`**. If you use the `_TCHAR` generic-text data type for your string types, the formal and actual parameter types for `printf` match because `_TCHAR*` maps to **`char*`**.

- An MBCS-specific routine. In this case, the string arguments are expected to be of type `unsigned char*`. For example, `_tcsrev` maps to `_mbsrev`, which expects and returns a string of type `unsigned char*`. If you use the `_TCHAR` generic-text data type for your string types, there is a potential type conflict because `_TCHAR` maps to type **`char`**.

Following are three solutions for preventing this type conflict (and the C compiler warnings or C++ compiler errors that would result):

- Use the default behavior. tchar.h provides generic-text routine prototypes for routines in the run-time libraries, as in the following example.

    ```cpp
    char * _tcsrev(char *);
    ```

   In the default case, the prototype for `_tcsrev` maps to `_mbsrev` through a thunk in Libc.lib. This changes the types of the `_mbsrev` incoming parameters and outgoing return value from `_TCHAR*` (that is, `char *`) to `unsigned char *`. This method ensures type matching when you are using `_TCHAR`, but it is relatively slow due to the function call overhead.

- Use function inlining by incorporating the following preprocessor statement in your code.

    ```cpp
    #define _USE_INLINING
    ```

   This method causes an inline function thunk, provided in tchar.h, to map the generic-text routine directly to the appropriate MBCS routine. The following code excerpt from tchar.h provides an example of how this is done.

    ```cpp
    __inline char *_tcsrev(char *_s1)
    {return (char *)_mbsrev((unsigned char *)_s1);}
    ```

   If you can use inlining, this is the best solution, because it guarantees type matching and has no additional time cost.

- Use direct mapping by incorporating the following preprocessor statement in your code.

    ```cpp
    #define _MB_MAP_DIRECT
    ```

   This approach provides a fast alternative if you do not want to use the default behavior or cannot use inlining. It causes the generic-text routine to be mapped by a macro directly to the MBCS version of the routine, as in the following example from tchar.h.

    ```cpp
    #define _tcschr _mbschr
    ```

   When you take this approach, you must be careful to ensure use of appropriate data types for string arguments and string return values. You can use type casting to ensure proper type matching or you can use the `_TXCHAR` generic-text data type. `_TXCHAR` maps to type **`char`** in SBCS code but maps to type **`unsigned char`** in MBCS code. For more information about generic-text macros, see [Generic-Text Mappings](../c-runtime-library/generic-text-mappings.md) in the *Run-Time Library Reference*.

## See also

[Generic-Text Mappings in tchar.h](../text/generic-text-mappings-in-tchar-h.md)
