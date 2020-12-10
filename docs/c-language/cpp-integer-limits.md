---
description: "Learn more about: C and C++ Integer Limits"
title: "C and C++ Integer Limits"
ms.date: "10/21/2019"
helpviewer_keywords: ["limits, integer", "limits, integer constants", "integer limits"]
ms.assetid: 0c23cbd6-29fb-4d9c-b689-5984e19748de
---
# C and C++ Integer Limits

**Microsoft Specific**

The limits for integer types in C and C++ are listed in the following table. These limits are defined in the C standard header file `<limits.h>`. The C++ Standard Library header `<limits>` includes `<climits>`, which includes `<limits.h>`.

Microsoft C also permits the declaration of sized integer variables, which are integral types of size 8-, 16-, 32- or 64-bits. For more information on sized integers in C, see [Sized Integer Types](../c-language/c-sized-integer-types.md).

## Limits on Integer Constants

|**Constant**|Meaning|Value|
|------------------|-------------|-----------|
|**CHAR_BIT**|Number of bits in the smallest variable that is not a bit field.|8|
|**SCHAR_MIN**|Minimum value for a variable of type **`signed char`**.|-128|
|**SCHAR_MAX**|Maximum value for a variable of type **`signed char`**.|127|
|**UCHAR_MAX**|Maximum value for a variable of type **`unsigned char`**.|255 (0xff)|
|**CHAR_MIN**|Minimum value for a variable of type **`char`**.|-128; 0 if /J option used|
|**CHAR_MAX**|Maximum value for a variable of type **`char`**.|127; 255 if /J option used|
|**MB_LEN_MAX**|Maximum number of bytes in a multicharacter constant.|5|
|**SHRT_MIN**|Minimum value for a variable of type **`short`**.|-32768|
|**SHRT_MAX**|Maximum value for a variable of type **`short`**.|32767|
|**USHRT_MAX**|Maximum value for a variable of type **`unsigned short`**.|65535 (0xffff)|
|**INT_MIN**|Minimum value for a variable of type **`int`**.|-2147483647 - 1|
|**INT_MAX**|Maximum value for a variable of type **`int`**.|2147483647|
|**UINT_MAX**|Maximum value for a variable of type **`unsigned int`**.|4294967295 (0xffffffff)|
|**LONG_MIN**|Minimum value for a variable of type **`long`**.|-2147483647 - 1|
|**LONG_MAX**|Maximum value for a variable of type **`long`**.|2147483647|
|**ULONG_MAX**|Maximum value for a variable of type **`unsigned long`**.|4294967295 (0xffffffff)|
|**LLONG_MIN**|Minimum value for a variable of type **`long long`**.|-9,223,372,036,854,775,807 - 1|
|**LLONG_MAX**|Maximum value for a variable of type **`long long`**.|9,223,372,036,854,775,807|
|**ULLONG_MAX**|Maximum value for a variable of type **`unsigned long long`**.|18,446,744,073,709,551,615 (0xffffffffffffffff)|

If a value exceeds the largest integer representation, the Microsoft compiler generates an error.

**END Microsoft Specific**

## See also

[C Integer Constants](../c-language/c-integer-constants.md)
