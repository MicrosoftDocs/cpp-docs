---
description: "Learn more about: strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l"
title: "strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l"
ms.date: "1/20/2021"
api_name: ["strncat", "_strncat_l", "_mbsncat", "_mbsncat_l", "wcsncat", "wcsncat_l", "_o__mbsncat", "_o__mbsncat_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tcsncat_l", "_wcsncat_l", "_tcsnccat_l", "_mbsncat", "_strncat_l", "strncat", "_tcsnccat", "_mbsncat_l", "_ftcsncat", "wcsncat", "_tcsncat"]
helpviewer_keywords: ["concatenating strings", "ftcsncat function", "tcsncat_l function", "_tcsnccat_l function", "_tcsncat function", "strncat function", "_ftcsncat function", "mbsncat function", "mbsncat_l function", "strings [C++], appending", "wcsncat function", "tcsnccat function", "tcsnccat_l function", "_tcsnccat function", "string concatenation [C++]", "appending strings", "characters [C++], appending to strings", "_mbsncat function", "_tcsncat_l function", "_mbsncat_l function", "tcsncat function"]
---
# `strncat`, `_strncat_l`, `wcsncat`, `_wcsncat_l`, `_mbsncat`, `_mbsncat_l`

Appends characters of a string. More secure versions of these functions are available; see [`strncat_s`, `_strncat_s_l`, `wcsncat_s`, `_wcsncat_s_l`, `_mbsncat_s`, `_mbsncat_s_l`](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md).

> [!IMPORTANT]
> **`_mbsncat`** and **`_mbsncat_l`** can't be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *strncat(
   char *strDest,
   const char *strSource,
   size_t count
);
wchar_t *wcsncat(
   wchar_t *strDest,
   const wchar_t *strSource,
   size_t count
);
unsigned char *_mbsncat(
   unsigned char *strDest,
   const unsigned char *strSource,
   size_t count
);
unsigned char *_mbsncat_l(
   unsigned char *strDest,
   const unsigned char *strSource,
   size_t count,
   _locale_t locale
);
template <size_t size>
char *strncat(
   char (&strDest)[size],
   const char *strSource,
   size_t count
); // C++ only
template <size_t size>
wchar_t *wcsncat(
   wchar_t (&strDest)[size],
   const wchar_t *strSource,
   size_t count
); // C++ only
template <size_t size>
unsigned char *_mbsncat(
   unsigned char (&strDest)[size],
   const unsigned char *strSource,
   size_t count
); // C++ only
template <size_t size>
unsigned char *_mbsncat_l(
   unsigned char (&strDest)[size],
   const unsigned char *strSource,
   size_t count,
   _locale_t locale
); // C++ only
```

### Parameters

*`strDest`*\
Null-terminated destination string.

*`strSource`*\
Null-terminated source string.

*`count`*\
Number of characters to append.

*`locale`*\
Locale to use.

## Return value

Returns a pointer to the destination string. No return value is reserved to indicate an error.

## Remarks

The **`strncat`** function appends, at most, the first *`count`* characters of *`strSource`* to *`strDest`*. The initial character of *`strSource`* overwrites the terminating null character of *`strDest`*. If a null character appears in *`strSource`* before *`count`* characters are appended, **`strncat`** appends all characters from *`strSource`*, up to the null character. If *`count`* is greater than the length of *`strSource`*, the length of *`strSource`* is used in place of *`count`*. In all cases, the resulting string is terminated with a null character. If copying takes place between strings that overlap, the behavior is undefined.

> [!IMPORTANT]
> **`strncat`** does not check for sufficient space in *`strDest`*; it is therefore a potential cause of buffer overruns. Keep in mind that *`count`* limits the number of characters appended; it is not a limit on the size of *`strDest`*. See the example below. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

**`wcsncat`** and **`_mbsncat`** are wide-character and multibyte-character versions of **`strncat`**. The string arguments and return value of **`wcsncat`** are wide-character strings. The string arguments and return value of **`_mbsncat`** are multibyte-character strings. These three functions behave identically otherwise.

The output value is affected by the setting of the `LC_CTYPE` category setting of the locale. For more information, see [`setlocale`](setlocale-wsetlocale.md). The versions of these functions without the **`_l`** suffix use the current locale for this locale-dependent behavior. The versions with the **`_l`** suffix are identical except they use the locale parameter passed in instead. For more information, see [Locale](../locale.md).

In C++, these functions have template overloads. For more information, see [Secure template overloads](../secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_tcsncat`** | **`strncat`** | **`_mbsnbcat`** | **`wcsncat`** |
| **`_tcsncat_l`** | **`_strncat_l`** | **`_mbsnbcat_l`** | **`_wcsncat_l`** |

> [!NOTE]
> **`_strncat_l`** and **`_wcsncat_l`** have no locale dependence and are not meant to be called directly. They are provided for internal use by **`_tcsncat_l`**.

## Requirements

| Routine | Required header |
|---|---|
| **`strncat`** | \<string.h> |
| **`wcsncat`** | \<string.h> or \<wchar.h> |
| **`_mbsncat`** | \<mbstring.h> |
| **`_mbsncat_l`** | \<mbstring.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_strncat.c
// Use strcat and strncat to append to a string.
#include <stdlib.h>

#define MAXSTRINGLEN 39

char string[MAXSTRINGLEN+1];
// or char *string = malloc(MAXSTRINGLEN+1);

void BadAppend( char suffix[], int n )
{
   strncat( string, suffix, n );
}

void GoodAppend( char suffix[], size_t n )
{
   strncat( string, suffix, __min( n, MAXSTRINGLEN-strlen(string)) );
}

int main( void )
{
   string[0] = '\0';
   printf( "string can hold up to %d characters\n", MAXSTRINGLEN );

   strcpy( string, "This is the initial string!" );
   // concatenate up to 20 characters...
   BadAppend( "Extra text to add to the string...", 20 );
   printf( "After BadAppend :  %s (%d chars)\n", string, strlen(string) );

   strcpy( string, "This is the initial string!" );
   // concatenate up to 20 characters...
   GoodAppend( "Extra text to add to the string...", 20 );
   printf( "After GoodAppend:  %s (%d chars)\n", string, strlen(string) );
}
```

### Output

```Output
string can hold up to 39 characters
After BadAppend :  This is the initial string!Extra text to add to (47 chars)
After GoodAppend:  This is the initial string!Extra text t (39 chars)
```

You can see that `BadAppend` caused a buffer overrun.

## See also

[String manipulation](../string-manipulation-crt.md)\
[`_mbsnbcat`, `_mbsnbcat_l`](mbsnbcat-mbsnbcat-l.md)\
[`strcat`, `wcscat`, `_mbscat`](strcat-wcscat-mbscat.md)\
[`strcmp`, `wcscmp`, `_mbscmp`](strcmp-wcscmp-mbscmp.md)\
[`strcpy`, `wcscpy`, `_mbscpy`](strcpy-wcscpy-mbscpy.md)\
[`strncmp`, `wcsncmp`, `_mbsncmp`, `_mbsncmp_l`](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)\
[`strncpy`, `_strncpy_l`, `wcsncpy`, `_wcsncpy_l`, `_mbsncpy`, `_mbsncpy_l`](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)\
[`_strnicmp`, `_wcsnicmp`, `_mbsnicmp`, `_strnicmp_l`, `_wcsnicmp_l`, `_mbsnicmp_l`](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)\
[`strrchr`, `wcsrchr`, `_mbsrchr`, `_mbsrchr_l`](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)\
[`_strset`, `_strset_l`, `_wcsset`, `_wcsset_l`, `_mbsset`, `_mbsset_l`](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)\
[`strspn`, `wcsspn`, `_mbsspn`, `_mbsspn_l`](strspn-wcsspn-mbsspn-mbsspn-l.md)\
[Locale](../locale.md)\
[Interpretation of multibyte-character sequences](../interpretation-of-multibyte-character-sequences.md)\
