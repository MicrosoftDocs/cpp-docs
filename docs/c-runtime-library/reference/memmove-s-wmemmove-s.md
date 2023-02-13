---
description: "Learn more about: memmove_s, wmemmove_s"
title: "memmove_s, wmemmove_s"
ms.date: "4/2/2020"
api_name: ["wmemmove_s", "memmove_s", "_o_wmemmove_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wmemmove_s", "memmove_s"]
helpviewer_keywords: ["wmemmove_s function", "memmove_s function"]
ms.assetid: a17619e4-1307-4bb0-98c6-77f8c68dab2d
---
# `memmove_s`, `wmemmove_s`

Moves one buffer to another. These functions are versions of [`memmove`, `wmemmove`](memmove-wmemmove.md) with security enhancements as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
errno_t memmove_s(
   void *dest,
   size_t numberOfElements,
   const void *src,
   size_t count
);
errno_t wmemmove_s(
   wchar_t *dest,
   size_t numberOfElements,
   const wchar_t *src,
   size_t count
);
```

### Parameters

*`dest`*\
Destination object.

*`numberOfElements`*\
Size of the destination buffer.

*`src`*\
Source object.

*`count`*\
Number of bytes (**`memmove_s`**) or characters (**`wmemmove_s`**) to copy.

## Return value

Zero if successful; an error code on failure

### Error conditions

| *`dest`* | *`numberOfElements`* | *`src`* | Return value | Contents of *`dest`* |
|---|---|---|---|---|
| `NULL` | any | any | `EINVAL` | not modified |
| any | any | `NULL` | `EINVAL` | not modified |
| any | < *`count`* | any | `ERANGE` | not modified |

## Remarks

Copies *`count`* bytes of characters from *`src`* to *`dest`*. If some portions of the source and the destination regions overlap, **`memmove_s`** ensures that the original source bytes in the overlapping region are copied before being overwritten.

If *`dest`* or if *`src`* is a null pointer, or if the destination string is too small, these functions invoke an invalid parameter handler, as described in [Parameter validation](../parameter-validation.md) . If execution is allowed to continue, these functions return `EINVAL` and set `errno` to `EINVAL`.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`memmove_s`** | \<string.h> |
| **`wmemmove_s`** | \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_memmove_s.c
//
// The program demonstrates the
// memmove_s function which works as expected
// for moving overlapping regions.

#include <stdio.h>
#include <string.h>

int main()
{
   char str[] = "0123456789";

   printf("Before: %s\n", str);

   // Move six bytes from the start of the string
   // to a new position shifted by one byte. To protect against
   // buffer overrun, the secure version of memmove requires the
   // the length of the destination string to be specified.

   memmove_s((str + 1), strnlen(str + 1, 10), str, 6);

   printf_s(" After: %s\n", str);
}
```

### Output

```Output
Before: 0123456789
After: 0012345789
```

## See also

[Buffer manipulation](../buffer-manipulation.md)\
[`_memccpy`](memccpy.md)\
[`memcpy`, `wmemcpy`](memcpy-wmemcpy.md)\
[`strcpy_s`, `wcscpy_s`, `_mbscpy_s`](strcpy-s-wcscpy-s-mbscpy-s.md)\
[`strcpy`, `wcscpy`, `_mbscpy`](strcpy-wcscpy-mbscpy.md)\
[`strncpy_s`, `_strncpy_s_l`, `wcsncpy_s`, `_wcsncpy_s_l`, `_mbsncpy_s`, `_mbsncpy_s_l`](strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md)\
[`strncpy`, `_strncpy_l`, `wcsncpy`, `_wcsncpy_l`, `_mbsncpy`, `_mbsncpy_l`](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)
