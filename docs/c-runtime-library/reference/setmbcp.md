---
title: "_setmbcp"
ms.date: "11/04/2016"
api_name: ["_setmbcp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-locale-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_setmbcp", "setmbcp"]
helpviewer_keywords: ["setmbcp function", "_setmbcp function", "multibyte code pages"]
ms.assetid: cfde53b5-0b73-4684-81b1-a8d3aafc85de
---
# _setmbcp

Sets a new multibyte code page.

## Syntax

```C
int _setmbcp(
   int codepage
);
```

### Parameters

*codepage*<br/>
New code page setting for locale-independent multibyte routines.

## Return Value

Returns 0 if the code page is set successfully. If an invalid code page value is supplied for *codepage*, returns -1 and the code page setting is unchanged. Sets **errno** to **EINVAL** if a memory allocation failure occurs.

## Remarks

The **_setmbcp** function specifies a new multibyte code page. By default, the run-time system automatically sets the multibyte code page to the system-default ANSI code page. The multibyte code page setting affects all multibyte routines that are not locale dependent. However, it is possible to instruct **_setmbcp** to use the code page defined for the current locale (see the following list of manifest constants and associated behavior results). For a list of the multibyte routines that are dependent on the locale code page rather than the multibyte code page, see [Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md).

The multibyte code page also affects multibyte-character processing by the following run-time library routines:

||||
|-|-|-|
|[_exec functions](../../c-runtime-library/exec-wexec-functions.md)|[_mktemp](mktemp-wmktemp.md)|[_stat](stat-functions.md)|
|[_fullpath](fullpath-wfullpath.md)|[_spawn functions](../../c-runtime-library/spawn-wspawn-functions.md)|[_tempnam](tempnam-wtempnam-tmpnam-wtmpnam.md)|
|[_makepath](makepath-wmakepath.md)|[_splitpath](splitpath-wsplitpath.md)|[tmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)|

In addition, all run-time library routines that receive multibyte-character *argv* or *envp* program arguments as parameters (such as the **_exec** and **_spawn** families) process these strings according to the multibyte code page. Therefore, these routines are also affected by a call to **_setmbcp** that changes the multibyte code page.

The *codepage* argument can be set to any of the following values:

- **_MB_CP_ANSI** Use ANSI code page obtained from operating system at program startup.

- **_MB_CP_LOCALE** Use the current locale's code page obtained from a previous call to [setlocale](setlocale-wsetlocale.md).

- **_MB_CP_OEM** Use OEM code page obtained from operating system at program startup.

- **_MB_CP_SBCS** Use single-byte code page. When the code page is set to **_MB_CP_SBCS**, a routine such as [_ismbblead](ismbblead-ismbblead-l.md) always returns false.

- Any other valid code page value, regardless of whether the value is an ANSI, OEM, or other operating-system-supported code page (except UTF-7 and UTF-8, which are not supported).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_setmbcp**|\<mbctype.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[_getmbcp](getmbcp.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
