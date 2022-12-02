---
description: "Learn more about: fputs, fputws"
title: "fputs, fputws"
ms.date: 03/02/2021
api_name: ["fputs", "fputws", "_o_fputs", "_o_fputws"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fputs", "fputws", "_fputts"]
helpviewer_keywords: ["streams, writing strings to", "fputws function", "_fputts function", "fputs function", "fputts function"]
---
# `fputs`, `fputws`

Writes a string to a stream.

## Syntax

```C
int fputs(
   const char *str,
   FILE *stream
);
int fputws(
   const wchar_t *str,
   FILE *stream
);
```

### Parameters

*`str`*\
Output string.

*`stream`*\
Pointer to `FILE` structure.

## Return value

Each of these functions returns a nonnegative value if it's successful. On an error, **`fputs`** and **`fputws`** return `EOF`. If *`str`* or *`stream`* is a null pointer, these functions invoke the invalid parameter handler, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions set `errno` to `EINVAL` and then return `EOF`.

For more information on error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions copies *`str`* to the output *`stream`* at the current position. **`fputws`** copies the wide-character argument *`str`* to *`stream`* as a multibyte-character string or a wide-character string when *`stream`* is opened in text mode or binary mode, respectively. Neither function copies the terminating null character.

The two functions behave identically if the stream is opened in ANSI mode. **`fputs`** doesn't currently support output into a UNICODE stream.

By default, this function's global state is scoped to the application. To change it, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_fputts`** | **`fputs`** | **`fputs`** | **`fputws`** |

## Requirements

| Function | Required header |
|---|---|
| **`fputs`** | \<stdio.h> |
| **`fputws`** | \<stdio.h> or \<wchar.h> |

The console isn't supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console—**`stdin`**, **`stdout`**, and **`stderr`**—must be redirected before C runtime functions can use them in UWP apps. For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_fputs.c
// This program uses fputs to write
// a single line to the stdout stream.

#include <stdio.h>

int main( void )
{
   fputs( "Hello world from fputs.\n", stdout );
}
```

```Output
Hello world from fputs.
```

## See also

[Stream I/O](../stream-i-o.md)\
[`fgets`, `fgetws`](fgets-fgetws.md)\
[`gets`, `_getws`](../gets-getws.md)\
[`puts`, `_putws`](puts-putws.md)
