---
description: "Learn more about: isleadbyte, _isleadbyte_l"
title: "isleadbyte, _isleadbyte_l"
ms.date: "4/2/2020"
api_name: ["_isleadbyte_l", "isleadbyte", "_o__isleadbyte_l", "_o_isleadbyte"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_istleadbyte", "_isleadbyte_l", "isleadbyte"]
helpviewer_keywords: ["lead bytes", "_isleadbyte_l function", "_istleadbyte function", "istleadbyte function", "isleadbyte function"]
ms.assetid: 3b2bcf09-d82b-4803-9e80-59d04942802a
---
# isleadbyte, _isleadbyte_l

Determines whether a character is the lead byte of a multibyte character.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int isleadbyte( int c );
int _isleadbyte_l( int c );
```

### Parameters

*c*<br/>
Integer to test.

## Return Value

**isleadbyte** returns a nonzero value if the argument satisfies the test condition or 0 if it does not. In the "C" locale and in single-byte character set (SBCS) locales, **isleadbyte** always returns 0.

## Remarks

The **isleadbyte** macro returns a nonzero value if its argument is the first byte of a multibyte character. **isleadbyte** produces a meaningful result for any integer argument from -1 (**EOF**) to **UCHAR_MAX** (0xFF), inclusive.

The expected argument type of **isleadbyte** is **`int`**; if a signed character is passed, the compiler may convert it to an integer by sign extension, yielding unpredictable results.

The version of this function with the **_l** suffix is identical except that it uses the locale passed in instead of the current locale for its locale-dependent behavior.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_istleadbyte**|Always returns false|**_isleadbyte**|Always returns false|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**isleadbyte**|\<ctype.h>|
|**_isleadbyte_l**|\<ctype.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
