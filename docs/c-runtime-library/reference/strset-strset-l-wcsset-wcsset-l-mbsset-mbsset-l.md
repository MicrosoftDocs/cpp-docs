---
description: "Learn more about: _strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l"
title: "_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l"
ms.date: "4/2/2020"
api_name: ["_wcsset", "_mbsset", "_strset_l", "_strset", "_wcsset_l", "_mbsset_l", "_o__mbsset", "_o__mbsset_l", "_o__wcsset"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsset", "_strset_l", "_mbsset", "_strset", "mbsset_l", "strset_l", "_wcsset", "_ftcsset", "wcsset_l", "_tcsset_l", "_mbsset_l", "_wcsset_l", "_fstrset", "_tcsset"]
helpviewer_keywords: ["_wcsset_l function", "_tcsset function", "wcsset_l function", "_ftcsset function", "characters [C++], setting", "_strset function", "ftcsset function", "strings [C++], setting characters", "mbsset function", "tcsset_l function", "_fstrset function", "mbsset_l function", "strset_l function", "_wcsset function", "_mbsset function", "_mbsset_l function", "tcsset function", "_strset_l function", "fstrset function", "_tcsset_l function"]
ms.assetid: c42ded42-2ed9-4f06-a0a9-247ba305473a
---
# _strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l

Sets characters of a string to a character. More secure versions of these functions are available; see [_strset_s, _strset_s_l, _wcsset_s, _wcsset_s_l, _mbsset_s, _mbsset_s_l](strset-s-strset-s-l-wcsset-s-wcsset-s-l-mbsset-s-mbsset-s-l.md).

> [!IMPORTANT]
> **_mbsset** and **_mbsset_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *_strset(
   char *str,
   int c
);
char *_strset_l(
   char *str,
   int c,
   locale_t locale
);
wchar_t *_wcsset(
   wchar_t *str,
   wchar_t c
);
wchar_t *_wcsset_l(
   wchar_t *str,
   wchar_t c,
   locale_t locale
);
unsigned char *_mbsset(
   unsigned char *str,
   unsigned int c
);
unsigned char *_mbsset_l(
   unsigned char *str,
   unsigned int c,
   _locale_t locale
);
```

### Parameters

*str*<br/>
Null-terminated string to be set.

*c*<br/>
Character setting.

*locale*<br/>
Locale to use.

## Return Value

Returns a pointer to the altered string.

## Remarks

The **_strset** function sets all characters (except the terminating null character) of *str* to *c*, converted to **`char`**. **_wcsset** and **_mbsset_l** are wide-character and multibyte-character versions of **_strset**, and the data types of the arguments and return values vary accordingly. These functions behave identically otherwise.

**_mbsset** validates its parameters. If *str* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **_mbsset** returns **NULL** and sets **errno** to **EINVAL**. **_strset** and **_wcsset** do not validate their parameters.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale, _wsetlocale](setlocale-wsetlocale.md) for more information. The versions of these functions are identical, except that the ones that don't have the **_l** suffix use the current locale and the ones that do have the **_l** suffix instead use the locale parameter that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

> [!IMPORTANT]
> These functions might be vulnerable to buffer overrun threats. Buffer overruns can be used for system attacks because they can cause an unwarranted elevation of privilege. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsset**|**_strset**|**_mbsset**|**_wcsset**|
|**_tcsset_l**|**_strset_l**|**_mbsset_l**|**_wcsset_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strset**|\<string.h>|
|**_strset_l**|\<tchar.h>|
|**_wcsset**|\<string.h> or \<wchar.h>|
|**_wcsset_l**|\<tchar.h>|
|**_mbsset**, **_mbsset_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strset.c
// compile with: /W3

#include <string.h>
#include <stdio.h>

int main( void )
{
   char string[] = "Fill the string with something.";
   printf( "Before: %s\n", string );
   _strset( string, '*' ); // C4996
   // Note: _strset is deprecated; consider using _strset_s instead
   printf( "After:  %s\n", string );
}
```

```Output
Before: Fill the string with something.
After:  *******************************
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[_mbsnbset, _mbsnbset_l](mbsnbset-mbsnbset-l.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)<br/>
