---
description: "Learn more about: _strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l"
title: "_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l"
ms.date: "4/2/2020"
api_name: ["_mbsnset", "_strnset", "_mbsnset_l", "_wcsnset_l", "_wcsnset", "_strnset_l", "_o__mbsnset", "_o__mbsnset_l", "_o__wcsnset"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tcsncset_l", "mbsnset_l", "_tcsnset_l", "_fstrnset", "_wcsnset_l", "_ftcsnset", "wcsnset_l", "_mbsnset_l", "_strnset", "_tcsnset", "_strnset_l", "mbsnset", "strnset_l", "_mbsnset", "_wcsnset", "_tcsncset"]
helpviewer_keywords: ["_wcsnset function", "strnset_l function", "tcsnset function", "tcsncset function", "characters [C++], initializing to formats", "mbsnset function", "_tcsnset_l function", "_mbsnset function", "_strnset function", "_tcsncset_l function", "mbsnset_l function", "_tcsnset function", "initializing characters", "_tcsncset function", "ftcsnset function", "wcsnset_l function", "_ftcsnset function", "_wcsnset_l function", "_fstrnset function", "_mbsnset_l function", "_strnset_l function", "fstrnset function", "strings [C++], initializing", "tcsnset_l function"]
ms.assetid: 3f306489-5763-48e5-b939-aefee7c94ef5
---
# _strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l

Initializes characters of a string to a given character. More secure versions of these functions exist; see [_strnset_s, _strnset_s_l, _wcsnset_s, _wcsnset_s_l, _mbsnset_s, _mbsnset_s_l](strnset-s-strnset-s-l-wcsnset-s-wcsnset-s-l-mbsnset-s-mbsnset-s-l.md).

> [!IMPORTANT]
> **_mbsnset** and **_mbsnset_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *_strnset(
   char *str,
   int c,
   size_t count
);
char *_strnset_l(
   char *str,
   int c,
   size_t count,
   locale_t locale
);
wchar_t *_wcsnset(
   wchar_t *str,
   wchar_t c,
   size_t count
);
wchar_t *_wcsnset_l(
   wchar_t *str,
   wchar_t c,
   size_t count,
   _locale_t locale
);
unsigned char *_mbsnset(
   unsigned char *str,
   unsigned int c,
   size_t count
);
unsigned char *_mbsnset_l(
   unsigned char *str,
   unsigned int c,
   size_t count,
   _locale_t locale
);
```

### Parameters

*str*<br/>
String to be altered.

*c*<br/>
Character setting.

*count*<br/>
Number of characters to be set.

*locale*<br/>
Locale to use.

## Return Value

Returns a pointer to the altered string.

## Remarks

The **_strnset** function sets, at most, the first *count* characters of *str* to *c* (converted to **`char`**). If *count* is greater than the length of *str*, the length of *str* is used instead of *count*.

**_wcsnset** and **_mbsnset** are wide-character and multibyte-character versions of **_strnset**. The string arguments and return value of **_wcsnset** are wide-character strings; those of **_mbsnset** are multibyte-character strings. These three functions behave identically otherwise.

**_mbsnset** validates its parameters; if *str* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, **_mbsnset** returns **NULL** and sets **errno** to **EINVAL**. **_strnset** and **_wcsnset** do not validate their parameters.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsnset**|**_strnset**|**_mbsnbset**|**_wcsnset**|
|**_tcsnset_l**|**_strnset_l**|**_mbsnbset_l**|**_wcsnset_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strnset**|\<string.h>|
|**_strnset_l**|\<tchar.h>|
|**_wcsnset**|\<string.h> or \<wchar.h>|
|**_wcsnset_l**|\<tchar.h>|
|**_mbsnset**, **_mbsnset_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strnset.c
// compile with: /W3
#include <string.h>
#include <stdio.h>

int main( void )
{
   char string[15] = "This is a test";
   /* Set not more than 4 characters of string to be *'s */
   printf( "Before: %s\n", string );
   _strnset( string, '*', 4 ); // C4996
   // Note: _strnset is deprecated; consider using _strnset_s
   printf( "After:  %s\n", string );
}
```

```Output
Before: This is a test
After:  **** is a test
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
