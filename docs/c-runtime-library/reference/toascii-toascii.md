---
description: "Learn more about: toascii, __toascii"
title: "toascii, __toascii"
ms.date: "11/04/2016"
api_name: ["__toascii"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["__toascii", "toascii", "ctype/toascii", "ctype/__toascii"]
helpviewer_keywords: ["toascii function", "string conversion, to ASCII characters", "__toascii function", "ASCII characters, converting to"]
ms.assetid: a07c0608-b0e2-4da2-a20c-7b64d6a9b77c
---
# toascii, __toascii

Converts characters to 7-bit ASCII by truncation.

## Syntax

```C
int __toascii(
   int c
);
#define toascii __toascii
```

### Parameters

*c*<br/>
Character to convert.

## Return Value

**__toascii** converts the value of *c* to the 7-bit ASCII range and returns the result. There is no return value reserved to indicate an error.

## Remarks

The **__toascii** routine converts the given character to an ASCII character by truncating it to the low-order 7 bits. No other transformation is applied.

The **__toascii** routine is defined as a macro unless the preprocessor macro _CTYPE_DISABLE_MACROS is defined. For backward compatibility, **toascii** is defined as a macro only when [&#95;&#95;STDC&#95;&#95;](../../preprocessor/predefined-macros.md) is not defined or is defined as 0; otherwise it is undefined.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**toascii**, **__toascii**|C: \<ctype.h><br /><br /> C++: \<cctype> or \<ctype.h>|

The **toascii** macro is a POSIX extension, and **__toascii** is a Microsoft-specific implementation of the POSIX extension. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
[to Functions](../../c-runtime-library/to-functions.md)<br/>
