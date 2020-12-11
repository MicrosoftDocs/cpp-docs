---
description: "Learn more about: _memccpy"
title: "_memccpy"
ms.date: "11/04/2016"
api_name: ["_memccpy"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_memccpy"]
helpviewer_keywords: ["_memccpy function", "memccpy function"]
ms.assetid: 9a2337df-6e85-4eba-b247-dd0532f45ddb
---
# _memccpy

Copies characters from a buffer.

## Syntax

```C
void *_memccpy(
   void *dest,
   const void *src,
   int c,
   size_t count
);
```

### Parameters

*dest*<br/>
Pointer to the destination.

*src*<br/>
Pointer to the source.

*c*<br/>
Last character to copy.

*count*<br/>
Number of characters.

## Return Value

If the character *c* is copied, **_memccpy** returns a pointer to the char in *dest* that immediately follows the character. If *c* is not copied, it returns **NULL**.

## Remarks

The **_memccpy** function copies 0 or more characters of *src* to *dest*, halting when the character *c* has been copied or when *count* characters have been copied, whichever comes first.

**Security Note** Make sure that the destination buffer is the same size or larger than the source buffer. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_memccpy**|\<memory.h> or \<string.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_memccpy.c

#include <memory.h>
#include <stdio.h>
#include <string.h>

char string1[60] = "The quick brown dog jumps over the lazy fox";

int main( void )
{
   char buffer[61];
   char *pdest;

   printf( "Function: _memccpy 60 characters or to character 's'\n" );
   printf( "Source: %s\n", string1 );
   pdest = _memccpy( buffer, string1, 's', 60 );
   *pdest = '\0';
   printf( "Result: %s\n", buffer );
   printf( "Length: %d characters\n", strlen( buffer ) );
}
```

### Output

```Output
Function: _memccpy 60 characters or to character 's'
Source: The quick brown dog jumps over the lazy fox
Result: The quick brown dog jumps
Length: 25 characters
```

## See also

[Buffer Manipulation](../../c-runtime-library/buffer-manipulation.md)<br/>
[memchr, wmemchr](memchr-wmemchr.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[memcpy, wmemcpy](memcpy-wmemcpy.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
