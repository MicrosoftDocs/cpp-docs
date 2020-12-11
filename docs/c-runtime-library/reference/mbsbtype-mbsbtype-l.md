---
description: "Learn more about: _mbsbtype, _mbsbtype_l"
title: "_mbsbtype, _mbsbtype_l"
ms.date: "4/2/2020"
api_name: ["_mbsbtype_l", "_mbsbtype", "_o__mbsbtype", "_o__mbsbtype_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsbtype", "mbsbtype_l", "_mbsbtype_l", "_mbsbtype"]
helpviewer_keywords: ["_mbsbtype function", "mbsbtype function", "_mbsbtype_l function", "mbsbtype_l function"]
ms.assetid: 0d5dd91a-d32d-4f98-ac57-98dfc9e98eac
---
# _mbsbtype, _mbsbtype_l

Returns the type of byte within a string.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _mbsbtype(
   const unsigned char *mbstr,
   size_t count
);
int _mbsbtype_l(
   const unsigned char *mbstr,
   size_t count,
   _locale_t locale
);
```

### Parameters

*mbstr*<br/>
Address of a sequence of multibyte characters.

*count*<br/>
Byte offset from head of string.

*locale*<br/>
Locale to use.

## Return Value

**_mbsbtype** and **_mbsbtype_l** returns an integer value indicating the result of the test on the specified byte. The manifest constants in the following table are defined in Mbctype.h.

|Return value|Byte type|
|------------------|---------------|
|**_MBC_SINGLE** (0)|Single-byte character. For example, in code page 932, **_mbsbtype** returns 0 if the specified byte is within the range 0x20 - 0x7E or 0xA1 - 0xDF.|
|**_MBC_LEAD** (1)|Lead byte of multibyte character. For example, in code page 932, **_mbsbtype** returns 1 if the specified byte is within the range 0x81 - 0x9F or 0xE0 - 0xFC.|
|**_MBC_TRAIL** (2)|Trailing byte of multibyte character. For example, in code page 932, **_mbsbtype** returns 2 if the specified byte is within the range 0x40 - 0x7E or 0x80 - 0xFC.|
|**_MBC_ILLEGAL** (-1)|**NULL** string, invalid character, or null byte found before the byte at offset *count* in *mbstr*.|

## Remarks

The **_mbsbtype** function determines the type of a byte in a multibyte character string. The function examines only the byte at offset *count* in *mbstr*, ignoring invalid characters before the specified byte.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The version of this function without the **_l** suffix uses the current locale for this locale-dependent behavior; the version with the **_l** suffix is identical except that it use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

If the input string is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns **_MBC_ILLEGAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_mbsbtype**|\<mbstring.h>|\<mbctype.h>*|
|**_mbsbtype_l**|\<mbstring.h>|\<mbctype.h>*|

\* For manifest constants used as return values.

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
