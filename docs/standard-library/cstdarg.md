---
title: "&lt;cstdarg&gt;"
ms.date: "11/04/2016"
f1_keywords: ["<cstdarg>"]
helpviewer_keywords: ["cstdarg header"]
ms.assetid: 639b4ef7-8408-4640-9343-41631f0ab663
---
# &lt;cstdarg&gt;

Includes the Standard C library header \<stdarg.h> and adds the associated names to the `std` namespace.

## Syntax

```cpp
#include <cstdarg>

namespace std { using va_list = see below; }
```

## Remarks

Including this header ensures that the names declared using external linkage in the Standard C library header are declared in the `std` namespace.

## Definitions

```cpp
    #define va_arg(V, P)
    #define va_copy(VDST, VSRC)
    #define va_end(V)
    #define va_start(V, P)
```

## See also

[Header Files Reference](../standard-library/cpp-standard-library-header-files.md)<br/>
[C++ Standard Library Overview](../standard-library/cpp-standard-library-overview.md)<br/>
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)<br/>
