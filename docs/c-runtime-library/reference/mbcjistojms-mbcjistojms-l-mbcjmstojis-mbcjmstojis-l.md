---
description: "Learn more about: _mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l"
title: "_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l"
ms.date: "4/2/2020"
api_name: ["_mbcjistojms", "_mbcjmstojis", "_mbcjistojms_l", "_mbcjmstojis_l", "_o__mbcjistojms", "_o__mbcjistojms_l", "_o__mbcjmstojis", "_o__mbcjmstojis_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbcjistojms", "_mbcjistojms", "_mbcjistojms_l", "_mbcjmstojis_l", "_mbcjmstojis", "mbcjmstojis_l", "mbcjistojms_l", "mbcjmstojis"]
helpviewer_keywords: ["_mbcjmstojis_l function", "_mbcjistojms function", "mbcjmstojis function", "_mbcjistojms_l function", "_mbcjmstojis function", "mbcjistojms function", "mbcjmstojis_l function", "mbcjistojms_l function"]
ms.assetid: dece5127-b337-40a4-aa10-53320a2c9432
---
# _mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l

Converts between Japan Industry Standard (JIS) and Japan Microsoft (JMS) characters.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned int _mbcjistojms(
   unsigned int c
);
unsigned int _mbcjistojms_l(
   unsigned int c,
   _locale_t locale
);
unsigned int _mbcjmstojis(
   unsigned int c
);
unsigned int _mbcjmstojis_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Character to convert.

*locale*<br/>
Locale to use.

## Return Value

On Japanese locale, these functions return a converted character or return 0 if no conversion is possible. On a non-Japanese locale, these functions return the character passed in.

## Remarks

The **_mbcjistojms** function converts a Japan Industry Standard (JIS) character to a Microsoft Kanji (Shift JIS) character. The character is converted only if the lead and trail bytes are in the range 0x21 - 0x7E. If the lead or trial byte is outside this range, **errno** is set to **EILSEQ**. For more information about this and other error codes, see [errno, _doserrno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

The **_mbcjmstojis** function converts a Shift JIS character to a JIS character. The character is converted only if the lead byte is in the range 0x81 - 0x9F or 0xE0 - 0xFC and the trail byte is in the range 0x40 - 0x7E or 0x80 - 0xFC. Note that some code points in that range do not have a character assigned and so cannot be converted.

The value *c* should be a 16-bit value whose upper 8 bits represent the lead byte of the character to convert and whose lower 8 bits represent the trail byte.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

In earlier versions, **_mbcjistojms** and **_mbcjmstojis** were called **jistojms** and **jmstojis**, respectively. **_mbcjistojms**, **_mbcjistojms_l**, **_mbcjmstojis** and **_mbcjmstojis_l** should be used instead.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbcjistojms**|\<mbstring.h>|
|**_mbcjistojms_l**|\<mbstring.h>|
|**_mbcjmstojis**|\<mbstring.h>|
|**_mbcjmstojis_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
