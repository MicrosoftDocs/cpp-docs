---
title: "Conversions from Unsigned Integral Types"
ms.date: "03/27/2019"
helpviewer_keywords: ["integers, converting", "type casts, involving integers", "data type conversion [C++], signed and unsigned integers", "type conversion [C++], signed and unsigned integers", "integral conversions, from unsigned"]
ms.assetid: 60fb7e10-bff9-4a13-8a48-e19f25a36a02
---
# Conversions from Unsigned Integral Types

When an unsigned integer is converted to an integer or floating-point type, if the original value is representable in the result type the value is unchanged.

When converting an unsigned integer to an integer of greater size, the value is zero-extended. When converting to an integer of smaller size the high-order bits are truncated. The result is interpreted using the result type, as shown in this example.

```C
unsigned k = 65533;
short j;

j = k;
printf_s( "%hd\n", j );   // Prints -3
```

When an unsigned integer is converted to a floating-point type that is the same size or smaller than the original type, if the value is not representable in the result type, the result will be either the next higher or next lower representable value.

See [Storage of Basic Types](../c-language/storage-of-basic-types.md) for information about the sizes of integral and floating-point types.

The following table summarizes conversions from unsigned integral types.

## Conversions from unsigned integral types table

|From|To|Method|
|----------|--------|------------|
|**unsigned char**|**char**|Preserve bit pattern; high-order bit becomes sign bit|
|**unsigned char**|**short**|Zero-extend|
|**unsigned char**|**long**|Zero-extend|
|**unsigned char**|**long long**|Zero-extend|
|**unsigned char**|**unsigned short**|Zero-extend|
|**unsigned char**|**unsigned long**|Zero-extend|
|**unsigned char**|**unsigned long long**|Zero-extend|
|**unsigned char**|**float**|Convert to **long**; convert **long** to **float**|
|**unsigned char**|**double**|Convert to **long**; convert **long** to **double**|
|**unsigned char**|**long double**|Convert to **long**; convert **long** to **double**|
|**unsigned short**|**char**|Preserve low-order byte|
|**unsigned short**|**short**|Preserve bit pattern; high-order bit becomes sign bit|
|**unsigned short**|**long**|Zero-extend|
|**unsigned short**|**long long**|Zero-extend|
|**unsigned short**|**unsigned char**|Preserve low-order byte|
|**unsigned short**|**unsigned long**|Zero-extend|
|**unsigned short**|**unsigned long long**|Zero-extend|
|**unsigned short**|**float**|Convert to **long**; convert **long** to **float**|
|**unsigned short**|**double**|Convert to **long**; convert **long** to **double**|
|**unsigned short**|**long double**|Convert to **long**; convert **long** to **double**|
|**unsigned long**|**char**|Preserve low-order byte|
|**unsigned long**|**short**|Preserve low-order word|
|**unsigned long**|**long**|Preserve bit pattern; high-order bit becomes sign bit|
|**unsigned long**|**long long**|Zero-extend|
|**unsigned long**|**unsigned char**|Preserve low-order byte|
|**unsigned long**|**unsigned short**|Preserve low-order word|
|**unsigned long**|**unsigned long long**|Zero-extend|
|**unsigned long**|**float**|Convert to **long**; convert **long** to **float**|
|**unsigned long**|**double**|Convert directly to **double**|
|**unsigned long**|**long double**|Convert to **long**; convert **long** to **double**|
|**unsigned long long**|**char**|Preserve low-order byte|
|**unsigned long long**|**short**|Preserve low-order word|
|**unsigned long long**|**long**|Preserve low-order dword|
|**unsigned long long**|**long long**|Preserve bit pattern; high-order bit becomes sign bit|
|**unsigned long long**|**unsigned char**|Preserve low-order byte|
|**unsigned long long**|**unsigned short**|Preserve low-order word|
|**unsigned long long**|**unsigned long**|Preserve low-order dword|
|**unsigned long long**|**float**|Convert to **long**; convert **long** to **float**|
|**unsigned long long**|**double**|Convert directly to **double**|
|**unsigned long long**|**long double**|Convert to **long**; convert **long** to **double**|

**Microsoft Specific**

For the Microsoft C compiler, the **unsigned** or **unsigned int** type is equivalent to the **unsigned long** type. Conversion of an **unsigned int** value proceeds in the same way as conversion of an **unsigned long**.

**END Microsoft Specific**

## See also

[Assignment Conversions](../c-language/assignment-conversions.md)
