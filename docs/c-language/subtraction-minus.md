---
description: "Learn more about: Subtraction (-)"
title: "Subtraction (-)"
ms.date: "11/04/2016"
helpviewer_keywords: ["operators [C], subtraction", "subtraction operator, syntax"]
ms.assetid: 9cacba7d-20b3-4372-8a63-ba5d8ee64177
---
# Subtraction (-)

The subtraction operator (**-**) subtracts the second operand from the first. Both operands can be either integral or floating types, or one operand can be a pointer and the other an integer.

When two pointers are subtracted, the difference is converted to a signed integral value by dividing the difference by the size of a value of the type that the pointers address. The size of the integral value is defined by the type **ptrdiff_t** in the standard include file STDDEF.H. The result represents the number of memory positions of that type between the two addresses. The result is only guaranteed to be meaningful for two elements of the same array, as discussed in [Pointer Arithmetic](../c-language/pointer-arithmetic.md).

When an integer value is subtracted from a pointer value, the subtraction operator converts the integer value (*i*) by multiplying it by the size of the value that the pointer addresses. After conversion, the integer value represents *i* memory positions, where each position has the length specified by the pointer type. When the converted integer value is subtracted from the pointer value, the result is the memory address *i* positions before the original address. The new pointer points to a value of the type addressed by the original pointer value.

## See also

[C Additive Operators](../c-language/c-additive-operators.md)
