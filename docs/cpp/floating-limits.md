---
description: "Learn more about: Floating Limits"
title: "Floating Limits"
ms.date: "08/03/2018"
helpviewer_keywords: ["ranges, floating-point constants", "floating-point constants, limits", "float.h header file", "limits, floating-point constants", "floating-point numbers [C++]", "floating limits"]
ms.assetid: fc718652-1f4c-4ed8-af60-0e769637459c
---
# Floating Limits

**Microsoft Specific**

The following table lists the limits on the values of floating-point constants. These limits are also defined in the standard header file \<float.h>.

## Limits on Floating-Point Constants

|Constant|Meaning|Value|
|--------------|-------------|-----------|
|`FLT_DIG`<br/>`DBL_DIG`<br/>`LDBL_DIG`|Number of digits, q,  such that a floating-point number with q decimal digits can be rounded  into a floating-point representation and back without loss of precision.|6<br/>15<br/>15|
|`FLT_EPSILON`<br/>`DBL_EPSILON`<br/>`LDBL_EPSILON`|Smallest positive number  x, such that x + 1.0 is  not equal to 1.0.|1.192092896e-07F<br/>2.2204460492503131e-016<br/>2.2204460492503131e-016|
|`FLT_GUARD`||0|
|`FLT_MANT_DIG`<br/>`DBL_MANT_DIG`<br/>`LDBL_MANT_DIG`|Number of digits in the  radix specified by `FLT_RADIX` in the  floating-point significand. The radix is 2; hence  these values specify bits.|24<br/>53<br/>53|
|`FLT_MAX`<br/>`DBL_MAX`<br/>`LDBL_MAX`|Maximum representable  floating-point number.|3.402823466e+38F<br/>1.7976931348623158e+308<br/>1.7976931348623158e+308|
|`FLT_MAX_10_EXP`<br/>`DBL_MAX_10_EXP`<br/>`LDBL_MAX_10_EXP`|Maximum integer such  that 10 raised to that number is a representable floating-point number.|38<br/>308<br/>308|
|`FLT_MAX_EXP`<br/>`DBL_MAX_EXP`<br/>`LDBL_MAX_EXP`|Maximum integer such  that `FLT_RADIX` raised  to that number is a representable floating- point number.|128<br/>1024<br/>1024|
|`FLT_MIN`<br/>`DBL_MIN`<br/>`LDBL_MIN`|Minimum positive value.|1.175494351e-38F<br/>2.2250738585072014e-308<br/>2.2250738585072014e-308|
|`FLT_MIN_10_EXP`<br/>`DBL_MIN_10_EXP`<br/>`LDBL_MIN_10_EXP`|Minimum negative integer such that 10 raised to  that number is a representable floating- point number.|-37<br/>-307<br/>-307|
|`FLT_MIN_EXP`<br/>`DBL_MIN_EXP`<br/>`LDBL_MIN_EXP`|Minimum negative integer such that `FLT_RADIX` raised to that number is  a representable floating-point number.|-125<br/>-1021<br/>-1021|
|`FLT_NORMALIZE`||0|
|`FLT_RADIX`<br/>`_DBL_RADIX`<br/>`_LDBL_RADIX`|Radix of exponent representation.|2<br/>2<br/>2|
|`FLT_ROUNDS`<br/>`_DBL_ROUNDS`<br/>`_LDBL_ROUNDS`|Rounding mode for  floating-point addition.|1 (near)<br/>1 (near)<br/>1 (near)|

> [!NOTE]
> The information in the table may differ in future versions of the product.

**END Microsoft Specific**

## See also

[Integer Limits](../cpp/integer-limits.md)
