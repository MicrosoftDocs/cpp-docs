---
description: "Learn more about: &lt;ciso646&gt;"
title: "&lt;ciso646&gt;"
ms.date: "07/11/2019"
f1_keywords: ["<ciso646>", "ciso646"]
helpviewer_keywords: ["ciso646 header"]
ms.assetid: 9d570924-d299-4225-9a58-8c4c820f5903
---
# &lt;ciso646&gt;

Includes the C standard library header \<iso646.h>, and adds the associated names to the `std` namespace.

> [!NOTE]
> Because this compatibility header defines names that are keywords in C++, including it has no effect. The \<iso646.h> header is deprecated in C++. The \<ciso646> header is removed in the draft C++20 standard.

## Requirements

**Header:** \<ciso646>

**Namespace:** std

## Remarks

Including this header ensures that the names declared using external linkage in the C standard library header are declared in the `std` namespace.

## See also

[Header files reference](cpp-standard-library-header-files.md)\
[C++ standard library overview](cpp-standard-library-overview.md)\
[Thread safety in the C++ standard library](thread-safety-in-the-cpp-standard-library.md)
