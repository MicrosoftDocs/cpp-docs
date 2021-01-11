---
description: "Learn more about: Data Type Constants"
title: "Data Type Constants"
ms.date: "06/25/2018"
f1_keywords: ["FLT_MIN", "SHRT_MAX", "CHAR_MIN", "MB_LEN_MAX", "DBL_EPSILON", "SHRT_MIN", "_FLT_RADIX", "FLT_DIG", "FLT_MAX_10_EXP", "FLT_MANT_DIG", "DBL_MAX_EXP", "SCHAR_MIN", "SCHAR_MAX", "DBL_MIN", "FLT_MIN_10_EXP", "_DBL_ROUNDS", "USHRT_MAX", "FLT_MAX_EXP", "LONG_MAX", "DBL_MAX", "DBL_DIG", "FLT_MIN_EXP", "INT_MIN", "DBL_MIN_10_EXP", "CHAR_BIT", "INT_MAX", "ULONG_MAX", "DBL_MIN_EXP", "LONG_MIN", "_FLT_ROUNDS", "DBL_MANT_DIG", "_DBL_RADIX", "CHAR_MAX", "FLT_MAX", "DBL_MAX_10_EXP", "UCHAR_MAX", "FLT_EPSILON", "UINT_MAX", "LLONG_MIN", "LLONG_MAX", "ULLONG_MAX", "_I8_MIN", "_I8_MAX", "_UI8_MAX", "_I16_MIN", "_I16_MAX", "_UI16_MAX", "_I32_MIN", "_I32_MAX", "_UI32_MAX", "_I64_MIN", "_I64_MAX", "_UI64_MAX", "_I128_MIN", "_I128_MAX", "_UI128_MAX", "SIZE_MAX", "RSIZE_MAX", "LDBL_DIG", "LDBL_EPSILON", "LDBL_HAS_SUBNORM", "LDBL_MANT_DIG", "LDBL_MAX", "LDBL_MAX_10_EXP", "LDBL_MAX_EXP", "LDBL_MIN", "LDBL_MIN_10_EXP", "LDBL_MIN_EXP", "_LDBL_RADIX", "LDBL_TRUE_MIN", "DECIMAL_DIG"]
helpviewer_keywords: ["DBL_MAX_EXP constant", "_DBL_RADIX constant", "FLT_MIN_EXP constant", "DBL_EPSILON constant", "INT_MIN constant", "FLT_EPSILON constant", "DBL_MANT_DIG constant", "_FLT_RADIX constant", "DBL_MIN constant", "USHRT_MAX constant", "FLT_MAX_10_EXP constant", "_FLT_ROUNDS constant", "data type constants [C++]", "_DBL_ROUNDS constant", "CHAR_MAX constant", "FLT_MAX_EXP constant", "FLT_MIN constant", "CHAR_MIN constant", "FLT_MIN_10_EXP constant", "DBL_MIN_EXP constant", "SCHAR_MAX constant", "FLT_RADIX constant", "CHAR_BIT constant", "UCHAR_MAX constant", "DBL_RADIX constant", "FLT_ROUNDS constant", "LONG_MIN constant", "SHRT_MAX constant", "LONG_MAX constant", "DBL_MAX_10_EXP constant", "DBL_MIN_10_EXP constant", "INT_MAX constant", "constants [C++], data type", "ULONG_MAX constant", "FLT_DIG constant", "MB_LEN_MAX constant", "DBL_DIG constant", "SHRT_MIN constant", "DBL_MAX constant", "DBL_ROUNDS constant", "FLT_MAX constant", "UINT_MAX constant", "FLT_MANT_DIG constant", "SCHAR_MIN constant", "LLONG_MIN constant", "LLONG_MAX constant", "ULLONG_MAX constant", "_I8_MIN constant", "_I8_MAX constant", "_UI8_MAX constant", "_I16_MIN constant", "_I16_MAX constant", "_UI16_MAX constant", "_I32_MIN constant", "_I32_MAX constant", "_UI32_MAX constant", "_I64_MIN constant", "_I64_MAX constant", "_UI64_MAX constant", "_I128_MIN constant", "_I128_MAX constant", "_UI128_MAX constant", "SIZE_MAX constant", "RSIZE_MAX constant"]
ms.assetid: c0f1c405-0465-41d5-b5ff-e81cdb6f1622
---
# Data Type Constants

Data type constants are implementation-dependent ranges of values allowed for integral and floating-point data types.

## Integral type constants

These constants give the ranges for the integral data types. To use these constants, include the limits.h header in your source file:

```C
#include <limits.h>
```

> [!NOTE]
> The [`/J`](../build/reference/j-default-char-type-is-unsigned.md) compiler option changes the default **`char`** type from **`signed char`** to **`unsigned char`**.

|Constant|Value|Description|
|--------------|-----------|-------------|
|**CHAR_BIT**|8|Number of bits in a **`char`**|
|**SCHAR_MIN**|(-128)|Minimum **`signed char`** value|
|**SCHAR_MAX**|127|Maximum **`signed char`** value|
|**UCHAR_MAX**|255 (0xff)|Maximum **`unsigned char`** value|
|**CHAR_MIN**|(-128) (0 if **`/J`** option used)|Minimum **`char`** value|
|**CHAR_MAX**|127 (255 if **`/J`** option used)|Maximum **`char`** value|
|**MB_LEN_MAX**|5|Maximum number of bytes in multibyte **`char`**|
|**SHRT_MIN**|-32768|Minimum **`signed short`** value|
|**SHRT_MAX**|32767|Maximum **`signed short`** value|
|**USHRT_MAX**|65535 (0xffff)|Maximum **`unsigned short`** value|
|**INT_MIN**|(-2147483647 - 1)|Minimum **`signed int`** value|
|**INT_MAX**|2147483647|Maximum **`signed int`** value|
|**UINT_MAX**|4294967295 (0xffffffff)|Maximum **`unsigned int`** value|
|**LONG_MIN**|(-2147483647L - 1)|Minimum **`signed long`** value|
|**LONG_MAX**|2147483647L|Maximum **`signed long`** value|
|**ULONG_MAX**|4294967295UL (0xfffffffful)|Maximum **`unsigned long`** value|
|**LLONG_MIN**|(-9223372036854775807LL - 1)|Minimum **`signed long long`** or **`__int64`** value|
|**LLONG_MAX**|9223372036854775807LL|Maximum **`signed long long`** or **`__int64`** value|
|**ULLONG_MAX**|0xffffffffffffffffull|Maximum **`unsigned long long`** value|
|**_I8_MIN**|(-127i8 - 1)|Minimum signed 8-bit value|
|**_I8_MAX**|127i8|Maximum signed 8-bit value|
|**_UI8_MAX**|0xffui8|Maximum unsigned 8-bit value|
|**_I16_MIN**|(-32767i16 - 1)|Minimum signed 16-bit value|
|**_I16_MAX**|32767i16|Maximum signed 16-bit value|
|**_UI16_MAX**|0xffffui16|Maximum unsigned 16-bit value|
|**_I32_MIN**|(-2147483647i32 - 1)|Minimum signed 32-bit value|
|**_I32_MAX**|2147483647i32|Maximum signed 32-bit value|
|**_UI32_MAX**|0xffffffffui32|Maximum unsigned 32-bit value|
|**_I64_MIN**|(-9223372036854775807 - 1)|Minimum signed 64-bit value|
|**_I64_MAX**|9223372036854775807|Maximum signed 64-bit value|
|**_UI64_MAX**|0xffffffffffffffffui64|Maximum unsigned 64-bit value|
|**_I128_MIN**|(-170141183460469231731687303715884105727i128 - 1)|Minimum signed 128-bit value|
|**_I128_MAX**|170141183460469231731687303715884105727i128|Maximum signed 128-bit value|
|**_UI128_MAX**|0xffffffffffffffffffffffffffffffffui128|Maximum unsigned 128-bit value|
|**SIZE_MAX**|same as **_UI64_MAX** if **_WIN64** is defined, or **UINT_MAX**|Maximum native integer size|
|**RSIZE_MAX**|same as (**SIZE_MAX** >> 1)|Maximum secure library integer size|

## Floating-point type constants

The following constants give the range and other characteristics of the **`long double`**, **`double`** and **`float`** data types. To use these constants, include the float.h header in your source file:

```C
#include <float.h>
```

|Constant|Value|Description|
|--------------|-----------|-----------------|
|**DBL_DECIMAL_DIG**|17|# of decimal digits of rounding precision|
|**DBL_DIG**|15|# of decimal digits of precision|
|**DBL_EPSILON**|2.2204460492503131e-016|Smallest such that 1.0 + **DBL_EPSILON** != 1.0|
|**DBL_HAS_SUBNORM**|1|Type supports subnormal (denormal) numbers|
|**DBL_MANT_DIG**|53|# of bits in significand (mantissa)|
|**DBL_MAX**|1.7976931348623158e+308|Maximum value|
|**DBL_MAX_10_EXP**|308|Maximum decimal exponent|
|**DBL_MAX_EXP**|1024|Maximum binary exponent|
|**DBL_MIN**|2.2250738585072014e-308|Minimum normalized positive value|
|**DBL_MIN_10_EXP**|(-307)|Minimum decimal exponent|
|**DBL_MIN_EXP**|(-1021)|Minimum binary exponent|
|**_DBL_RADIX**|2|Exponent radix|
|**DBL_TRUE_MIN**|4.9406564584124654e-324|Minimum positive subnormal value|
|**FLT_DECIMAL_DIG**|9|Number of decimal digits of rounding precision|
|**FLT_DIG**|6|Number of decimal digits of precision|
|**FLT_EPSILON**|1.192092896e-07F|Smallest such that 1.0 + **FLT_EPSILON** != 1.0|
|**FLT_HAS_SUBNORM**|1|Type supports subnormal (denormal) numbers|
|**FLT_MANT_DIG**|24|Number of bits in significand (mantissa)|
|**FLT_MAX**|3.402823466e+38F|Maximum value|
|**FLT_MAX_10_EXP**|38|Maximum decimal exponent|
|**FLT_MAX_EXP**|128|Maximum binary exponent|
|**FLT_MIN**|1.175494351e-38F|Minimum normalized positive value|
|**FLT_MIN_10_EXP**|(-37)|Minimum decimal exponent|
|**FLT_MIN_EXP**|(-125)|Minimum binary exponent|
|**FLT_RADIX**|2|Exponent radix|
|**FLT_TRUE_MIN**|1.401298464e-45F|Minimum positive subnormal value|
|**LDBL_DIG**|15|# of decimal digits of precision|
|**LDBL_EPSILON**|2.2204460492503131e-016|Smallest such that 1.0 + **LDBL_EPSILON** != 1.0|
|**LDBL_HAS_SUBNORM**|1|Type supports subnormal (denormal) numbers|
|**LDBL_MANT_DIG**|53|# of bits in significand (mantissa)|
|**LDBL_MAX**|1.7976931348623158e+308|Maximum value|
|**LDBL_MAX_10_EXP**|308|Maximum decimal exponent|
|**LDBL_MAX_EXP**|1024|Maximum binary exponent|
|**LDBL_MIN**|2.2250738585072014e-308|Minimum normalized positive value|
|**LDBL_MIN_10_EXP**|(-307)|Minimum decimal exponent|
|**LDBL_MIN_EXP**|(-1021)|Minimum binary exponent|
|**_LDBL_RADIX**|2|Exponent radix|
|**LDBL_TRUE_MIN**|4.9406564584124654e-324|Minimum positive subnormal value|
|**DECIMAL_DIG**|same as **DBL_DECIMAL_DIG**|Default (double) decimal digits of rounding precision|

## See also

[Global Constants](../c-runtime-library/global-constants.md)
