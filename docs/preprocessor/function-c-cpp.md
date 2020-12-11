---
description: "Learn more about: function pragma"
title: "function pragma"
ms.date: "08/29/2019"
f1_keywords: ["function_CPP", "vc-pragma.function"]
helpviewer_keywords: ["function pragma", "pragmas, function"]
ms.assetid: cbd1bd60-fabf-4b5a-9c3d-2d9f4b871365
---
# function pragma

Tells the compiler to generate calls to functions specified in the pragma's argument list, instead of inlining them.

## Syntax

> **#pragma function(** *function1* [ **,** *function2* ... ] **)**

## Remarks

Intrinsic functions are normally generated as inline code, not as function calls. If you use the [intrinsic pragma](intrinsic.md) or the [/Oi](../build/reference/oi-generate-intrinsic-functions.md) compiler option to tell the compiler to generate intrinsic functions, you can use the **function** pragma to explicitly force a function call. Once a **function** pragma is seen, it takes effect at the first function definition that contains a specified intrinsic function. The effect continues to the end of the source file, or to the appearance of an `intrinsic` pragma specifying the same intrinsic function. You can only use the **function** pragma outside of a function, at the global level.

For lists of the functions that have intrinsic forms, see [intrinsic pragma](intrinsic.md).

## Example

```cpp
// pragma_directive_function.cpp
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// use intrinsic forms of memset and strlen
#pragma intrinsic(memset, strlen)

// Find first word break in string, and set remaining
// chars in string to specified char value.
char *set_str_after_word(char *string, char ch) {
   int i;
   int len = strlen(string);  /* NOTE: uses intrinsic for strlen */

   for(i = 0; i < len; i++) {
      if (isspace(*(string + i)))
         break;
   }

   for(; i < len; i++)
      *(string + i) = ch;

   return string;
}

// do not use strlen intrinsic
#pragma function(strlen)

// Set all chars in string to specified char value.
char *set_str(char *string, char ch) {
   // Uses intrinsic for memset, but calls strlen library function
   return (char *) memset(string, ch, strlen(string));
}

int main() {
   char *str = (char *) malloc(20 * sizeof(char));

   strcpy_s(str, sizeof("Now is the time"), "Now is the time");
   printf("str is '%s'\n", set_str_after_word(str, '*'));
   printf("str is '%s'\n", set_str(str, '!'));
}
```

```Output
str is 'Now************'
str is '!!!!!!!!!!!!!!!'
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
