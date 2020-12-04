---
description: "Learn more about: &lt;cctype&gt;"
title: "&lt;cctype&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<cctype>"]
helpviewer_keywords: ["cctype header"]
ms.assetid: 3fd18bfd-c414-4def-bac1-c362e1fe8b71
---
# &lt;cctype&gt;

Includes the Standard C library header \<ctype.h> and adds the associated names to the `std` namespace.

## Requirements

**Header:** \<cctype>

**Namespace:** std

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## Functions

```cpp
int isalnum(int c);
int isalpha(int c);
int isblank(int c);
int iscntrl(int c);
int isdigit(int c);
int isgraph(int c);
int islower(int c);
int isprint(int c);
int ispunct(int c);
int isspace(int c);
int isupper(int c);
int isxdigit(int c);
int tolower(int c);
int toupper(int c);
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
