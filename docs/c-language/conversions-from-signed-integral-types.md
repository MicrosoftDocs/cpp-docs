---
title: "Conversions from Signed Integral Types"
ms.date: "11/04/2016"
helpviewer_keywords: ["integral conversions, from signed", "integers, converting", "conversions [C++], integral", "data type conversion [C++], signed and unsigned integers", "type conversion [C++], signed and unsigned integers"]
ms.assetid: 5eea32f8-8b14-413d-acac-c063b3d118d7
---
# Conversions from Signed Integral Types

When a signed integer is converted to an integer or floating-point type, if the original value is representable in the result type the value is unchanged.

When converting a signed integer to an integer of greater size, the value is sign-extended. When converting to an integer of smaller size the high-order bits are truncated. The result is interpreted using the result type, as shown in this example.

```C
int i = -3;
unsigned short u;

u = i;
printf_s( "%hu\n", u );  // Prints 65533
```

When a signed integer is converted to a floating-point type that is the same size or smaller than the original type, if the value is not representable in the result type, the result will be either the next higher or next lower representable value.

See [Storage of Basic Types](../c-language/storage-of-basic-types.md) for information about the sizes of integral and floating-point types.

The following table summarizes conversions from signed integral types. This table assumes that the **char** type is signed by default. If you use a compile-time option to change the default for the **char** type to unsigned, the conversions given in the [Conversions from Unsigned Integral Types](../c-language/conversions-from-unsigned-integral-types.md) table for the **unsigned char** type apply instead of the conversions in the following table.

### Conversions from Signed Integral Types

|From|To|Method|
|----------|--------|------------|
|**char**1|**short**|Sign-extend|
|**char**|**long**|Sign-extend|
|**char**|**long long**|Sign-extend|
|**char**|**unsigned char**|Preserve pattern; high-order bit loses function as sign bit|
|**char**|**unsigned short**|Sign-extend to **short**; convert **short** to **unsigned short**|
|**char**|**unsigned long**|Sign-extend to **long**; convert **long** to **unsigned long**|
|**char**|**unsigned long long**|Sign-extend to **long long**; convert **long long** to **unsigned long long**|
|**char**|**float**|Sign-extend to **long**; convert **long** to **float**|
|**char**|**double**|Sign-extend to **long**; convert **long** to **double**|
|**char**|**long double**|Sign-extend to **long**; convert **long** to **double**|
|**short**|**char**|Preserve low-order byte|
|**short**|**long**|Sign-extend|
|**short**|**long long**|Sign-extend|
|**short**|**unsigned char**|Preserve low-order byte|
|**short**|**unsigned short**|Preserve bit pattern; high-order bit loses function as sign bit|
|**short**|**unsigned long**|Sign-extend to **long**; convert **long** to **unsigned long**|
|**short**|**unsigned long long**|Sign-extend to **long long**; convert **long long** to **unsigned long long**|
|**short**|**float**|Sign-extend to **long**; convert **long** to **float**|
|**short**|**double**|Sign-extend to **long**; convert **long** to **double**|
|**short**|**long double**|Sign-extend to **long**; convert **long** to **double**|
|**long**|**char**|Preserve low-order byte|
|**long**|**short**|Preserve low-order word|
|**long**|**long long**|Sign-extend|
|**long**|**unsigned char**|Preserve low-order byte|
|**long**|**unsigned short**|Preserve low-order word|
|**long**|**unsigned long**|Preserve bit pattern; high-order bit loses function as sign bit|
|**long**|**unsigned long long**|Sign-extend to **long long**; convert **long long** to **unsigned long long**|
|**long**|**float**|Represent as **float**. If **long** cannot be represented exactly, some precision is lost.|
|**long**|**double**|Represent as **double**. If **long** cannot be represented exactly as a **double**, some precision is lost.|
|**long**|**long double**|Represent as **double**. If **long** cannot be represented exactly as a **double**, some precision is lost.|
|**long long**|**char**|Preserve low-order byte|
|**long long**|**short**|Preserve low-order word|
|**long long**|**long**|Preserve low-order dword|
|**long long**|**unsigned char**|Preserve low-order byte|
|**long long**|**unsigned short**|Preserve low-order word|
|**long long**|**unsigned long**|Preserve low-order dword|
|**long long**|**unsigned long long**|Preserve bit pattern; high-order bit loses function as sign bit|
|**long long**|**float**|Represent as **float**. If **long long** cannot be represented exactly, some precision is lost.|
|**long long**|**double**|Represent as **double**. If **long long** cannot be represented exactly as a **double**, some precision is lost.|
|**long long**|**long double**|Represent as **double**. If **long long** cannot be represented exactly as a **double**, some precision is lost.|

1. All **char** entries assume that the **char** type is signed by default.

**Microsoft Specific**

For the Microsoft 32-bit C compiler, an **int** is equivalent to a **long**. Conversion of an **int** value proceeds the same as for a **long**. Similarly, **unsigned** or **unsigned int** is equivalent to **unsigned long**.

**END Microsoft Specific**

## See also

[Assignment Conversions](../c-language/assignment-conversions.md)
