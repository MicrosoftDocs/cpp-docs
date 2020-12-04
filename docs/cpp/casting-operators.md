---
description: "Learn more about: Casting Operators"
title: "Casting Operators"
ms.custom: "index-page"
ms.date: "11/04/2016"
helpviewer_keywords: ["operators [C++], casting", "casting operators [C++]"]
ms.assetid: 16240348-26bc-4f77-8eab-57253f00ce52
---
# Casting Operators

There are several casting operators specific to the C++ language. These operators are intended to remove some of the ambiguity and danger inherent in old style C language casts. These operators are:

- [dynamic_cast](../cpp/dynamic-cast-operator.md) Used for conversion of polymorphic types.

- [static_cast](../cpp/static-cast-operator.md) Used for conversion of nonpolymorphic types.

- [const_cast](../cpp/const-cast-operator.md) Used to remove the **`const`**, **`volatile`**, and **`__unaligned`** attributes.

- [reinterpret_cast](../cpp/reinterpret-cast-operator.md) Used for simple reinterpretation of bits.

- [safe_cast](../extensions/safe-cast-cpp-component-extensions.md) Used in C++/CLI to produce verifiable MSIL.

Use **`const_cast`** and **`reinterpret_cast`** as a last resort, since these operators present the same dangers as old style casts. However, they are still necessary in order to completely replace old style casts.

## See also

[Casting](../cpp/casting.md)
