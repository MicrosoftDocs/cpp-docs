---
description: "Learn more about: &lt;ccomplex&gt;"
title: "&lt;ccomplex&gt;"
ms.date: "07/11/2019"
f1_keywords: ["<ccomplex>", "ccomplex"]
helpviewer_keywords: ["ccomplex header"]
ms.assetid: a9fcb5f0-88e3-464b-a5fd-d1afb8cd7e6f
---
# &lt;ccomplex&gt;

Includes the C++ standard library header [\<complex>](complex.md).

> [!NOTE]
> The C standard library \<complex.h> header isn't included by \<ccomplex>, because it's effectively replaced by the C++ overloads in \<complex> and \<cmath>. That makes the \<ccomplex> header redundant. The \<complex.h> header is deprecated in C++. The \<ccomplex> header is deprecated in C++17 and removed in the draft C++20 standard.

## Requirements

**Header:** \<ccomplex>

**Namespace:** std

## Remarks

The name `clog`, which is declared in \<complex.h>, isn't defined in the `std` namespace because of potential conflicts with the `clog` that's declared in [\<iostream>](iostream.md).

## See also

[\<complex>](complex.md)\
[\<cmath>](cmath.md)\
[Header files reference](cpp-standard-library-header-files.md)\
[C++ standard library overview](cpp-standard-library-overview.md)\
[Thread safety in the C++ standard library](thread-safety-in-the-cpp-standard-library.md)
