---
description: "Learn more about: Type double"
title: "Type double"
ms.date: "11/04/2016"
helpviewer_keywords: ["mantissas, floating-point variables", "type double", "portability [C++], type double", "double data type"]
ms.assetid: 17c85b24-1475-4d41-a03c-ddf2d6561d34
---
# Type double

Double precision values with double type have 8 bytes. The format is similar to the float format except that it has an 11-bit excess-1023 exponent and a 52-bit mantissa, plus the implied high-order 1 bit. This format gives a range of approximately 1.7E-308 to 1.7E+308 for type double.

**Microsoft Specific**

The double type contains 64 bits: 1 for sign, 11 for the exponent, and 52 for the mantissa. Its range is +/-1.7E308 with at least 15 digits of precision.

**END Microsoft Specific**

## See also

[Storage of Basic Types](../c-language/storage-of-basic-types.md)
