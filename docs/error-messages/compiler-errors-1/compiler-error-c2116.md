---
title: "Compiler Error C2116"
description: "Learn more about: Compiler Error C2116"
ms.date: 12/02/2021
f1_keywords: ["C2116"]
helpviewer_keywords: ["C2116"]
---
# Compiler Error C2116

> function parameter lists do not match between declarations

## Remarks

The parameter list of a redeclared function doesn't match the parameter list used in an earlier declaration.

This error can occur if you use different types for the parameters when you redeclare an `extern "C"` function.

This error may occur after an upgrade because of conformance changes in Visual Studio 2019. Starting in Visual Studio 2019 version 16.3, the [`/Zc:externC-`](../../build/reference/zc-externc.md) compiler option relaxes this check. The option must come after any [`/permissive-`](../../build/reference/permissive-standards-conformance.md) option on the command line.

## See also

[Compiler Error C2733](../compiler-errors-2/compiler-error-c2733.md)\
[`extern` (C++)](../../cpp/extern-cpp.md)\
[`/Zc:externC` (Use Standard C++ `extern "C"` rules)](../../build/reference/zc-externc.md)
