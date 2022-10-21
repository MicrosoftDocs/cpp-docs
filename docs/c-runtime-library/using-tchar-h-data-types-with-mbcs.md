---
title: "Using TCHAR.H Data Types with _MBCS"
description: "An overview of how Microsoft C runtime text routines are mapped when you use TCHAR.H data types with the multibyte constant _MBCS."
ms.topic: "conceptual"
ms.date: "11/04/2016"
helpviewer_keywords: ["TCHAR.H data types", "MBCS data type", "_MBCS data type"]
ms.assetid: 48f471e7-9d2b-4a39-b841-16a0e15c0a18
---
# Using tchar.h data types with _MBCS

**Microsoft Specific**

As the table of generic-text routine mappings indicates (see [Generic-text mappings](./generic-text-mappings.md)), when the manifest constant `_MBCS` is defined, a given generic-text routine will map to one of the following kinds of routines:

- An SBCS routine that handles multibyte bytes, characters, and strings appropriately. In this case, the string arguments are expected to be of type `char*`. For example, `_tprintf` maps to `printf`; the string arguments to `printf` are of type `char*`. If you use the `_TCHAR` generic-text data type for your string types, the formal and actual parameter types for `printf` match because `_TCHAR*` maps to `char*`.

- An MBCS-specific routine. In this case, the string arguments are expected to be of type `unsigned char*`. For example, `_tcsrev` maps to `_mbsrev`, which expects and returns a string of type `unsigned char*`. Again, if you use the `_TCHAR` generic-text data type for your string types, there's a potential type conflict because `_TCHAR` maps to type **`char`**.

Following are three solutions for preventing this type conflict (and the C compiler warnings or C++ compiler errors that would result):

- Use the default behavior. TCHAR.H provides generic-text routine prototypes for routines in the run-time libraries, as in the following example.

   ```C
   char *_tcsrev(char *);
   ```

   In the default case, the prototype for `_tcsrev` maps to `_mbsrev` through a thunk in LIBC.LIB. This thunk changes the types of the `_mbsrev` incoming parameters and outgoing return value from `_TCHAR*` (such as `char*`) to `unsigned char*`. This method ensures type matching when you're using `_TCHAR`, but it's relatively slow because of the function call overhead.

- Use function inlining by incorporating the following preprocessor statement in your code.

   ```C
   #define _USE_INLINING
   ```

   This method causes an inline function thunk, provided in TCHAR.H, to map the generic-text routine directly to the appropriate MBCS routine. The following code excerpt from TCHAR.H provides an example of how it's done.

   ```C
   __inline char *_tcsrev(char *_s1)
   {return (char *)_mbsrev((unsigned char *)_s1);}
   ```

   If you can use inlining, it's the best solution, because it guarantees type matching and has no extra time cost.

- Use "direct mapping" by incorporating the following preprocessor statement in your code.

   ```C
   #define _MB_MAP_DIRECT
   ```

   This approach provides a quick alternative if you don't want to use the default behavior or can't use inlining. A macro maps the generic-text routine to the MBCS version of the routine, as in the following example from TCHAR.H.

   ```C
   #define _tcschr _mbschr
   ```

When you take this approach, be careful to ensure that appropriate data types are used for string arguments and string return values. You can use type casting to ensure proper type matching or you can use the `_TXCHAR` generic-text data type. `_TXCHAR` maps to type **`char`** in SBCS code but maps to type **`unsigned char`** in MBCS code. For more information about generic-text macros, see [Generic-text mappings](./generic-text-mappings.md).

**END Microsoft Specific**

## See also

[Internationalization](./internationalization.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)
