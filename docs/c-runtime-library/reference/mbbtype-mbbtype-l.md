---
description: "Learn more about: _mbbtype, _mbbtype_l"
title: "_mbbtype, _mbbtype_l"
ms.date: "4/2/2020"
api_name: ["_mbbtype", "_mbbtype_l", "_o__mbbtype", "_o__mbbtype_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbbtype_l", "mbbtype", "mbbtype_l", "_mbbtype"]
helpviewer_keywords: ["_mbbtype function", "_mbbtype_l function", "mbbtype function", "mbbtype_l function"]
ms.assetid: b8e34b40-842a-4298-aa39-0bd2d8e51c2a
---
# _mbbtype, _mbbtype_l

Returns the byte type, based on the previous byte.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _mbbtype(
   unsigned char c,
   int type
);
int _mbbtype_l(
   unsigned char c,
   int type,
   _locale_t locale
);
```

### Parameters

*c*<br/>
The character to test.

*type*<br/>
The type of byte to test for.

*locale*<br/>
The locale to use.

## Return Value

**_mbbtype** returns the type of byte in a string. This decision is context-sensitive, as specified by the value of *type*, which provides the control test condition. *type* is the type of the previous byte in the string. The manifest constants in the following table are defined in Mbctype.h.

|Value of *type*|**_mbbtype** tests for|Return value|*c*|
|---------------------|--------------------------|------------------|---------|
|Any value except 1|Valid single byte or lead byte|**_MBC_SINGLE** (0)|Single byte (0x20 - 0x7E, 0xA1 - 0xDF)|
|Any value except 1|Valid single byte or lead byte|**_MBC_LEAD** (1)|Lead byte of multibyte character (0x81 - 0x9F, 0xE0 - 0xFC)|
|Any value except 1|Valid single-byte or lead byte|**_MBC_ILLEGAL**<br /><br /> ( -1)|Invalid character (any value except 0x20 - 0x7E, 0xA1 - 0xDF, 0x81 - 0x9F, 0xE0 - 0xFC|
|1|Valid trail byte|**_MBC_TRAIL** (2)|Trailing byte of multibyte character (0x40 - 0x7E, 0x80 - 0xFC)|
|1|Valid trail byte|**_MBC_ILLEGAL**<br /><br /> ( -1)|Invalid character (any value except 0x20 - 0x7E, 0xA1 - 0xDF, 0x81 - 0x9F, 0xE0 - 0xFC|

## Remarks

The **_mbbtype** function determines the type of a byte in a multibyte character. If the value of *type* is any value except 1, **_mbbtype** tests for a valid single-byte or lead byte of a multibyte character. If the value of *type* is 1, **_mbbtype** tests for a valid trail byte of a multibyte character.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale, _wsetlocale](setlocale-wsetlocale.md) for more information. The **_mbbtype** version of this function uses the current locale for this locale-dependent behavior; the **_mbbtype_l** version is identical except that it use the locale parameter that's passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

In earlier versions, **_mbbtype** was named **chkctype**. For new code, use **_mbbtype** instead.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_mbbtype**|\<mbstring.h>|\<mbctype.h>*|
|**_mbbtype_l**|\<mbstring.h>|\<mbctype.h>*|

\* For definitions of manifest constants that are used as return values.

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
