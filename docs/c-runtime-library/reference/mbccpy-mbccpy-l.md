---
title: "_mbccpy, _mbccpy_l | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_mbccpy", "_mbccpy_l"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_mbccpy", "tccpy", "ftccpy", "mbccpy", "_tccpy", "_ftccpy"]
dev_langs: ["C++"]
helpviewer_keywords: ["_tccpy function", "_tccpy_l function", "tccpy_l function", "tccpy function", "mbccpy function", "_mbccpy_l function", "_mbccpy function", "mbccpy_l function"]
ms.assetid: 13f4de6e-7792-41ac-b319-dd9b135433aa
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _mbccpy, _mbccpy_l

Copies a multibyte character from one string to another string. More secure versions of these functions are available; see [_mbccpy_s, _mbccpy_s_l](mbccpy-s-mbccpy-s-l.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
void _mbccpy(
   unsigned char *dest,
   const unsigned char *src
);
void _mbccpy_l(
   unsigned char *dest,
   const unsigned char *src,
   _locale_t locale
);
```

### Parameters

*dest*<br/>
Copy destination.

*src*<br/>
Multibyte character to copy.

*locale*<br/>
Locale to use.

## Remarks

The **_mbccpy** function copies one multibyte character from *src* to *dest*.

This function validates its parameters. If **_mbccpy** is passed a null pointer for *dest* or *src*, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL**.

**_mbccpy** uses the current locale for any locale-dependent behavior. **_mbccpy_l** is identical to **_mbccpy** except that **_mbccpy_l** uses the locale passed in for any locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).

**Security Note** Use a null-terminated string. The null-terminated string must not exceed the size of the destination buffer. For more information, see [Avoiding Buffer Overruns](/windows/desktop/SecBP/avoiding-buffer-overruns). Buffer overrun problems are a frequent method of system attack, resulting in an unwarranted elevation of privilege.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tccpy**|Maps to macro or inline function|**_mbccpy**|Maps to macro or inline function|
|**_tccpy_l**|n/a|**_mbccpy_l**|n/a|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbccpy**|\<mbctype.h>|
|**_mbccpy_l**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbclen, mblen, _mblen_l](mbclen-mblen-mblen-l.md)<br/>
