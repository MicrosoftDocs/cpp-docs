---
title: "_ismbbblank, _ismbbblank_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_ismbbblank_l", "_ismbbblank"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
apitype: "DLLExport"
dev_langs: ["C++"]
ms.assetid: d21b2e41-7206-41f5-85bb-9c9ab4f3e21b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _ismbbblank, _ismbbblank_l

Determines whether a specified multibyte character is a blank character.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _ismbbblank(
   unsigned int c
);
int _ismbbblank_l(
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*c*<br/>
Integer to be tested.

*locale*<br/>
Locale to use.

## Return Value

**_ismbbblank** returns a nonzero value if *c* represents a space (0x20) character, a horizontal tab (0x09) character, or a locale-specific character that's used to separate words within a line of text for which **isspace** is true; otherwise, returns 0. **_ismbbblank** uses the current locale for any locale-dependent behavior. **_ismbbblank_l** is identical except that it instead uses the locale that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_ismbbblank**|\<mbctype.h>|
|**_ismbbblank_l**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Byte Classification](../../c-runtime-library/byte-classification.md)<br/>
[_ismbb Routines](../../c-runtime-library/ismbb-routines.md)<br/>
