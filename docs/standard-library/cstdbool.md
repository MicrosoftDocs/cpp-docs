---
description: "Learn more about: &lt;cstdbool&gt;"
title: "&lt;cstdbool&gt;"
ms.date: "07/11/2019"
f1_keywords: ["<cstdbool>", "cstdbool"]
helpviewer_keywords: ["cstdbool header"]
ms.assetid: 44ccb8b2-d808-4715-8097-58ba09ab33ed
---
# &lt;cstdbool&gt;

Includes the C standard library header \<stdbool.h> and adds the associated names to the `std` namespace.

> [!NOTE]
> Because the \<stdbool.h> header defines macros that are keywords in C++, including it has no effect. The \<stdbool.h> header is deprecated in C++. The \<cstdbool> header is deprecated in C++17 and removed in the draft C++20 standard.

## Requirements

**Header:** \<cstdbool>

**Namespace:** std

## Remarks

Including this header ensures that the names declared using external linkage in the C standard library header are declared in the `std` namespace.

## See also

[Header files reference](cpp-standard-library-header-files.md)\
[C++ standard library overview](cpp-standard-library-overview.md)\
[Thread safety in the C++ standard library](thread-safety-in-the-cpp-standard-library.md)
