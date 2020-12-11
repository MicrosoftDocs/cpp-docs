---
description: "Learn more about: _swab"
title: "_swab"
ms.date: "4/2/2020"
api_name: ["_swab", "stdlib/_swab", "_o__swab"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_swab", "stdlib/_swab"]
helpviewer_keywords: ["_swab function", "swapping bytes", "swab function", "bytes, swapping"]
ms.assetid: 017142f2-050c-4f6a-8b49-6b094f58ec94
---
# _swab

Swaps bytes.

## Syntax

```C
void _swab(
   char *src,
   char *dest,
   int n
);
```

## Parameters

*src*<br/>
Data to be copied and swapped.

*dest*<br/>
Storage location for swapped data.

*n*<br/>
Number of bytes to be copied and swapped.

## Return value

The **swab** function does not return a value. The function sets **errno** to **EINVAL** if either the *src* or *dest* pointer is null or *n* is less than zero, and the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).

See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on this and other return codes.

## Remarks

If *n* is even, the **_swab** function copies *n* bytes from *src*, swaps each pair of adjacent bytes, and stores the result at *dest*. If *n* is odd, **_swab** copies and swaps the first *n*-1 bytes of *src*, and the final byte is not copied. The **_swab** function is typically used to prepare binary data for transfer to a machine that uses a different byte order.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_swab**|C: \<stdlib.h> C++: \<cstdlib> or \<stdlib.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_swab.c

#include <stdlib.h>
#include <stdio.h>

char from[] = "BADCFEHGJILKNMPORQTSVUXWZY";
char to[] =   "...........................";

int main()
{
    printf("Before: %s  %d bytes\n        %s\n\n", from, sizeof(from), to);
    _swab(from, to, sizeof(from));
    printf("After:  %s\n        %s\n\n", from, to);
}
```

```Output
Before: BADCFEHGJILKNMPORQTSVUXWZY  27 bytes
        ...........................

After:  BADCFEHGJILKNMPORQTSVUXWZY
        ABCDEFGHIJKLMNOPQRSTUVWXYZ.
```

## See also

[Buffer Manipulation](../../c-runtime-library/buffer-manipulation.md)<br/>
