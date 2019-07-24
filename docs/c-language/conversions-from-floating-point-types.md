---
title: "Conversions from Floating-Point Types"
ms.date: "01/29/2018"
helpviewer_keywords: ["converting floating point", "floating-point conversion"]
ms.assetid: 96804c8e-fa3b-4742-9006-0082ed9e57f2
---
# Conversions from floating-point types

A **float** value converted to a **double** or **long double**, or a **double** converted to a **long double**, undergoes no change in value. The range of representable **double** or **long double** values is larger than for **float**, and when converting from the former to the latter if the value cannot be represented, the behavior is undefined. Otherwise if the result cannot be represented exactly, the value is rounded. See [Limits on Floating-Point Constants](../c-language/limits-on-floating-point-constants.md) for the range of floating-point types.

A floating-point value that is converted to an integral value is first truncated by discarding any fractional value. If the truncated value can be represented in the result type the result must be that value. If it cannot, the result value is undefined.

**Microsoft Specific**

Note that the Microsoft C compiler maps **long double** to type **double** and **int** to **long**.

When converting a **double** or **long double** floating-point number to a **float**, the result is rounded according to the floating-point environment controls, which default to "round to nearest, ties to even". If the value cannot be represented in the result type, the result will be positive or negative infinity according to the sign of the original value, and an overflow exception will be raised if enabled.

When converting to integer types, the result of a conversion to a type smaller than **long** is the result of converting the value to **long** and then converting to the result type. For other types, a conversion of a value that is too high or too low to represent in the result type may return any the following values:

*	The result may be a signal value equivalent to the representable value that is farthest from zero. For signed types this is the lowest representable value. For unsigned types this is the highest representable value.
*	The result may be saturated so that too high values are converted to the highest representable value and too low values are converted to the lowest representable value. (Note that one of these values is equivalent to the signal value.)
*	The result of converting of an out of range value to an **unsigned long** or **unsigned long long** may be some other value, depending on compiler options and target architecture. Future compiler releases may return a saturated or signal value instead.

**END Microsoft Specific**

The following table summarizes conversions from floating types.

## Conversions from floating-point types

|From|To|Method|
|----------|--------|------------|
|**float**|**char**|Convert to **long**; convert **long** to **char**|
|**float**|**short**|Convert to **long**; convert **long** to **short**|
|**float**|**long**|Truncate at decimal point. If result is too high or too low to be represented as **long**, result is undefined.|
|**float**|**long long**|Truncate at decimal point. If result is too high or too low to be represented as **long long**, result is undefined.|
|**float**|**unsigned char**|Convert to **long**; convert **long** to **unsigned char**|
|**float**|**unsigned short**|Convert to **long**; convert **long** to **unsigned short**|
|**float**|**unsigned long**|Truncate at decimal point; if result is too high or too low to be represented as **unsigned long**, result is undefined|
|**float**|**unsigned long long**|Truncate at decimal point; if result is too high or too low to be represented as **unsigned long long**, result is undefined|
|**float**|**double**|Change internal representation|
|**float**|**long double**|Change internal representation|
|**double**|**char**|Convert to **long**; convert **long** to **char**|
|**double**|**short**|Convert to **long**; convert **long** to **short**|
|**double**|**long**|Truncate at decimal point. If result is too high or too low to be represented as **long**, result is undefined.|
|**double**|**long long**|Truncate at decimal point. If result is too high or too low to be represented as **long long**, result is undefined.|
|**double**|**unsigned char**|Convert to **long**; convert **long** to **unsigned char**|
|**double**|**unsigned short**|Convert to **long**; convert **long** to **unsigned short**|
|**double**|**unsigned long**|Truncate at decimal point; if result is too high or too low to be represented as **unsigned long**, result is undefined.|
|**double**|**unsigned long long**|Truncate at decimal point; if result is too high or too low to be represented as **unsigned long long**, result is undefined.|
|**double**|**float**|Represent as a **float**. If **double** value cannot be represented exactly as **float**, loss of precision occurs. If value is too high or too low to be represented as **float**, the result is positive or negative infinity, respectively.|
|**double**|**long double**|The **double** value is treated as a **long double**|
|**long double**|**char**|Convert to **float**; convert **float** to **char**|
|**long double**|**short**|Convert to **float**; convert **float** to **short**|
|**long double**|**long**|Truncate at decimal point. If result is too high or too low to be represented as **long**, result is undefined.|
|**long double**|**long long**|Truncate at decimal point. If result is too high or too low to be represented as **long long**, result is undefined.|
|**long double**|**unsigned char**|Convert to **long**; convert **long** to **unsigned char**|
|**long double**|**unsigned short**|Convert to **long**; convert **long** to **unsigned short**|
|**long double**|**unsigned long**|Truncate at decimal point; if result is too high or too low to be represented as **unsigned long**, result is undefined.|
|**long double**|**unsigned long long**|Truncate at decimal point; if result is too high or too low to be represented as **unsigned long long**, result is undefined.
|**long double**|**float**|Represent as a **float**. If **double** value cannot be represented exactly as **float**, loss of precision occurs. If value is too high or too low to be represented as **float**, the result is positive or negative infinity, respectively.|
|**long double**|**double**|The **long double** value is treated as **double**.|

## See also

[Assignment Conversions](../c-language/assignment-conversions.md)
