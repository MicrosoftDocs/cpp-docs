---
description: "Learn more about: _setmbcp"
title: "_setmbcp"
ms.date: "4/2/2020"
api_name: ["_setmbcp", "_o__setmbcp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-locale-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_setmbcp", "setmbcp"]
helpviewer_keywords: ["setmbcp function", "_setmbcp function", "multibyte code pages"]
ms.assetid: cfde53b5-0b73-4684-81b1-a8d3aafc85de
---
# `_setmbcp`

Sets a new multibyte code page.

## Syntax

```C
int _setmbcp(
   int codepage
);
```

### Parameters

*`codepage`*\
New code page setting for locale-independent multibyte routines.

## Return value

Returns 0 if the code page is set successfully. If an invalid code page value is supplied for *`codepage`*, returns -1 and the code page setting is unchanged. Sets `errno` to `EINVAL` if a memory allocation failure occurs.

## Remarks

The **`_setmbcp`** function specifies a new multibyte code page. By default, the run-time system automatically sets the multibyte code page to the system-default ANSI code page. The multibyte code page setting affects all multibyte routines that aren't locale dependent. However, it's possible to instruct **`_setmbcp`** to use the code page defined for the current locale (see the following list of manifest constants and associated behavior results). For a list of the multibyte routines that are dependent on the locale code page rather than the multibyte code page, see [Interpretation of multibyte-character sequences](../interpretation-of-multibyte-character-sequences.md).

The *`codepage`* argument can be set to any of the following values:

- `_MB_CP_ANSI` Use ANSI code page obtained from operating system at program startup.

- `_MB_CP_LOCALE` Use the current locale's code page obtained from a previous call to [`setlocale`](setlocale-wsetlocale.md).

- `_MB_CP_OEM` Use OEM code page obtained from operating system at program startup.

- `_MB_CP_SBCS` Use single-byte code page. When the code page is set to `_MB_CP_SBCS`, a routine such as [`_ismbblead`](ismbblead-ismbblead-l.md) always returns false.

- `_MB_CP_UTF8` Use UTF-8.  When the code page is set to `_MB_CP_UTF8`, a routine such as [`_ismbblead`](ismbblead-ismbblead-l.md) always returns false.

- Any other valid code page value, regardless of whether the value is an ANSI, OEM, or other operating-system-supported code page (except UTF-7, which isn't supported).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_setmbcp`** | \<mbctype.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[`_getmbcp`](getmbcp.md)\
[`setlocale`, `_wsetlocale`](setlocale-wsetlocale.md)
