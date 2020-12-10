---
description: "Learn more about: memcpy_s, wmemcpy_s"
title: "memcpy_s, wmemcpy_s"
ms.date: "4/2/2020"
api_name: ["memcpy_s", "wmemcpy_s", "_o_memcpy_s", "_o_wmemcpy_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wmemcpy_s", "memcpy_s"]
helpviewer_keywords: ["memcpy_s function", "wmemcpy_s function"]
ms.assetid: 5504e20a-83d9-4063-91fc-3f55f7dabe99
---
# memcpy_s, wmemcpy_s

Copies bytes between buffers. These are versions of [memcpy, wmemcpy](memcpy-wmemcpy.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t memcpy_s(
   void *dest,
   size_t destSize,
   const void *src,
   size_t count
);
errno_t wmemcpy_s(
   wchar_t *dest,
   size_t destSize,
   const wchar_t *src,
   size_t count
);
```

### Parameters

*dest*<br/>
New buffer.

*destSize*<br/>
Size of the destination buffer, in bytes for memcpy_s and wide characters (wchar_t) for wmemcpy_s.

*src*<br/>
Buffer to copy from.

*count*<br/>
Number of characters to copy.

## Return Value

Zero if successful; an error code on failure.

### Error Conditions

|*dest*|*destSize*|*src*|*count*|Return value|Contents of *dest*|
|------------|----------------|-----------|---|------------------|------------------------|
|any|any|any|0|0|Not modified|
|**NULL**|any|any|non-zero|**EINVAL**|Not modified|
|any|any|**NULL**|non-zero|**EINVAL**|*dest* is zeroed out|
|any|< *count*|any|non-zero|**ERANGE**|*dest* is zeroed out|

## Remarks

**memcpy_s** copies *count* bytes from *src* to *dest*; **wmemcpy_s** copies *count* wide characters (two bytes). If the source and destination overlap, the behavior of **memcpy_s** is undefined. Use **memmove_s** to handle overlapping regions.

These functions validate their parameters. If *count* is non-zero and *dest* or *src* is a null pointer, or *destSize* is smaller than *count*, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **EINVAL** or **ERANGE** and set **errno** to the return value.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**memcpy_s**|\<memory.h> or \<string.h>|
|**wmemcpy_s**|\<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_memcpy_s.c
// Copy memory in a more secure way.

#include <memory.h>
#include <stdio.h>

int main()
{
   int a1[10], a2[100], i;
   errno_t err;

   // Populate a2 with squares of integers
   for (i = 0; i < 100; i++)
   {
      a2[i] = i*i;
   }

   // Tell memcpy_s to copy 10 ints (40 bytes), giving
   // the size of the a1 array (also 40 bytes).
   err = memcpy_s(a1, sizeof(a1), a2, 10 * sizeof (int) );
   if (err)
   {
      printf("Error executing memcpy_s.\n");
   }
   else
   {
     for (i = 0; i < 10; i++)
       printf("%d ", a1[i]);
   }
   printf("\n");
}
```

```Output
0 1 4 9 16 25 36 49 64 81
```

## See also

[Buffer Manipulation](../../c-runtime-library/buffer-manipulation.md)<br/>
[_memccpy](memccpy.md)<br/>
[memchr, wmemchr](memchr-wmemchr.md)<br/>
[memcmp, wmemcmp](memcmp-wmemcmp.md)<br/>
[memmove, wmemmove](memmove-wmemmove.md)<br/>
[memset, wmemset](memset-wmemset.md)<br/>
[strcpy, wcscpy, _mbscpy](strcpy-wcscpy-mbscpy.md)<br/>
[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)<br/>
[strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)<br/>
