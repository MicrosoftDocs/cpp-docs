---
description: "Learn more about: &lt;cstdalign&gt;"
title: "&lt;cstdalign&gt;"
ms.date: "07/11/2019"
f1_keywords: ["<cstdalign>", "cstdalign", "__alignas_is_defined", "__alignof_is_defined"]
helpviewer_keywords: ["cstdalign header", "__alignas_is_defined", "__alignof_is_defined"]
ms.assetid: 9d570924-d299-4225-9a58-8c4c820f5903
---
# &lt;cstdalign&gt;

In some C++ standard library implementations, this header includes the C standard library header \<stdalign.h>, and adds the associated names to the `std` namespace. Because that header isn't implemented in MSVC, the \<cstdalign> header defines compatibility macros `__alignas_is_defined` and `__alignof_is_defined`.

> [!NOTE]
> Because the \<stdalign.h> header defines macros that are keywords in C++, including it has no effect. The \<stdalign.h> header is deprecated in C++. The \<cstdalign> header is deprecated in C++17 and removed in the draft C++20 standard.

## Requirements

**Header:** \<cstdalign>

**Namespace:** std

## Macros

| Macro | Description |
| - | - |
| `__alignas_is_defined` | A C compatibility macro that expands to the integer constant 1. |
| `__alignof_is_defined` | A C compatibility macro that expands to the integer constant 1. |

## See also

[Header files reference](cpp-standard-library-header-files.md)\
[C++ standard library overview](cpp-standard-library-overview.md)\
[Thread safety in the C++ standard library](thread-safety-in-the-cpp-standard-library.md)
