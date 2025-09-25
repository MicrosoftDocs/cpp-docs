---
description: "Learn more about: gets, _getws"
title: "gets, _getws"
ms.date: "4/2/2020"
api_name: ["_getws", "gets", "_o__getws", "_o_gets"]
api_location: ["msvcr80.dll", "msvcr90.dll", "msvcr120.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcrt.dll", "msvcr100.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_getts", "gets", "_getws"]
helpviewer_keywords: ["getws function", "getts function", "_getws function", "lines, getting", "streams, getting lines", "_getts function", "gets function", "standard input, reading from"]
---
# `gets`, `_getws`

Gets a line from the **`stdin`** stream. More secure versions of these functions are available; see [`gets_s`, `_getws_s`](./reference/gets-s-getws-s.md).

> [!IMPORTANT]
> These functions are obsolete. Beginning in Visual Studio 2015, they are not available in the CRT. The secure versions of these functions, `gets_s` and `_getws_s`, are still available. For information on these alternative functions, see [`gets_s`, `_getws_s`](./reference/gets-s-getws-s.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *gets(
   char *buffer
);
wchar_t *_getws(
   wchar_t *buffer
);
template <size_t size>
char *gets(
   char (&buffer)[size]
); // C++ only
template <size_t size>
wchar_t *_getws(
   wchar_t (&buffer)[size]
); // C++ only
```

### Parameters

*`buffer`*\
Storage location for input string.

## Return value

Returns its argument if successful. A `NULL` pointer indicates an error or end-of-file condition. Use [`ferror`](./reference/ferror.md) or [`feof`](./reference/feof.md) to determine which one has occurred. If *`buffer`* is `NULL`, these functions invoke an invalid parameter handler, as described in [Parameter validation](./parameter-validation.md). If execution is allowed to continue, these functions return `NULL` and set `errno` to `EINVAL`.

## Remarks

The **`gets`** function reads a line from the standard input stream **`stdin`** and stores it in *`buffer`*. The line consists of all characters up to and including the first newline character ('\n'). **`gets`** then replaces the newline character with a null character ('\0') before returning the line. In contrast, the `fgets` function retains the newline character. **`_getws`** is a wide-character version of **`gets`**; its argument and return value are wide-character strings.

> [!IMPORTANT]
> Because there is no way to limit the number of characters read by **`gets`**, untrusted input can easily cause buffer overruns. Use `fgets` instead.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure template overloads](./secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](global-state.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_getts` | **`gets`** | **`gets`** | **`_getws`** |

## Requirements

| Routine | Required header |
|---|---|
| **`gets`** | `<stdio.h>` |
| **`_getws`** | `<stdio.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](./compatibility.md).

## Example

```c
// crt_gets.c
// compile with: /WX /W3

#include <stdio.h>

int main( void )
{
   char line[21]; // room for 20 chars + '\0'
   gets( line );  // C4996
   // Danger: No way to limit input to 20 chars.
   // Consider using gets_s instead.
   printf( "The line entered was: %s\n", line );
}
```

Input longer than 20 characters will overrun the line buffer and almost certainly cause the program to crash.

```Output

Hello there!The line entered was: Hello there!
```

## See also

[Stream I/O](./stream-i-o.md)\
[`fgets`, `fgetws`](./reference/fgets-fgetws.md)\
[`fputs`, `fputws`](./reference/fputs-fputws.md)\
[`puts`, `_putws`](./reference/puts-putws.md)
