---
description: "Learn more about: _strrev, _wcsrev, _mbsrev, _mbsrev_l"
title: "_strrev, _wcsrev, _mbsrev, _mbsrev_l"
ms.date: "4/2/2020"
api_name: ["_wcsrev", "_mbsrev", "_strrev", "_mbsrev_l", "_o__mbsrev", "_o__mbsrev_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_strrev", "_ftcsrev", "_tcsrev", "mbsrev", "mbsrev_l", "_wcsrev_fstrrev", "_mbsrev"]
helpviewer_keywords: ["_mbsrev_l function", "characters [C++], switching", "_mbsrev function", "strrev function", "_ftcsrev function", "strings [C++], reversing", "wcsrev function", "_strrev function", "mbsrev_l function", "reversing characters in strings", "ftcsrev function", "characters [C++], reversing order", "_wcsrev function", "mbsrev function", "tcsrev function", "_tcsrev function"]
ms.assetid: 87863e89-4fa0-421c-af48-25d8516fe72f
---
# _strrev, _wcsrev, _mbsrev, _mbsrev_l

Reverses the characters of a string.

> [!IMPORTANT]
> **_mbsrev** and **_mbsrev_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *_strrev(
   char *str
);
wchar_t *_wcsrev(
   wchar_t *str
);
unsigned char *_mbsrev(
   unsigned char *str
);
unsigned char *_mbsrev_l(
   unsigned char *str,
   _locale_t locale
);
```

### Parameters

*str*<br/>
Null-terminated string to reverse.

*locale*<br/>
Locale to use.

## Return Value

Returns a pointer to the altered string. No return value is reserved to indicate an error.

## Remarks

The **_strrev** function reverses the order of the characters in *str*. The terminating null character remains in place. **_wcsrev** and **_mbsrev** are wide-character and multibyte-character versions of **_strrev**. The arguments and return value of **_wcsrev** are wide-character strings; those of **_mbsrev** are multibyte-character strings. For **_mbsrev**, the order of bytes in each multibyte character in *str* is not changed. These three functions behave identically otherwise.

**_mbsrev** validates its parameters. If either *string1* or *string2* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **_mbsrev** returns **NULL** and sets **errno** to **EINVAL**. **_strrev** and **_wcsrev** do not validate their parameters.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale, _wsetlocale](setlocale-wsetlocale.md) for more information. The versions of these functions are identical, except that the ones that don't have the **_l** suffix use the current locale and the ones that do have the **_l** suffix instead use the locale parameter that's passed in. For more information, see [Locale](../../c-runtime-library/locale.md).

> [!IMPORTANT]
> These functions might be vulnerable to buffer overrun threats. Buffer overruns can be used for system attacks because they can cause an unwarranted elevation of privilege. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsrev**|**_strrev**|**_mbsrev**|**_wcsrev**|
|**n/a**|**n/a**|**_mbsrev_l**|**n/a**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strrev**|\<string.h>|
|**_wcsrev**|\<string.h> or \<wchar.h>|
|**_mbsrev**, **_mbsrev_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strrev.c
// This program checks a string to see
// whether it is a palindrome: that is, whether
// it reads the same forward and backward.
//

#include <string.h>
#include <stdio.h>

int main( void )
{
   char* string = "Able was I ere I saw Elba";
   int result;

   // Reverse string and compare (ignore case):
   result = _stricmp( string, _strrev( _strdup( string ) ) );
   if( result == 0 )
      printf( "The string \"%s\" is a palindrome\n", string );
   else
      printf( "The string \"%s\" is not a palindrome\n", string );
}
```

```Output
The string "Able was I ere I saw Elba" is a palindrome
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
