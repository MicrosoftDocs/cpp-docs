---
description: "Learn more about: &lt;clocale&gt;"
title: "&lt;clocale&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<clocale>"]
helpviewer_keywords: ["clocale header"]
ms.assetid: 5bde3e01-cf67-4f1f-a383-447ec814d00e
---
# &lt;clocale&gt;

Includes the Standard C library header \<locale.h> and adds the associated names to the `std` namespace.

## Requirements

**Header:** \<clocale>

**Namespace:** std

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## Constants

```cpp
#define NULL see below
#define LC_ALL see below
#define LC_COLLATE see below
#define LC_CTYPE see below
#define LC_MONETARY see below
#define LC_NUMERIC see below
#define LC_TIME see below
```

## Structures

```cpp
struct lconv;
```

## Functions

```cpp
char* setlocale(int category, const char* locale);
lconv* localeconv();
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
