---
description: "Learn more about: strcat_s, wcscat_s, _mbscat_s, _mbscat_s_l"
title: "strcat_s, wcscat_s, _mbscat_s, _mbscat_s_l"
ms.date: "4/2/2020"
api_name: ["strcat_s", "_mbscat_s", "_mbscat_s_l", "wcscat_s", "_o__mbscat_s", "_o__mbscat_s_l", "_o_strcat_s", "_o_wcscat_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["strcat_s", "wcscat_s", "_mbscat_s", "_mbscat_s_l"]
helpviewer_keywords: ["wcscat_s function", "strcat_s function", "mbscat_s function", "strings [C++], appending", "_mbscat_s function", "_mbscat_s_l function", "appending strings"]
ms.assetid: 0f2f9901-c5c5-480b-98bc-f8f690792fc0
---
# `strcat_s`, `wcscat_s`, `_mbscat_s`, `_mbscat_s_l`

Appends a string. These versions of [`strcat`, `wcscat`, `_mbscat`](strcat-wcscat-mbscat.md) have security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

> [!IMPORTANT]
> **`_mbscat_s`** and **`_mbscat_s_l`** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t strcat_s(
   char *strDestination,
   size_t numberOfElements,
   const char *strSource
);
errno_t wcscat_s(
   wchar_t *strDestination,
   size_t numberOfElements,
   const wchar_t *strSource
);
errno_t _mbscat_s(
   unsigned char *strDestination,
   size_t numberOfElements,
   const unsigned char *strSource
);
errno_t _mbscat_s_l(
   unsigned char *strDestination,
   size_t numberOfElements,
   const unsigned char *strSource,
   _locale_t locale
);
template <size_t size>
errno_t strcat_s(
   char (&strDestination)[size],
   const char *strSource
); // C++ only
template <size_t size>
errno_t wcscat_s(
   wchar_t (&strDestination)[size],
   const wchar_t *strSource
); // C++ only
template <size_t size>
errno_t _mbscat_s(
   unsigned char (&strDestination)[size],
   const unsigned char *strSource
); // C++ only
template <size_t size>
errno_t _mbscat_s_l(
   unsigned char (&strDestination)[size],
   const unsigned char *strSource,
   _locale_t locale
); // C++ only
```

### Parameters

*`strDestination`*\
Null-terminated destination string buffer.

*`numberOfElements`*\
Size of the destination string buffer.

*`strSource`*\
Null-terminated source string buffer.

*`locale`*\
Locale to use.

## Return value

Zero if successful; an error code on failure.

### Error conditions

| *`strDestination`* | *`numberOfElements`* | *`strSource`* | Return value | Contents of *`strDestination`* |
|---|---|---|---|---|
| `NULL` or unterminated | any | any | `EINVAL` | not modified |
| any | any | `NULL` | `EINVAL` | *`strDestination[0]`* set to 0 |
| any | 0, or too small | any | `ERANGE` | *`strDestination[0]`* set to 0 |

## Remarks

The **`strcat_s`** function appends *`strSource`* to *`strDestination`* and terminates the resulting string with a null character. The initial character of *`strSource`* overwrites the terminating null character of *`strDestination`*. The behavior of **`strcat_s`** is undefined if the source and destination strings overlap.

The second parameter is the total size of the buffer, not the remaining size:

```C
char buf[16];
strcpy_s(buf, 16, "Start");
strcat_s(buf, 16, " End");               // Correct
strcat_s(buf, 16 - strlen(buf), " End"); // Incorrect
```

**`wcscat_s`** and **`_mbscat_s`** are wide-character and multibyte-character versions of **`strcat_s`**. The arguments and return value of **`wcscat_s`** are wide-character strings. The arguments and return value of **`_mbscat_s`** are multibyte-character strings. These three functions behave identically otherwise.

If *`strDestination`* is a null pointer, or isn't null-terminated, or if *`strSource`* is a `NULL` pointer, or if the destination string is too small, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return `EINVAL` and set `errno` to `EINVAL`.

The versions of functions that have the **`_l`** suffix have the same behavior, but use the locale parameter that's passed in instead of the current locale. For more information, see [Locale](../locale.md).

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure template overloads](../secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [`_CrtSetDebugFillThreshold`](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcscat_s` | **`strcat_s`** | **`_mbscat_s`** | **`wcscat_s`** |

## Requirements

| Routine | Required header |
|---|---|
| **`strcat_s`** | `<string.h>` |
| **`wcscat_s`** | `<string.h>` or `<wchar.h>` |
| **`_mbscat_s`** | `<mbstring.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the code example in [`strcpy_s`, `wcscpy_s`, `_mbscpy_s`](strcpy-s-wcscpy-s-mbscpy-s.md).

## See also

[String manipulation](../string-manipulation-crt.md)\
[`strncat`, `_strncat_l`, `wcsncat`, `_wcsncat_l`, `_mbsncat`, `_mbsncat_l`](strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md)\
[`strncmp`, `wcsncmp`, `_mbsncmp`, `_mbsncmp_l`](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)\
[`strncpy`, `_strncpy_l`, `wcsncpy`, `_wcsncpy_l`, `_mbsncpy`, `_mbsncpy_l`](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)\
[`_strnicmp`, `_wcsnicmp`, `_mbsnicmp`, `_strnicmp_l`, `_wcsnicmp_l`, `_mbsnicmp_l`](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)\
[`strrchr`, `wcsrchr`, `_mbsrchr`, `_mbsrchr_l`](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)\
[`strspn`, `wcsspn`, `_mbsspn`, `_mbsspn_l`](strspn-wcsspn-mbsspn-mbsspn-l.md)
