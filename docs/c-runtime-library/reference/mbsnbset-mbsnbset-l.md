---
description: "Learn more about: _mbsnbset, _mbsnbset_l"
title: "_mbsnbset, _mbsnbset_l"
ms.date: "4/2/2020"
api_name: ["_mbsnbset", "_mbsnbset_l", "_o__mbsnbset", "_o__mbsnbset_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbsnbset", "mbsnbset_l", "_mbsnbset", "_mbsnbset_l"]
helpviewer_keywords: ["tcsnset function", "_tcsnset_l function", "_mbsnbset function", "_tcsnset function", "_mbsnbset_l function", "mbsnbset_l function", "tcsnset_l function", "mbsnbset function"]
ms.assetid: 8e46ef75-9a56-42d2-a522-a08450c67c19
---
# _mbsnbset, _mbsnbset_l

Sets the first **n** bytes of a multibyte-character string to a specified character. More secure versions of these functions are available; see [_mbsnbset_s, _mbsnbset_s_l](mbsnbset-s-mbsnbset-s-l.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
unsigned char *_mbsnbset(
   unsigned char *str,
   unsigned int c,
   size_t count
);
unsigned char *_mbsnbset_l(
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
Single-byte or multibyte-character setting.

*count*<br/>
Number of bytes to be set.

*locale*<br/>
Locale to use.

## Return Value

**_mbsnbset** returns a pointer to the altered string.

## Remarks

The **_mbsnbset** and **_mbsnbset_l** functions set, at most, the first *count* bytes of *str* to *c*. If *count* is greater than the length of *str*, the length of *str* is used instead of *count*. If *c* is a multibyte character and cannot be set entirely into the last byte specified by *count*, the last byte is padded with a blank character. **_mbsnbset** and **_mbsnbset_l** does not place a terminating null at the end of *str*.

**_mbsnbset** and **_mbsnbset_l** is similar to **_mbsnset**, except that it sets *count* bytes rather than *count* characters of *c*.

If *str* is **NULL** or *count* is zero, this function generates an invalid parameter exception as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns **NULL**. Also, if *c* is not a valid multibyte character, **errno** is set to **EINVAL** and a space is used instead.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale; see [setlocale](setlocale-wsetlocale.md) for more information. The **_mbsnbset** version of this function uses the current locale for this locale-dependent behavior; the **_mbsnbset_l** version is identical except that it use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

**Security Note** This API incurs a potential threat brought about by a buffer overrun problem. Buffer overrun problems are a frequent method of system attack, resulting in an unwarranted elevation of privilege. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsnset**|**_strnset**|**_mbsnbset**|**_wcsnset**|
|**_tcsnset_l**|**_strnset_l**|**_mbsnbset_l**|**_wcsnset_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsnbset**|\<mbstring.h>|
|**_mbsnbset_l**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_mbsnbset.c
// compile with: /W3
#include <mbstring.h>
#include <stdio.h>

int main( void )
{
   char string[15] = "This is a test";
   /* Set not more than 4 bytes of string to be *'s */
   printf( "Before: %s\n", string );
   _mbsnbset( string, '*', 4 ); // C4996
   // Note; _mbsnbset is deprecated; consider _mbsnbset_s
   printf( "After:  %s\n", string );
}
```

### Output

```Output
Before: This is a test
After:  **** is a test
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md)<br/>
[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md)<br/>
