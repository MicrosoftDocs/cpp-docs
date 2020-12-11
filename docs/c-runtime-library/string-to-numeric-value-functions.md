---
description: "Learn more about: String to Numeric Value Functions"
title: "String to Numeric Value Functions"
ms.date: "11/04/2016"
api_location: ["msvcr80.dll", "msvcr110.dll", "msvcr120.dll", "msvcr100.dll", "msvcr110_clr0400.dll", "msvcr90.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tcstoui64", "_tcstoi64"]
helpviewer_keywords: ["parsing, numeric strings", "string conversion, to numeric values"]
ms.assetid: 11cbd9ce-033b-4914-bf66-029070e7e385
---
# String to Numeric Value Functions

- [strtod, _strtod_l, wcstod, _wcstod_l](../c-runtime-library/reference/strtod-strtod-l-wcstod-wcstod-l.md)

- [strtol, wcstol, _strtol_l, _wcstol_l](../c-runtime-library/reference/strtol-wcstol-strtol-l-wcstol-l.md)

- [strtoul, _strtoul_l, wcstoul, _wcstoul_l](../c-runtime-library/reference/strtoul-strtoul-l-wcstoul-wcstoul-l.md)

- [_strtoi64, _wcstoi64, _strtoi64_l, _wcstoi64_l](../c-runtime-library/reference/strtoi64-wcstoi64-strtoi64-l-wcstoi64-l.md)

- [_strtoui64, _wcstoui64, _strtoui64_l, _wcstoui64_l](../c-runtime-library/reference/strtoui64-wcstoui64-strtoui64-l-wcstoui64-l.md)

## Remarks

Each function in the **strtod** family converts a null-terminated string to a numeric value. The available functions are listed in the following table.

|Function|Description|
|--------------|-----------------|
|`strtod`|Convert string to double-precision floating point value|
|`strtol`|Convert string to long integer|
|`strtoul`|Convert string to unsigned long integer|
|`_strtoi64`|Convert string to 64-bit **`__int64`** integer|
|`_strtoui64`|Convert string to unsigned 64-bit **`__int64`** integer|

`wcstod`, `wcstol`, `wcstoul`, and `_wcstoi64` are wide-character versions of `strtod`, `strtol`, `strtoul`, and `_strtoi64`, respectively. The string argument to each of these wide-character functions is a wide-character string; each function behaves identically to its single-byte-character counterpart otherwise.

The `strtod` function takes two arguments: the first is the input string, and the second a pointer to the character which ends the conversion process. `strtol`, `strtoul`, **_strtoi64** and **_strtoui64** take a third argument as the number base to use in the conversion process.

The input string is a sequence of characters that can be interpreted as a numerical value of the specified type. Each function stops reading the string at the first character it cannot recognize as part of a number. This may be the terminating null character. For `strtol`, `strtoul`, `_strtoi64`, and `_strtoui64`, this terminating character can also be the first numeric character greater than or equal to the user-supplied number base.

If the user-supplied pointer to an end-of-conversion character is not set to **NULL** at call time, a pointer to the character that stopped the scan will be stored there instead. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of the string pointer is stored at that address.

`strtod` expects a string of the following form:

[*whitespace*] [*sign*] [`digits`] [**.**`digits`] [ {**d** &#124; **D** &#124; **e** &#124; **E**}[*sign*]`digits`]

A *whitespace* may consist of space or tab characters, which are ignored; *sign* is either plus (**+**) or minus (**-**); and `digits` are one or more decimal digits. If no digits appear before the radix character, at least one must appear after the radix character. The decimal digits can be followed by an exponent, which consists of an introductory letter (**d**, **D**, **e**, or **E**) and an optionally signed integer. If neither an exponent part nor a radix character appears, a radix character is assumed to follow the last digit in the string. The first character that does not fit this form stops the scan.

The `strtol`, `strtoul`, `_strtoi64`, and `_strtoui64` functions expect a string of the following form:

[*whitespace*] [{**+** &#124; **-**}] [**0** [{ **x** &#124; **X** }]] [`digits`]

If the base argument is between 2 and 36, then it is used as the base of the number. If it is 0, the initial characters referenced to by the end-of-conversion pointer are used to determine the base. If the first character is 0 and the second character is not 'x' or 'X', the string is interpreted as an octal integer; otherwise, it is interpreted as a decimal number. If the first character is '0' and the second character is 'x' or 'X', the string is interpreted as a hexadecimal integer. If the first character is '1' through '9', the string is interpreted as a decimal integer. The letters 'a' through 'z' (or 'A' through 'Z') are assigned the values 10 through 35; only letters whose assigned values are less than *base* are permitted. `strtoul` and `_strtoui64` allow a plus (**+**) or minus (**-**) sign prefix; a leading minus sign indicates that the return value is negated.

The output value is affected by the setting of the `LC_NUMERIC` category setting of the locale; see [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead.

When the value returned by these functions would cause an overflow or underflow, or when conversion is not possible, special case values are returned as shown:

|Function|Condition|Value returned|
|--------------|---------------|--------------------|
|`strtod`|Overflow|+/- `HUGE_VAL`|
|`strtod`|Underflow or no conversion|0|
|`strtol`|+ Overflow|**LONG_MAX**|
|`strtol`|- Overflow|**LONG_MIN**|
|`strtol`|Underflow or no conversion|0|
|`_strtoi64`|+ Overflow|**_I64_MAX**|
|`_strtoi64`|- Overflow|**_I64_MIN**|
|`_strtoi64`|No conversion|0|
|`_strtoui64`|Overflow|**_UI64_MAX**|
|`_strtoui64`|No conversion|0|

**_I64_MAX**, _**I64_MIN**, and **_UI64_MAX** are defined in LIMITS.H.

`wcstod`, `wcstol`, `wcstoul`, `_wcstoi64`, and `_wcstoui64` are wide-character versions of `strtod`, `strtol`, `strtoul`, `_strtoi64`, and `_strtoui64`, respectively; the pointer to an end-of-conversion argument to each of these wide-character functions is a wide-character string. Otherwise, each of these wide-character functions behaves identically to its single-byte-character counterpart.

## See also

[Data Conversion](../c-runtime-library/data-conversion.md)<br/>
[Locale](../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Floating-Point Support](../c-runtime-library/floating-point-support.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](../c-runtime-library/reference/atof-atof-l-wtof-wtof-l.md)
