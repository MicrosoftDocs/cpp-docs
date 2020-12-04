---
description: "Learn more about: &lt;csetjmp&gt;"
title: "&lt;csetjmp&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<csetjmp>"]
helpviewer_keywords: ["csetjmp header"]
ms.assetid: 8f21fddd-5e9b-4219-a848-581cdd3569d9
---
# &lt;csetjmp&gt;

Includes the Standard C library header \<setjmp.h> and adds the associated names to the `std` namespace.

## Syntax

```cpp
#include <csetjmp>

using jmp_buf = see below;
```

## Functions

```cpp
[[noreturn]] void longjmp(jmp_buf env, int val);
```

## Macros

```cpp
#define setjmp(env)
```

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
