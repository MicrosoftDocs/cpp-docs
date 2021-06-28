---
description: "Learn more about: <cstdalign>"
title: "<cstdalign>"
ms.date: "6/28/2021"
f1_keywords: ["<cstdalign>", "__alignas_is_defined", "__alignof_is_defined"]
helpviewer_keywords: ["cstdalign header", "__alignas_is_defined", "__alignof_is_defined"]
---
# `<cstdalign>`

In some C++ standard library implementations, this header includes the C standard library header `<stdalign.h>`, and adds the associated names to the `std` namespace. Because that header isn't implemented in MSVC, the `<cstdalign>` header defines compatibility macros `__alignas_is_defined` and `__alignof_is_defined`.

> [!NOTE]
> Because the `<stdalign.h>` header defines macros that are keywords in C++, including it has no effect. The `<stdalign.h>` header is deprecated in C++. The `<cstdalign>` header is deprecated in C++17 and removed in the draft C++20 standard.

## Requirements

**Header:** `<cstdalign>`

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
