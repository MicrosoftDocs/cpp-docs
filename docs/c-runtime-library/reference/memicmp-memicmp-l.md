---
description: "Learn more about: _memicmp, _memicmp_l"
title: "_memicmp, _memicmp_l"
ms.date: "4/2/2020"
api_name: ["_memicmp_l", "_memicmp", "_o__memicmp", "_o__memicmp_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_memicmp", "memicmp_l", "_memicmp_l"]
helpviewer_keywords: ["memicmp function", "_memicmp function", "memicmp_l function", "_memicmp_l function"]
ms.assetid: 0a6eb945-4077-4f84-935d-1aaebe8db8cb
---
# _memicmp, _memicmp_l

Compares characters in two buffers (case-insensitive).

## Syntax

```C
int _memicmp(
   const void *buffer1,
   const void *buffer2,
   size_t count
);
int _memicmp_l(
   const void *buffer1,
   const void *buffer2,
   size_t count,
   _locale_t locale
);
```

### Parameters

*buffer1*<br/>
First buffer.

*buffer2*<br/>
Second buffer.

*count*<br/>
Number of characters.

*locale*<br/>
Locale to use.

## Return Value

The return value indicates the relationship between the buffers.

|Return value|Relationship of first count bytes of buf1 and buf2|
|------------------|--------------------------------------------------------|
|< 0|*buffer1* less than *buffer2*.|
|0|*buffer1* identical to *buffer2*.|
|> 0|*buffer1* greater than *buffer2*.|
|**_NLSCMPERROR**|An error occurred.|

## Remarks

The **_memicmp** function compares the first *count* characters of the two buffers *buffer1* and *buffer2* byte by byte. The comparison is not case-sensitive.

If either *buffer1* or *buffer2* is a null pointer, this function invokes an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns **_NLSCMPERROR** and sets **errno** to **EINVAL**.

**_memicmp** uses the current locale for locale-dependent behavior; **_memicmp_l** is identical except that it uses the locale passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_memicmp**|\<memory.h> or \<string.h>|
|**_memicmp_l**|\<memory.h> or \<string.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_memicmp.c
// This program uses _memicmp to compare
// the first 29 letters of the strings named first and
// second without regard to the case of the letters.

#include <memory.h>
#include <stdio.h>
#include <string.h>

int main( void )
{
   int result;
   char first[] = "Those Who Will Not Learn from History";
   char second[] = "THOSE WHO WILL NOT LEARN FROM their mistakes";
   // Note that the 29th character is right here ^

   printf( "Compare '%.29s' to '%.29s'\n", first, second );
   result = _memicmp( first, second, 29 );
   if( result < 0 )
      printf( "First is less than second.\n" );
   else if( result == 0 )
      printf( "First is equal to second.\n" );
   else if( result > 0 )
      printf( "First is greater than second.\n" );
}
```

```Output
Compare 'Those Who Will Not Learn from' to 'THOSE WHO WILL NOT LEARN FROM'
First is equal to second.
```

## See also

[Buffer Manipulation](../../c-runtime-library/buffer-manipulation.md)<br/>
[_memccpy](memccpy.md)<br/>
[memchr, wmemchr](memchr-wmemchr.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[memcpy, wmemcpy](memcpy-wmemcpy.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)<br/>
[_strnicmp, _wcsnicmp, _mbsnicmp, _strnicmp_l, _wcsnicmp_l, _mbsnicmp_l](strnicmp-wcsnicmp-mbsnicmp-strnicmp-l-wcsnicmp-l-mbsnicmp-l.md)<br/>
