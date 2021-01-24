---
description: "Learn more about: Type float"
title: "Type float"
ms.date: "11/04/2016"
helpviewer_keywords: ["type float", "exponent length", "float keyword [C]", "mantissas, length", "floating-point numbers, float type", "ranges, floating-point types", "floating-point numbers, variables", "lengths, mantissa", "double data type, type float", "IEEE floating-point representation", "lengths, exponent"]
ms.assetid: 706e332b-17a0-4a30-b7d8-5d6cd372524b
---
# Type float

Floating-point numbers use the IEEE (Institute of Electrical and Electronics Engineers) format. Single-precision values with float type have 4 bytes, consisting of a sign bit, an 8-bit excess-127 binary exponent, and a 23-bit mantissa. The mantissa represents a number between 1.0 and 2.0. Since the high-order bit of the mantissa is always 1, it is not stored in the number. This representation gives a range of approximately 3.4E-38 to 3.4E+38 for type float.

You can declare variables as float or double, depending on the needs of your application. The principal differences between the two types are the significance they can represent, the storage they require, and their range. The following table shows the relationship between significance and storage requirements.

### Floating-Point Types

|Type|Significant digits|Number of bytes|
|----------|------------------------|---------------------|
|float|6 - 7|4|
|double|15 - 16|8|

Floating-point variables are represented by a mantissa, which contains the value of the number, and an exponent, which contains the order of magnitude of the number.

The following table shows the number of bits allocated to the mantissa and the exponent for each floating-point type. The most significant bit of any float or double is always the sign bit. If it is 1, the number is considered negative; otherwise, it is considered a positive number.

### Lengths of Exponents and Mantissas

|Type|Exponent length|Mantissa length|
|----------|---------------------|---------------------|
|float|8 bits|23 bits|
|double|11 bits|52 bits|

Because exponents are stored in an unsigned form, the exponent is biased by half its possible value. For type float, the bias is 127; for type double, it is 1023. You can compute the actual exponent value by subtracting the bias value from the exponent value.

The mantissa is stored as a binary fraction greater than or equal to 1 and less than 2. For types float and double, there is an implied leading 1 in the mantissa in the most-significant bit position, so the mantissas are actually 24 and 53 bits long, respectively, even though the most-significant bit is never stored in memory.

Instead of the storage method just described, the floating-point package can store binary floating-point numbers as denormalized numbers. "Denormalized numbers" are nonzero floating-point numbers with reserved exponent values in which the most-significant bit of the mantissa is 0. By using the denormalized format, the range of a floating-point number can be extended at the cost of precision. You cannot control whether a floating-point number is represented in normalized or denormalized form; the floating-point package determines the representation. The floating-point package never uses a denormalized form unless the exponent becomes less than the minimum that can be represented in a normalized form.

The following table shows the minimum and maximum values you can store in variables of each floating-point type. The values listed in this table apply only to normalized floating-point numbers; denormalized floating-point numbers have a smaller minimum value. Note that numbers retained in 80*x*87 registers are always represented in 80-bit normalized form; numbers can only be represented in denormalized form when stored in 32-bit or 64-bit floating-point variables (variables of type float and type long).

### Range of Floating-Point Types

|Type|Minimum value|Maximum value|
|----------|-------------------|-------------------|
|float|1.175494351 E - 38|3.402823466 E + 38|
|double|2.2250738585072014 E - 308|1.7976931348623158 E + 308|

If precision is less of a concern than storage, consider using type float for floating-point variables. Conversely, if precision is the most important criterion, use type double.

Floating-point variables can be promoted to a type of greater significance (from type float to type double). Promotion often occurs when you perform arithmetic on floating-point variables. This arithmetic is always done in as high a degree of precision as the variable with the highest degree of precision. For example, consider the following type declarations:

```
float f_short;
double f_long;
long double f_longer;

f_short = f_short * f_long;
```

In the preceding example, the variable `f_short` is promoted to type double and multiplied by `f_long`; then the result is rounded to type float before being assigned to `f_short`.

In the following example (which uses the declarations from the preceding example), the arithmetic is done in float (32-bit) precision on the variables; the result is then promoted to type double:

```
f_longer = f_short * f_short;
```

## See also

[Storage of Basic Types](../c-language/storage-of-basic-types.md)
