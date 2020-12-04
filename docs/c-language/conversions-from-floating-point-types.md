---
description: "Learn more about: Conversions from floating-point types"
title: "Conversions from floating-point types"
ms.date: "10/02/2019"
helpviewer_keywords: ["converting floating point", "floating-point conversion"]
ms.assetid: 96804c8e-fa3b-4742-9006-0082ed9e57f2
---
# Conversions from floating-point types

A floating-point value that's converted to another floating-point type undergoes no change in value if the original value is representable exactly in the result type. If the original value is numeric but isn't representable exactly, the result is either the next greater or next lower representable value. See [Limits on floating-point constants](../c-language/limits-on-floating-point-constants.md) for the range of floating-point types.

A floating-point value that is converted to an integral type is first truncated by discarding any fractional value. If this truncated value is representable in the result type, the result must be that value. When it isn't representable, the result value is undefined.

**Microsoft Specific**

Microsoft compilers use IEEE-754 binary32 representation for **`float`** values, and binary64 representation for **`long double`** and **`double`**. Since **`long double`** and **`double`** use the same representation, they have the same range and precision.

When the compiler converts a **`double`** or **`long double`** floating-point number to a **`float`**, it rounds the result according to the floating-point environment controls, which default to "round to nearest, ties to even." If a numeric value is too high or too low to be represented as a numeric **`float`** value, the conversion result is positive or negative infinity according to the sign of the original value, and an overflow exception is raised, if enabled.

When converting to integer types, the result of a conversion to a type smaller than **`long`** is the result of converting the value to **`long`**, and then converting to the result type.

For conversion to integer types at least as large as **`long`**, a conversion of a value that is too high or too low to represent in the result type may return any of the following values:

- The result may be a *sentinel value*, which is the representable value farthest from zero. For signed types, it's the lowest representable value (0x800...0). For unsigned types, it's the highest representable value (0xFF...F).

- The result may be *saturated*, where values too high to represent are converted to the highest representable value, and values too low to represent are converted to the lowest representable value. One of these two values is also used as the sentinel value.

- For conversion to **`unsigned long`** or **`unsigned long long`**, the result of converting an out-of-range value may be some value other than the highest or lowest representable value. Whether the result is a sentinel or saturated value or not depends on the compiler options and target architecture. Future compiler releases may return a saturated or sentinel value instead.

**END Microsoft Specific**

The following table summarizes conversions from floating types.

## Table of conversions from floating-point types

|From|To|Method|
|----------|--------|------------|
|**`float`**|**`char`**|Convert to **`long`**; convert **`long`** to **`char`**|
|**`float`**|**`short`**|Convert to **`long`**; convert **`long`** to **`short`**|
|**`float`**|**`int`**|Truncate at decimal point. If result is too large to be represented as **`int`**, result is undefined.|
|**`float`**|**`long`**|Truncate at decimal point. If result is too large to be represented as **`long`**, result is undefined.|
|**`float`**|**`long long`**|Truncate at decimal point. If result is too large to be represented as **`long long`**, result is undefined.|
|**`float`**|**`unsigned char`**|Convert to **`long`**; convert **`long`** to **`unsigned char`**|
|**`float`**|**`unsigned short`**|Convert to **`long`**; convert **`long`** to **`unsigned short`**|
|**`float`**|**`unsigned`**|Truncate at decimal point. If result is too large to be represented as **`unsigned`**, result is undefined.|
|**`float`**|**`unsigned long`**|Truncate at decimal point. If result is too large to be represented as **`unsigned long`**, result is undefined.|
|**`float`**|**`unsigned long long`**|Truncate at decimal point. If result is too large to be represented as **`unsigned long long`**, result is undefined.|
|**`float`**|**`double`**|Represent as a **`double`**.|
|**`float`**|**`long double`**|Represent as a **`long double`**.|
|**`double`**|**`char`**|Convert to **`float`**; convert **`float`** to **`char`**|
|**`double`**|**`short`**|Convert to **`float`**; convert **`float`** to **`short`**|
|**`double`**|**`int`**|Truncate at decimal point. If result is too large to be represented as **`int`**, result is undefined.|
|**`double`**|**`long`**|Truncate at decimal point. If result is too large to be represented as **`long`**, result is undefined.|
|**`double`**|**`unsigned char`**|Convert to **`long`**; convert **`long`** to **`unsigned char`**|
|**`double`**|**`unsigned short`**|Convert to **`long`**; convert **`long`** to **`unsigned short`**|
|**`double`**|**`unsigned`**|Truncate at decimal point. If result is too large to be represented as **`unsigned`**, result is undefined.|
|**`double`**|**`unsigned long`**|Truncate at decimal point. If result is too large to be represented as **`unsigned long`**, result is undefined.|
|**`double`**|**`unsigned long long`**|Truncate at decimal point. If result is too large to be represented as **`unsigned long long`**, result is undefined.|
|**`double`**|**`float`**|Represent as a **`float`**. If **`double`** value can't be represented exactly as **`float`**, loss of precision occurs. If value is too large to be represented as **`float`**, the result is undefined.|
|**`double`**|**`long double`**|The **`long double`** value is treated as **`double`**.|

Conversions from **`long double`** follow the same method as conversions from **`double`**.

## See also

[Assignment conversions](../c-language/assignment-conversions.md)
