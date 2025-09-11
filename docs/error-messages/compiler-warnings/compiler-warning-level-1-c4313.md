---
title: "Compiler Warning (level 1) C4313"
description: "Learn more about: Compiler Warning (level 1) C4313"
ms.date: 11/04/2016
f1_keywords: ["C4313"]
helpviewer_keywords: ["C4313"]
---
# Compiler Warning (level 1) C4313

> 'function' : 'format specifier' in format string conflicts with argument number of type 'type'

## Remarks

There is a conflict between the format specified and the value that you are passing. For example, you passed a 64-bit parameter to an unqualified %d format specifier, which expects a 32-bit integer parameter. This warning is only in effect when the code is compiled for 64-bit targets.

## Example

The following code example generates C4313 when it is compiled for a 64-bit target.

```cpp
// C4313.cpp
// Compile by using: cl /W1 C4313.cpp
#include <stdio.h>
int main() {
   int * pI = 0;
   printf("%d", pI);   // C4313 on 64-bit platform code
   // Try one of the following lines instead:
   // printf("%p\n", pI);
   // printf("%Id\n", pI);   // %I64d expects 64-bits of information
}
```
