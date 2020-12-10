---
description: "Learn more about: strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l"
title: "strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l"
ms.date: "4/2/2020"
api_name: ["_mbslen", "_mbslen_l", "_mbstrlen", "wcslen", "_mbstrlen_l", "strlen", "_o__mbslen", "_o__mbslen_l", "_o__mbstrlen", "_o__mbstrlen_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbstrlen", "wcslen", "_tcslen", "_ftcslen", "strlen", "_mbslen"]
helpviewer_keywords: ["wcslen function", "string length, getting", "ftcslen function", "lengths, strings", "mbstrlen_l function", "_mbslen_l function", "_tcslen function", "mbslen_l function", "mbslen function", "_mbstrlen function", "strings [C++], getting length", "mbstrlen function", "_mbstrlen_l function", "_ftcslen function", "tcslen function", "strlen function", "_mbslen function"]
ms.assetid: 16462f2a-1e0f-4eb3-be55-bf1c83f374c2
---
# strlen, wcslen, _mbslen, _mbslen_l, _mbstrlen, _mbstrlen_l

Gets the length of a string, by using the current locale or a specified locale. More secure versions of these functions are available; see [strnlen, strnlen_s, wcsnlen, wcsnlen_s, _mbsnlen, _mbsnlen_l, _mbstrnlen, _mbstrnlen_l](strnlen-strnlen-s.md)

> [!IMPORTANT]
> **_mbslen**, **_mbslen_l**, **_mbstrlen**, and **_mbstrlen_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
size_t strlen(
   const char *str
);
size_t wcslen(
   const wchar_t *str
);
size_t _mbslen(
   const unsigned char *str
);
size_t _mbslen_l(
   const unsigned char *str,
   _locale_t locale
);
size_t _mbstrlen(
   const char *str
);
size_t _mbstrlen_l(
   const char *str,
   _locale_t locale
);
```

### Parameters

*str*<br/>
Null-terminated string.

*locale*<br/>
Locale to use.

## Return Value

Each of these functions returns the number of characters in *str*, excluding the terminal null. No return value is reserved to indicate an error, except for **_mbstrlen** and **_mbstrlen_l**, which return `((size_t)(-1))` if the string contains an invalid multibyte character.

## Remarks

**strlen** interprets the string as a single-byte character string, so its return value is always equal to the number of bytes, even if the string contains multibyte characters. **wcslen** is a wide-character version of **strlen**; the argument of **wcslen** is a wide-character string and the count of characters is in wide (two-byte) characters. **wcslen** and **strlen** behave identically otherwise.

**Security Note** These functions incur a potential threat brought about by a buffer overrun problem. Buffer overrun problems are a frequent method of system attack, resulting in an unwarranted elevation of privilege. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcslen**|**strlen**|**strlen**|**wcslen**|
|**_tcsclen**|**strlen**|**_mbslen**|**wcslen**|
|**_tcsclen_l**|**strlen**|**_mbslen_l**|**wcslen**|

**_mbslen** and **_mbslen_l** return the number of multibyte characters in a multibyte-character string but they do not test for multibyte-character validity. **_mbstrlen** and **_mbstrlen_l** test for multibyte-character validity and recognize multibyte-character sequences. If the string passed to **_mbstrlen** or **_mbstrlen_l** contains an invalid multibyte character for the code page, the function returns -1 and sets **errno** to **EILSEQ**.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strlen**|\<string.h>|
|**wcslen**|\<string.h> or \<wchar.h>|
|**_mbslen**, **_mbslen_l**|\<mbstring.h>|
|**_mbstrlen**, **_mbstrlen_l**|\<stdlib.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strlen.c
// Determine the length of a string. For the multi-byte character
// example to work correctly, the Japanese language support for
// non-Unicode programs must be enabled by the operating system.

#include <string.h>
#include <locale.h>

int main()
{
   char* str1 = "Count.";
   wchar_t* wstr1 = L"Count.";
   char * mbstr1;
   char * locale_string;

   // strlen gives the length of single-byte character string
   printf("Length of '%s' : %d\n", str1, strlen(str1) );

   // wstrlen gives the length of a wide character string
   wprintf(L"Length of '%s' : %d\n", wstr1, wcslen(wstr1) );

   // A multibyte string: [A] [B] [C] [katakana A] [D] [\0]
   // in Code Page 932. For this example to work correctly,
   // the Japanese language support must be enabled by the
   // operating system.
   mbstr1 = "ABC" "\x83\x40" "D";

   locale_string = setlocale(LC_CTYPE, "Japanese_Japan");

   if (locale_string == NULL)
   {
      printf("Japanese locale not enabled. Exiting.\n");
      exit(1);
   }
   else
   {
      printf("Locale set to %s\n", locale_string);
   }

   // _mbslen will recognize the Japanese multibyte character if the
   // current locale used by the operating system is Japanese
   printf("Length of '%s' : %d\n", mbstr1, _mbslen(mbstr1) );

   // _mbstrlen will recognize the Japanese multibyte character
   // since the CRT locale is set to Japanese even if the OS locale
   // isnot.
   printf("Length of '%s' : %d\n", mbstr1, _mbstrlen(mbstr1) );
   printf("Bytes in '%s' : %d\n", mbstr1, strlen(mbstr1) );

}
```

```Output
Length of 'Count.' : 6
Length of 'Count.' : 6
Length of 'ABCァD' : 5
Length of 'ABCァD' : 5
Bytes in 'ABCァD' : 6
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md)<br/>
[strcat, wcscat, _mbscat](strcat-wcscat-mbscat.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strcoll Functions](../../c-runtime-library/strcoll-functions.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
