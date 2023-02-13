---
description: "Learn more about: _strspnp, _wcsspnp, _mbsspnp, _mbsspnp_l"
title: "_strspnp, _wcsspnp, _mbsspnp, _mbsspnp_l"
ms.date: "4/2/2020"
api_name: ["_mbsspnp", "_wcsspnp", "_mbsspnp_l", "_strspnp", "_o__mbsspnp", "_o__mbsspnp_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tcsspnp", "_mbsspnp", "strspnp", "_ftcsspnp", "_mbsspnp_l", "wcsspnp", "mbsspnp_l", "_wcsspnp", "_strspnp", "mbsspnp"]
helpviewer_keywords: ["_strspnp function", "_wcsspnp function", "_mbsspnp_l function", "strspnp function", "mbsspnp function", "wcsspnp function", "_mbsspnp function", "mbsspnp_l function", "_tcsspnp function", "tcsspnp function"]
ms.assetid: 1ce18100-2edd-4c3b-af8b-53f204d80233
---
# `_strspnp`, `_wcsspnp`, `_mbsspnp`, `_mbsspnp_l`

Returns a pointer to the first character in a given string that isn't in another given string.

> [!IMPORTANT]
> **`_mbsspnp`** and **`_mbsspnp_l`** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *_strspnp(
   const char *str,
   const char *charset
);
wchar_t *_wcsspnp(
   const unsigned wchar_t *str,
   const unsigned wchar_t *charset
);
unsigned char *_mbsspnp(
   const unsigned char *str,
   const unsigned char *charset
);
unsigned char *_mbsspnp_l(
   const unsigned char *str,
   const unsigned char *charset,
   _locale_t locale
);
```

### Parameters

*`str`*\
Null-terminated string to search.

*`charset`*\
Null-terminated character set.

*`locale`*\
Locale to use.

## Return value

**`_strspnp`**, **`_wcsspnp`**, and **`_mbsspnp`** return a pointer to the first character in *`str`* that doesn't belong to the set of characters in *`charset`*. Each of these functions returns `NULL` if *`str`* consists entirely of characters from *`charset`*. For each of these routines, no return value is reserved to indicate an error.

## Remarks

The **`_mbsspnp`** function returns a pointer to the multibyte character that is the first character in *`str`* that doesn't belong to the set of characters in *`charset`*. **`_mbsspnp`** recognizes multibyte-character sequences according to the [multibyte code page](../code-pages.md) currently in use. The search doesn't include terminating null characters.

If either *`str`* or *`charset`* is a null pointer, this function invokes the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the function returns `NULL` and sets `errno` to `EINVAL`.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tcsspnp` | **`_strspnp`** | **`_mbsspnp`** | **`_wcsspnp`** |

**`_strspnp`** and **`_wcsspnp`** are single-byte character and wide-character versions of **`_mbsspnp`**. **`_strspnp`** and **`_wcsspnp`** behave identically to **`_mbsspnp`** otherwise; they're provided only for this mapping and shouldn't be used for any other reason. For more information, see [Using generic-text mappings](../using-generic-text-mappings.md) and [Generic-text mappings](../generic-text-mappings.md).

**`_mbsspnp_l`** is identical except that it uses the locale parameter passed in instead. For more information, see [Locale](../locale.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_mbsspnp`** | \<mbstring.h> |
| **`_strspnp`** | \<tchar.h> |
| **`_wcsspnp`** | \<tchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_mbsspnp.c
#include <mbstring.h>
#include <stdio.h>

int main( void ) {
   const unsigned char string1[] = "cabbage";
   const unsigned char string2[] = "c";
   unsigned char *ptr = 0;
   ptr = _mbsspnp( string1, string2 );
   printf( "%s\n", ptr);
}
```

### Output

```Output
abbage
```

## See also

[String manipulation](../string-manipulation-crt.md)\
[Locale](../locale.md)\
[Interpretation of multibyte-character sequences](../interpretation-of-multibyte-character-sequences.md)\
[`strspn`, `wcsspn`, `_mbsspn`, `_mbsspn_l`](strspn-wcsspn-mbsspn-mbsspn-l.md)\
[`strncat_s`, `_strncat_s_l`, `wcsncat_s`, `_wcsncat_s_l`, `_mbsncat_s`, `_mbsncat_s_l`](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)\
[`strncmp`, `wcsncmp`, `_mbsncmp`, `_mbsncmp_l`](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)\
[`strncpy_s`, `_strncpy_s_l`, `wcsncpy_s`, `_wcsncpy_s_l`, `_mbsncpy_s`, `_mbsncpy_s_l`](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)\
[`_strnicmp`, `_wcsnicmp`, `_mbsnicmp`, `_strnicmp_l`, `_wcsnicmp_l`, `_mbsnicmp_l`](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)\
[`strrchr`, `wcsrchr`, `_mbsrchr`, `_mbsrchr_l`](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)
