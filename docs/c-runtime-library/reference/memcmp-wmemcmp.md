---
description: "Learn more about: memcmp, wmemcmp"
title: "memcmp, wmemcmp"
ms.date: "11/04/2016"
api_name: ["memcmp", "wmemcmp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["memcmp", "wmemcmp"]
helpviewer_keywords: ["wmemcmp function", "memcmp function"]
ms.assetid: 0c21c3e3-8ee4-40e5-add1-eb26d225fd8d
---
# memcmp, wmemcmp

Compares characters in two buffers.

## Syntax

```C
int memcmp(
   const void *buffer1,
   const void *buffer2,
   size_t count
);
int wmemcmp(
   const wchar_t * buffer1,
   const wchar_t * buffer2,
   size_t count
);
```

### Parameters

*buffer1*<br/>
First buffer.

*buffer2*<br/>
Second buffer.

*count*<br/>
Number of characters to compare. (Compares bytes for **memcmp**, wide characters for **wmemcmp**).

## Return Value

The return value indicates the relationship between the buffers.

|Return value|Relationship of first *count* characters of buf1 and buf2|
|------------------|---------------------------------------------------------------|
|< 0|*buffer1* less than *buffer2*|
|0|*buffer1* identical to *buffer2*|
|> 0|*buffer1* greater than *buffer2*|

## Remarks

Compares the first *count* characters of *buffer1* and *buffer2* and returns a value that indicates their relationship. The sign of a non-zero return value is the sign of the difference between the first differing pair of values in the buffers. The values are interpreted as **`unsigned char`** for **memcmp**, and as **`wchar_t`** for **wmemcmp**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**memcmp**|\<memory.h> or \<string.h>|
|**wmemcmp**|\<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time library](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_memcmp.c
/* This program uses memcmp to compare
* the strings named first and second. If the first
* 19 bytes of the strings are equal, the program
* considers the strings to be equal.
*/

#include <string.h>
#include <stdio.h>

int main( void )
{
   char first[]  = "12345678901234567890";
   char second[] = "12345678901234567891";
   int int_arr1[] = {1,2,3,4};
   int int_arr2[] = {1,2,3,4};
   int result;

   printf( "Compare '%.19s' to '%.19s':\n", first, second );
   result = memcmp( first, second, 19 );
   if( result < 0 )
      printf( "First is less than second.\n" );
   else if( result == 0 )
      printf( "First is equal to second.\n" );
   else
      printf( "First is greater than second.\n" );

   printf( "Compare '%d,%d' to '%d,%d':\n", int_arr1[0], int_arr1[1], int_arr2[0], int_arr2[1]);
   result = memcmp( int_arr1, int_arr2, sizeof(int) * 2 );
   if( result < 0 )
      printf( "int_arr1 is less than int_arr2.\n" );
   else if( result == 0 )
      printf( "int_arr1 is equal to int_arr2.\n" );
   else
      printf( "int_arr1 is greater than int_arr2.\n" );
}
```

```Output
Compare '1234567890123456789' to '1234567890123456789':
First is equal to second.
Compare '1,2' to '1,2':
int_arr1 is equal to int_arr2.
```

## See also

[Buffer Manipulation](../../c-runtime-library/buffer-manipulation.md)<br/>
[_memccpy](memccpy.md)<br/>
[memchr, wmemchr](memchr-wmemchr.md)<br/>
[memcpy, wmemcpy](memcpy-wmemcpy.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strcmp, wcscmp, _mbscmp](strcmp-wcscmp-mbscmp.md)<br/>
[strncmp, wcsncmp, _mbsncmp, _mbsncmp_l](strncmp-wcsncmp-mbsncmp-mbsncmp-l.md)<br/>
