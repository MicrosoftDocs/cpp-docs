---
description: "Learn more about: memmove, wmemmove"
title: "memmove, wmemmove"
ms.date: "1/14/2021"
api_name: ["memmove", "wmemmove"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["memmove", "wmemmove"]
helpviewer_keywords: ["wmemmove function", "memmove function"]
---
# `memmove`, `wmemmove`

Moves one buffer to another. More secure versions of these functions are available; see [`memmove_s`, `wmemmove_s`](memmove-s-wmemmove-s.md).

## Syntax

```C
void *memmove(
   void *dest,
   const void *src,
   size_t count
);
wchar_t *wmemmove(
   wchar_t *dest,
   const wchar_t *src,
   size_t count
);
```

### Parameters

*`dest`*\
Destination object.

*`src`*\
Source object.

*`count`*\
Number of bytes (**`memmove`**) or characters (**`wmemmove`**) to copy.

## Return value

The value of *`dest`*.

## Remarks

Copies *`count`* bytes (**`memmove`**) or characters (**`wmemmove`**) from *`src`* to *`dest`*. If some portions of the source and the destination regions overlap, both functions ensure that the original source bytes in the overlapping region are copied before being overwritten.

**Security Note** Make sure that the destination buffer is the same size or larger than the source buffer. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

The **`memmove`** and **`wmemmove`** functions will only be deprecated if the constant `_CRT_SECURE_DEPRECATE_MEMORY` is defined before the inclusion statement in order for the functions to be deprecated, such as in the example below:

```C
#define _CRT_SECURE_DEPRECATE_MEMORY
#include <string.h>
```

or

```C
#define _CRT_SECURE_DEPRECATE_MEMORY
#include <wchar.h>
```

## Requirements

| Routine | Required header |
|---|---|
| **`memmove`** | `<string.h>` |
| **`wmemmove`** | `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_memcpy.c
// Illustrate overlapping copy: memmove
// always handles it correctly; memcpy may handle
// it correctly.
//

#include <memory.h>
#include <string.h>
#include <stdio.h>

char str1[7] = "aabbcc";

int main( void )
{
   printf( "The string: %s\n", str1 );
   memcpy( str1 + 2, str1, 4 );
   printf( "New string: %s\n", str1 );

   strcpy_s( str1, sizeof(str1), "aabbcc" );   // reset string

   printf( "The string: %s\n", str1 );
   memmove( str1 + 2, str1, 4 );
   printf( "New string: %s\n", str1 );
}
```

```Output
The string: aabbcc
New string: aaaabb
The string: aabbcc
New string: aaaabb
```

## See also

[Buffer manipulation](../buffer-manipulation.md)\
[`_memccpy`](memccpy.md)\
[`memcpy`, `wmemcpy`](memcpy-wmemcpy.md)\
[`strcpy`, `wcscpy`, `_mbscpy`](strcpy-wcscpy-mbscpy.md)\
[`strncpy`, `_strncpy_l`, `wcsncpy`, `_wcsncpy_l`, `_mbsncpy`, `_mbsncpy_l`](strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md)\
