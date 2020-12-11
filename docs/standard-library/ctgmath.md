---
description: "Learn more about: &lt;ctgmath&gt;"
title: "&lt;ctgmath&gt;"
ms.date: "07/11/2019"
f1_keywords: ["<ctgmath>", "ctgmath"]
helpviewer_keywords: ["ctgmath header"]
ms.assetid: ff521893-f445-4dc8-a2f6-699185bb7024
---
# &lt;ctgmath&gt;

In effect, includes the C++ standard library headers \<complex> and \<cmath>, which provide type-generic math macros equivalent to \<tgmath.h>.

> [!NOTE]
> The C standard library \<tgmath.h> header isn't included by \<ctgmath>, because it's effectively replaced by the C++ overloads in \<complex> and \<cmath>. That makes the \<ctgmath> header redundant. The \<tgmath.h> header is deprecated in C++. The \<ctgmath> header is deprecated in C++17 and removed in the draft C++20 standard.

## Requirements

**Header:** \<ctgmath>

**Namespace:** std

## Remarks

The functionality of the C standard library header \<tgmath.h> is provided by the overloads in \<complex> and \<cmath>.

## See also

[\<complex>](complex.md)\
[\<cmath>](cmath.md)\
[Header files reference](cpp-standard-library-header-files.md)\
[C++ standard library overview](cpp-standard-library-overview.md)\
[Thread safety in the C++ standard library](thread-safety-in-the-cpp-standard-library.md)
