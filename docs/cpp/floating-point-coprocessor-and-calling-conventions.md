---
description: "Learn more about: Floating Point Coprocessor and Calling Conventions"
title: "Floating Point Coprocessor and Calling Conventions"
ms.date: "11/04/2016"
helpviewer_keywords: ["floating-point numbers [C++]", "floating-point coprocessor"]
ms.assetid: 3cc6615a-b308-4cf7-9570-83e192a832b3
---
# Floating Point Coprocessor and Calling Conventions

If you are writing assembly routines for the floating point coprocessor, you must preserve the floating point control word and clean the coprocessor stack unless you are returning a **`float`** or **`double`** value (which your function should return in ST(0)).

## See also

[Calling Conventions](../cpp/calling-conventions.md)
