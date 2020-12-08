---
title: "Generic selection (C11)"
description: "Describes the C11 _Generic keyword used in the Microsoft Visual C compiler"
ms.date: "12/8/2020"
helpviewer_keywords: ["_Generic keyword [C]"]
---

# Generic Selection (C11)

Use the _Generic keyword to select an expression at compile time, based on a type. 

```c
#include <stdio.h>
#include <stddef.h>
#include <stdint.h>

#define typename(x) _Generic((x),        /* Get the name of a type */             \
                                                                                  \
        _Bool: "_Bool",                  unsigned char: "unsigned char",          \
         char: "char",                     signed char: "signed char",            \
    short int: "short int",         unsigned short int: "unsigned short int",     \
          int: "int",                     unsigned int: "unsigned int",           \
     long int: "long int",           unsigned long int: "unsigned long int",      \
long long int: "long long int", unsigned long long int: "unsigned long long int", \
        float: "float",                         double: "double",                 \
  long double: "long double",                   char *: "pointer to char",        \
       void *: "pointer to void",                int *: "pointer to int",         \
      default: "other")
```

## See also

[`/std` (Specify Language Standard Version)](../build/reference/std-specify-language-standard-version.md)\