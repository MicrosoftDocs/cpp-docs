---
description: "Learn more about: strcat, wcscat, _mbscat"
title: "strcat, wcscat, _mbscat"
ms.date: "11/04/2016"
api_name: ["_mbscat", "wcscat", "strcat"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbscat", "_ftcscat", "_tcscat", "strcat", "wcscat"]
helpviewer_keywords: ["concatenating strings", "mbscat function", "_ftcscat function", "_tcscat function", "ftcscat function", "strcat function", "strings [C++], appending", "_mbscat function", "tcscat function", "strings [C++], concatenating", "appending strings", "wcscat function"]
ms.assetid: c89c4ef1-817a-44ff-a229-fe22d06ba78a
---
# `strcat`, `wcscat`, `_mbscat`

Appends a string. More secure versions of these functions are available; see [`strcat_s`, `wcscat_s`, `_mbscat_s`](strcat-s-wcscat-s-mbscat-s.md).

> [!IMPORTANT]
> **`_mbscat_s`** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *strcat(
   char *strDestination,
   const char *strSource
);
wchar_t *wcscat(
   wchar_t *strDestination,
   const wchar_t *strSource
);
unsigned char *_mbscat(
   unsigned char *strDestination,
   const unsigned char *strSource
);
template <size_t size>
char *strcat(
   char (&strDestination)[size],
   const char *strSource
); // C++ only
template <size_t size>
wchar_t *wcscat(
   wchar_t (&strDestination)[size],
   const wchar_t *strSource
); // C++ only
template <size_t size>
unsigned char *_mbscat(
   unsigned char (&strDestination)[size],
   const unsigned char *strSource
); // C++ only
```

### Parameters

*`strDestination`*\
Null-terminated destination string.

*`strSource`*\
Null-terminated source string.

## Return value

Each of these functions returns the destination string (*`strDestination`*). No return value is reserved to indicate an error.

## Remarks

The **`strcat`** function appends *`strSource`* to *`strDestination`* and terminates the resulting string with a null character. The initial character of *`strSource`* overwrites the terminating null character of *`strDestination`*. The behavior of **`strcat`** is undefined if the source and destination strings overlap.

> [!IMPORTANT]
> Because **`strcat`** does not check for sufficient space in *`strDestination`* before appending *`strSource`*, it is a potential cause of buffer overruns. Consider using [`strncat`](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md) instead.

**`wcscat`** and **`_mbscat`** are wide-character and multibyte-character versions of **`strcat`**. The arguments and return value of **`wcscat`** are wide-character strings. The arguments and return value of **`_mbscat`** are multibyte-character strings. These three functions behave identically otherwise.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure template overloads](../secure-template-overloads.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcscat` | **`strcat`** | **`_mbscat`** | **`wcscat`** |

## Requirements

| Routine | Required header |
|---|---|
| **`strcat`** | `<string.h>` |
| **`wcscat`** | `<string.h>` or `<wchar.h>` |
| **`_mbscat`** | `<mbstring.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`strcpy`](strcpy-wcscpy-mbscpy.md).

## See also

[String manipulation](../string-manipulation-crt.md)\
[`strncat`, `_strncat_l`, `wcsncat`, `_wcsncat_l`, `_mbsncat`, `_mbsncat_l`](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)\
[`strncmp`, `wcsncmp`, `_mbsncmp`, `_mbsncmp_l`](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)\
[`strncpy`, `_strncpy_l`, `wcsncpy`, `_wcsncpy_l`, `_mbsncpy`, `_mbsncpy_l`](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)\
[`_strnicmp`, `_wcsnicmp`, `_mbsnicmp`, `_strnicmp_l`, `_wcsnicmp_l`, `_mbsnicmp_l`](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)\
[`strrchr`, `wcsrchr`, `_mbsrchr`, `_mbsrchr_l`](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)\
[`strspn`, `wcsspn`, `_mbsspn`, `_mbsspn_l`](strspn-wcsspn-mbsspn-mbsspn-l.md)
