---
title: "_mbctombb, _mbctombb_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_mbctombb_l", "_mbctombb"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_mbctombb_l", "_mbctombb", "mbctombb_l", "mbctombb"]
dev_langs: ["C++"]
helpviewer_keywords: ["_mbctombb function", "mbctombb_l function", "mbctombb function", "_mbctombb_l function"]
ms.assetid: d90970b8-71ff-4586-b6a2-f9ceb811f776
caps.latest.revision: 17
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _mbctombb, _mbctombb_l

Converts a double-byte multibyte character to a corresponding single-byte multibyte character.

> [!IMPORTANT]
>  This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned int _mbctombb(
   unsigned int c
);
unsigned int _mbctombb_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Multibyte character to convert.

*locale*<br/>
Locale to use.

## Return Value

If successful, `_mbctombb` and `_mbctombb_l` returns the single-byte character that corresponds to *c*; otherwise it returns *c*.

## Remarks

The `_mbctombb` and `_mbctombb_l` functions convert a given multibyte character to a corresponding single-byte multibyte character. Characters must correspond to single-byte characters within the range 0x20 - 0x7E or 0xA1 - 0xDF to be converted.

The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The version of this function without the **_l** suffix uses the current locale for this locale-dependent behavior; the version with the **_l** suffix is identical except that it use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

In previous versions, `_mbctombb` was called `zentohan`. Use `_mbctombb` instead.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_mbctombb`|\<mbstring.h>|
|`_mbctombb_l`|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[_mbbtombc, _mbbtombc_l](mbbtombc-mbbtombc-l.md)<br/>
[_mbcjistojms, _mbcjistojms_l, _mbcjmstojis, _mbcjmstojis_l](mbcjistojms-mbcjistojms-l-mbcjmstojis-mbcjmstojis-l.md)<br/>
[_mbctohira, _mbctohira_l, _mbctokata, _mbctokata_l](mbctohira-mbctohira-l-mbctokata-mbctokata-l.md)<br/>
[_mbctolower, _mbctolower_l, _mbctoupper, _mbctoupper_l](mbctolower-mbctolower-l-mbctoupper-mbctoupper-l.md)<br/>
