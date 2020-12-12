---
description: "Learn more about: strcpy_s, wcscpy_s, _mbscpy_s, _mbscpy_s_l"
title: "strcpy_s, wcscpy_s, _mbscpy_s, _mbscpy_s_l"
ms.date: "5/28/2020"
api_name: ["wcscpy_s", "_mbscpy_s", "_mbscpy_s_l", "strcpy_s", "_o__mbscpy_s", "_o__mbscpy_s_l", "_o_strcpy_s", "_o_wcscpy_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["strcpy_s", "_mbscpy_s", "_mbscpy_s_l", "_tcscpy_s", "wcscpy_s"]
helpviewer_keywords: ["strcpy_s function", "_tcscpy_s function", "_mbscpy_s function", "_mbscpy_s_l function", "copying strings", "strings [C++], copying", "tcscpy_s function", "wcscpy_s function"]
ms.assetid: 611326f3-7929-4a5d-a465-a4683af3b053
---
# strcpy_s, wcscpy_s, _mbscpy_s, _mbscpy_s_l

Copies a string. These versions of [strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **_mbscpy_s** and **_mbscpy_s_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t strcpy_s(
   char *dest,
   rsize_t dest_size,
   const char *src
);
errno_t wcscpy_s(
   wchar_t *dest,
   rsize_t dest_size,
   const wchar_t *src
);
errno_t _mbscpy_s(
   unsigned char *dest,
   rsize_t dest_size,
   const unsigned char *src
);
errno_t _mbscpy_s_l(
   unsigned char *dest,
   rsize_t dest_size,
   const unsigned char *src,
   _locale_t locale
);
```

```cpp
// Template functions are C++ only:
template <size_t size>
errno_t strcpy_s(
   char (&dest)[size],
   const char *src
); // C++ only
template <size_t size>
errno_t wcscpy_s(
   wchar_t (&dest)[size],
   const wchar_t *src
); // C++ only
template <size_t size>
errno_t _mbscpy_s(
   unsigned char (&dest)[size],
   const unsigned char *src
); // C++ only
template <size_t size>
errno_t _mbscpy_s_l(
   unsigned char (&dest)[size],
   const unsigned char *src,
   _locale_t locale
); // C++ only
```

### Parameters

*dest*<br/>
Location of the destination string buffer.

*dest_size*<br/>
Size of the destination string buffer in **`char`** units for narrow and multi-byte functions, and **`wchar_t`** units for wide functions. This value must be greater than zero and not greater than **RSIZE_MAX**. Ensure that this size accounts for the terminating `NULL` following the string.

*src*<br/>
Null-terminated source string buffer.

*locale*<br/>
Locale to use.

## Return Value

Zero if successful; otherwise, an error.

### Error Conditions

|*dest*|*dest_size*|*src*|Return value|Contents of *dest*|
|----------------------|------------------------|-----------------|------------------|----------------------------------|
|**NULL**|any|any|**EINVAL**|not modified|
|any|any|**NULL**|**EINVAL**|*dest*[0] set to 0|
|any|0, or too small|any|**ERANGE**|*dest*[0] set to 0|

## Remarks

The **strcpy_s** function copies the contents in the address of *src*, including the terminating null character, to the location that's specified by *dest*. The destination string must be large enough to hold the source string and its terminating null character. The behavior of **strcpy_s** is undefined if the source and destination strings overlap.

**wcscpy_s** is the wide-character version of **strcpy_s**, and **_mbscpy_s** is the multibyte-character version. The arguments of **wcscpy_s** are wide-character strings; those of **_mbscpy_s** and **_mbscpy_s_l** are multibyte-character strings. These functions behave identically otherwise. **_mbscpy_s_l** is identical to **_mbscpy_s** except that it uses the locale parameter passed in instead of the current locale. For more information, see [Locale](../../c-runtime-library/locale.md).

If *dest* or *src* is a null pointer, or if the destination string size *dest_size* is too small, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **EINVAL** and set **errno** to **EINVAL** when *dest* or *src* is a null pointer, and they return **ERANGE** and set **errno** to **ERANGE** when the destination string is too small.

Upon successful execution, the destination string is always null-terminated.

In C++, use of these functions is simplified by template overloads that can infer buffer length automatically so that you don't have to specify a size argument, and they can automatically replace older, less-secure functions with their newer, more secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcscpy_s**|**strcpy_s**|**_mbscpy_s**|**wcscpy_s**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strcpy_s**|\<string.h>|
|**wcscpy_s**|\<string.h> or \<wchar.h>|
|**_mbscpy_s**|\<mbstring.h>|

These functions are Microsoft-specific. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

Unlike production quality code, this sample calls the secure string functions without checking for errors:

```C
// crt_strcpy_s.c
// Compile by using: cl /W4 crt_strcpy_s.c
// This program uses strcpy_s and strcat_s
// to build a phrase.

#include <string.h>     // for strcpy_s, strcat_s
#include <stdlib.h>     // for _countof
#include <stdio.h>      // for printf
#include <errno.h>      // for return values

int main(void)
{
    char string[80];

    strcpy_s(string, _countof(string), "Hello world from ");
    strcat_s(string, _countof(string), "strcpy_s ");
    strcat_s(string, _countof(string), "and ");
    strcat_s(string, _countof(string), "strcat_s!");

    printf("String = %s\n", string);
}
```

```Output
String = Hello world from strcpy_s and strcat_s!
```

When building C++ code, the template versions may be easier to use.

```cpp
// crt_wcscpy_s.cpp
// Compile by using: cl /EHsc /W4 crt_wcscpy_s.cpp
// This program uses wcscpy_s and wcscat_s
// to build a phrase.

#include <cstring>  // for wcscpy_s, wcscat_s
#include <cstdlib>  // for _countof
#include <iostream> // for cout, includes <cstdlib>, <cstring>
#include <errno.h>  // for return values

int main(void)
{
    wchar_t string[80];
    // using template versions of wcscpy_s and wcscat_s:
    wcscpy_s(string, L"Hello world from ");
    wcscat_s(string, L"wcscpy_s ");
    wcscat_s(string, L"and ");
    // of course we can supply the size explicitly if we want to:
    wcscat_s(string, _countof(string), L"wcscat_s!");

    std::wcout << L"String = " << string << std::endl;
}
```

```Output
String = Hello world from wcscpy_s and wcscat_s!
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md) <br/>
[strcat, wcscat, _mbscat, _mbscat_l](strcat-wcscat-mbscat.md) <br/>
[strcmp, wcscmp, _mbscmp, _mbscmp_l](strcmp-wcscmp-mbscmp.md) <br/>
[strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md) <br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md) <br/>
[strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md) <br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md) <br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md) <br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
