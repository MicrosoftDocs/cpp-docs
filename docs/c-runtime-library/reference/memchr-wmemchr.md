---
description: "Learn more about: memchr, wmemchr"
title: "memchr, wmemchr"
ms.date: "1/14/2021"
api_name: ["wmemchr", "memchr"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["memchr", "wmemchr"]
helpviewer_keywords: ["memchr function", "wmemchr function"]
ms.assetid: 5a348581-28f1-4256-8434-687245f7fc9f
---
# `memchr`, `wmemchr`

Find characters in a buffer.

## Syntax

```C
void *memchr(
   const void *buffer,
   int c,
   size_t count
); // C only
void *memchr(
   void *buffer,
   int c,
   size_t count
); // C++ only
const void *memchr(
   const void *buffer,
   int c,
   size_t count
); // C++ only
wchar_t *wmemchr(
   const wchar_t * buffer,
   wchar_t c,
   size_t count
); // C only
wchar_t *wmemchr(
   wchar_t * buffer,
   wchar_t c,
   size_t count
); // C++ only
const wchar_t *wmemchr(
   const wchar_t * buffer,
   wchar_t c,
   size_t count
); // C++ only
```

### Parameters

*`buffer`*\
Pointer to buffer.

*`c`*\
Character to look for.

*`count`*\
Number of characters to check.

## Return value

If successful, returns a pointer to the first location of *`c`* in *`buffer`*. Otherwise it returns NULL.

## Remarks

`memchr` and `wmemchr` look for the first occurrence of *`c`* in the first *`count`* characters of *`buffer`*. It stops when it finds *`c`* or when it has checked the first *`count`* characters.

In C, these functions take a **`const`** pointer for the first argument. In C++, two overloads are available. The overload taking a pointer to **`const`** returns a pointer to **`const`**; the version that takes a pointer to non-**`const`** returns a pointer to non-**`const`**. The macro `_CRT_CONST_CORRECT_OVERLOADS` is defined if both the **`const`** and non-**`const`** versions of these functions are available. If you require the non-**`const`** behavior for both C++ overloads in C++, define the symbol `_CONST_RETURN`.

## Requirements

| Routine | Required header |
|---|---|
| `memchr` | \<memory.h> or \<string.h> |
| `wmemchr` | \<wchar.h> |

For more information about compatibility, see [Compatibility](../compatibility.md).

## Libraries

All versions of the [C run-time libraries](../crt-library-features.md).

## Example

```C
// crt_memchr.c

#include <memory.h>
#include <stdio.h>

int  ch = 'r';
char str[] =    "lazy";
char string[] = "The quick brown dog jumps over the lazy fox";
char fmt1[] =   "         1         2         3         4         5";
char fmt2[] =   "12345678901234567890123456789012345678901234567890";

int main( void )
{
   char *pdest;
   int result;
   printf( "String to be searched:\n             %s\n", string );
   printf( "             %s\n             %s\n\n", fmt1, fmt2 );

   printf( "Search char: %c\n", ch );
   pdest = memchr( string, ch, sizeof( string ) );
   result = (int)(pdest - string + 1);
   if ( pdest != NULL )
      printf( "Result:      %c found at position %d\n", ch, result );
   else
      printf( "Result:      %c not found\n" );
}
```

### Output

```Output
String to be searched:
             The quick brown dog jumps over the lazy fox
                      1         2         3         4         5
             12345678901234567890123456789012345678901234567890

Search char: r
Result:      r found at position 12
```

## See also

[Buffer manipulation](../buffer-manipulation.md)\
[`_memccpy`](memccpy.md)\
[`memcmp`, `wmemcmp`](memcmp-wmemcmp.md)\
[`memcpy`, `wmemcpy`](memcpy-wmemcpy.md)\
[`memset`, `wmemset`](memset-wmemset.md)\
[`strchr`, `wcschr`, `_mbschr`, `_mbschr_l`](strchr-wcschr-mbschr-mbschr-l.md)
