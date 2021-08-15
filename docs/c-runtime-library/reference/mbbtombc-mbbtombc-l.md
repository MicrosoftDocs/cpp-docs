---
description: "Learn more about: _mbbtombc, _mbbtombc_l"
title: "_mbbtombc, _mbbtombc_l"
ms.date: "4/2/2020"
api_name: ["_mbbtombc_l", "_mbbtombc", "_o__mbbtombc", "_o__mbbtombc_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbbtombc_l", "_mbbtombc", "mbbtombc_l", "mbbtombc"]
helpviewer_keywords: ["mbbtombc_l function", "mbbtombc function", "_mbbtombc_l function", "_mbbtombc function"]
ms.assetid: 78593389-b0fc-43b6-8c1f-2a6bf702d64e
---
# _mbbtombc, _mbbtombc_l

Converts a single-byte multibyte character to a corresponding double-byte multibyte character.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned int _mbbtombc(
   unsigned int c
);
unsigned int _mbbtombc_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Single-byte character to convert.

*locale*<br/>
Locale to use.

## Return Value

If **_mbbtombc** successfully converts *c*, it returns a multibyte character; otherwise, it returns *c*.

## Remarks

The **_mbbtombc** function converts a given single-byte multibyte character to a corresponding double-byte multibyte character. Characters must be within the range 0x20 - 0x7E or 0xA1 - 0xDF to be converted.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale, _wsetlocale](setlocale-wsetlocale.md) for more information. The versions of this function are identical, except that **_mbbtombc** uses the current locale for this locale-dependent behavior and **_mbbtombc_l** instead uses the locale parameter that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

In earlier versions, **_mbbtombc** was named **hantozen**. For new code, use **_mbbtombc**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbbtombc**|\<mbstring.h>|
|**_mbbtombc_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[_mbctombb, _mbctombb_l](mbctombb-mbctombb-l.md)<br/>
