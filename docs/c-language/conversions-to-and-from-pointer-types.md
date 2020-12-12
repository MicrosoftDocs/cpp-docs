---
description: "Learn more about: Conversions to and from Pointer Types"
title: "Conversions to and from Pointer Types"
ms.date: "11/04/2016"
helpviewer_keywords: ["pointers, converting", "conversions, pointer", "type casts, involving pointers", "void pointers"]
ms.assetid: 3facc56f-06d3-4570-b1a2-7d4927b83086
---
# Conversions to and from Pointer Types

A pointer to one type of value can be converted to a pointer to a different type. However, the result may be undefined because of the alignment requirements and sizes of different types in storage. A pointer to an object can be converted to a pointer to an object whose type requires less or equally strict storage alignment, and back again without change.

A pointer to **`void`** can be converted to or from a pointer to any type, without restriction or loss of information. If the result is converted back to the original type, the original pointer is recovered.

If a pointer is converted to another pointer with the same type but having different or additional qualifiers, the new pointer is the same as the old except for restrictions imposed by the new qualifier.

A pointer value can also be converted to an integral value. The conversion path depends on the size of the pointer and the size of the integral type, according to the following rules:

- If the size of the pointer is greater than or equal to the size of the integral type, the pointer behaves like an unsigned value in the conversion, except that it cannot be converted to a floating value.

- If the pointer is smaller than the integral type, the pointer is first converted to a pointer with the same size as the integral type, then converted to the integral type.

Conversely, an integral type can be converted to a pointer type according to the following rules:

- If the integral type is the same size as the pointer type, the conversion simply causes the integral value to be treated as a pointer (an unsigned integer).

- If the size of the integral type is different from the size of the pointer type, the integral type is first converted to the size of the pointer, using the conversion paths given in the tables [Conversion from Signed Integral Types](../c-language/conversions-from-signed-integral-types.md) and [Conversion from Unsigned Integral Types](../c-language/conversions-from-unsigned-integral-types.md). It is then treated as a pointer value.

An integral constant expression with value 0 or such an expression cast to type **`void`** <strong>\*</strong> can be converted by a type cast, by assignment, or by comparison to a pointer of any type. This produces a null pointer that is equal to another null pointer of the same type, but this null pointer is not equal to any pointer to a function or to an object. Integers other than the constant 0 can be converted to pointer type, but the result is not portable.

## See also

[Assignment Conversions](../c-language/assignment-conversions.md)
