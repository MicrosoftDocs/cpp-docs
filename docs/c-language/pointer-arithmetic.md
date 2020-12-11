---
description: "Learn more about: Pointer Arithmetic"
title: "Pointer Arithmetic"
ms.date: "11/04/2016"
helpviewer_keywords: ["pointer arithmetic", "arithmetic pointer"]
ms.assetid: eb924a29-59d3-48a5-9d62-9424790730eb
---
# Pointer Arithmetic

Additive operations involving a pointer and an integer give meaningful results only if the pointer operand addresses an array member and the integer value produces an offset within the bounds of the same array. When the integer value is converted to an address offset, the compiler assumes that only memory positions of the same size lie between the original address and the address plus the offset.

This assumption is valid for array members. By definition, an array is a series of values of the same type; its elements reside in contiguous memory locations. However, storage for any types except array elements is not guaranteed to be filled by the same type of identifiers. That is, blanks can appear between memory positions, even positions of the same type. Therefore, the results of adding to or subtracting from the addresses of any values but array elements are undefined.

Similarly, when two pointer values are subtracted, the conversion assumes that only values of the same type, with no blanks, lie between the addresses given by the operands.

## See also

[C Additive Operators](../c-language/c-additive-operators.md)
