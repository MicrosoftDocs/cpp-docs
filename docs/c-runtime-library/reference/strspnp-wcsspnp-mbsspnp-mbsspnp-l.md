---
description: "Learn more about: _strspnp, _wcsspnp, _mbsspnp, _mbsspnp_l"
title: "_strspnp, _wcsspnp, _mbsspnp, _mbsspnp_l"
ms.date: "4/2/2020"
api_name: ["_mbsspnp", "_wcsspnp", "_mbsspnp_l", "_strspnp", "_o__mbsspnp", "_o__mbsspnp_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tcsspnp", "_mbsspnp", "strspnp", "_ftcsspnp", "_mbsspnp_l", "wcsspnp", "mbsspnp_l", "_wcsspnp", "_strspnp", "mbsspnp"]
helpviewer_keywords: ["_strspnp function", "_wcsspnp function", "_mbsspnp_l function", "strspnp function", "mbsspnp function", "wcsspnp function", "_mbsspnp function", "mbsspnp_l function", "_tcsspnp function", "tcsspnp function"]
ms.assetid: 1ce18100-2edd-4c3b-af8b-53f204d80233
---
# _strspnp, _wcsspnp, _mbsspnp, _mbsspnp_l

Returns a pointer to the first character in a given string that is not in another given string.

> [!IMPORTANT]
> **_mbsspnp** and **_mbsspnp_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

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

*str*<br/>
Null-terminated string to search.

*charset*<br/>
Null-terminated character set.

*locale*<br/>
Locale to use.

## Return Value

**_strspnp**, **_wcsspnp**, and **_mbsspnp** return a pointer to the first character in *str* that does not belong to the set of characters in *charset*. Each of these functions returns **NULL** if *str* consists entirely of characters from *charset*. For each of these routines, no return value is reserved to indicate an error.

## Remarks

The **_mbsspnp** function returns a pointer to the multibyte character that is the first character in *str* that does not belong to the set of characters in *charset*. **_mbsspnp** recognizes multibyte-character sequences according to the [multibyte code page](../../c-runtime-library/code-pages.md) currently in use. The search does not include terminating null characters.

If either *str* or *charset* is a null pointer, this function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns **NULL** and sets **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsspnp**|**_strspnp**|**_mbsspnp**|**_wcsspnp**|

**_strspnp** and **_wcsspnp** are single-byte character and wide-character versions of **_mbsspnp**. **_strspnp** and **_wcsspnp** behave identically to **_mbsspnp** otherwise; they are provided only for this mapping and should not be used for any other reason. For more information, see [Using Generic-Text Mappings](../../c-runtime-library/using-generic-text-mappings.md) and [Generic-Text Mappings](../../c-runtime-library/generic-text-mappings.md).

**_mbsspnp_l** is identical except that it uses the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsspnp**|\<mbstring.h>|
|**_strspnp**|\<tchar.h>|
|**_wcsspnp**|\<tchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

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

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
[strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
[strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
[strrchr, wcsrchr, _mbsrchr, _mbsrchr_l](strrchr-wcsrchr-mbsrchr-mbsrchr-l.md)<br/>
