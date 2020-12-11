---
description: "Learn more about: &lt;cstdarg&gt;"
title: "&lt;cstdarg&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<cstdarg>"]
helpviewer_keywords: ["cstdarg header"]
ms.assetid: 639b4ef7-8408-4640-9343-41631f0ab663
---
# &lt;cstdarg&gt;

Includes the C Standard library header \<stdarg.h> and adds the associated names to the `std` namespace. Including this header ensures that the names declared using external linkage in the C Standard library header are declared in the `std` namespace.

## Syntax

```cpp
#include <cstdarg>
```

## Namespace and Macros

```cpp
namespace std {
    using va_list = see below;
}

#define va_arg(V, P)
#define va_copy(VDST, VSRC)
#define va_end(V)
#define va_start(V, P)
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)\
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
