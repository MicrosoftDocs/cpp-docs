---
description: "Learn more about the /Zc:cmath (Enable libc math) compiler option."
title: "/Zc:cmath (Enable libc math)"
ms.date: 08/28/2026
f1_keywords: ["/Zc:cmath"]
author: Codiferous
ms.author: codym
helpviewer_keywords: ["-Zc:cmath compiler option (C++)", "/Zc:cmath compiler option (C++)"]
---
# `/Zc:cmath` (Enable libc math)

The **`/Zc:cmath`** compiler option replaces the runtime implementation of math functions in the `<math.h>` C runtime header and `<cmath>` C++ standard library header with [LLVM's libc](https://libc.llvm.org/). This implementation provides correctly rounded results in all rounding modes.

You need this option for compile-time evaluation of the C++ standard library math functions that become `constexpr` in C++23 or later.

This option is experimental.

## Syntax

> **`/Zc:cmath`**

## Remarks

You need the **`/Zc:cmath`** option, along with `/std:c++23`, for compile-time evaluation of the math functions that become `constexpr` in C++23 by [proposal P0533R9: `constexpr` for `<cmath>` and `<cstdlib>`](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2021/p0533r9.pdf) and [LWG Issue 3834: Missing constexpr for `std::intmax_t` math functions in `<cinttypes>`](https://cplusplus.github.io/LWG/issue3834).

The **`/Zc:cmath`** option is available starting in MSVC Build Tools version 14.52. It's off by default.

Enabling this option might affect the performance and accuracy of math functions declared in `<math.h>` and `<cmath>`.

When you use **`/Zc:cmath`**, the C++ toolset automatically links against `libvcmath-mt.lib` or `libvcmath-md.lib` when you call math functions from a standard library header. These libraries are statically linked into the resulting binary.

> [!NOTE]
> System include directives use angle brackets, so `#include <math.h>` is recognized but `#include "math.h"` isn't.

This option replaces system include directives that include `<math.h>` and `<stdlib.h>` with directives that include standard library replacement headers. The option affects `<cmath>` and `<cstdlib>` because they include `<math.h>` and `<stdlib.h>`. The replacement headers differ from their corresponding UCRT headers in the following ways:

- Math function definitions are `noexcept`, which conflicts with declarations that aren't `noexcept`. See [C2382](../../error-messages/compiler-errors-1/compiler-error-c2382.md). Potential fixes are to remove unnecessary forward declarations or to add `noexcept` to forward declarations.

- Functions and macro definitions that aren't part of the C++ standard aren't provided. This exclusion includes the [Math Constants](../../c-runtime-library/math-constants.md), such as `M_PI`. The `<numbers>` standard library header provides conformant definitions of corresponding variables. To continue using these math constants, directly include `<corecrt_math_defines.h>`. `_USE_MATH_DEFINES` has no effect when you use `/Zc:cmath`.


## Background

By default, the Universal C Runtime (UCRT) implements the math functions declared in `<math.h>` and `<cmath>`. Windows maintains and deploys the UCRT, so math function results can vary by Windows version.

When you enable **`/Zc:cmath`**, LLVM's libc implements these math functions in statically linked libraries named `libvcmath-mt.lib` and `libvcmath-md.lib`. The C++ build tools deploy these libraries, not the Windows operating system. Because these functions return correctly rounded results, their results are stable across operating system versions and hardware architectures.

### To set this compiler option in Visual Studio

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
2. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.
3. Add **`/Zc:cmath`** to the **Additional Options:** pane.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
[`/std` (Specify language standard version)](std-specify-language-standard-version.md)\
[Math Constants](../../c-runtime-library/math-constants.md)
