---
description: "Learn more about: _unlink, _wunlink"
title: "_unlink, _wunlink"
ms.date: "4/2/2020"
api_name: ["_unlink", "_wunlink", "_o__unlink", "_o__wunlink"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["CORECRT_IO/_unlink", "CORECRT_WIO/_wunlink", "TCHAR/_tunlink", "_unlink", "_wunlink", "_tunlink"]
helpviewer_keywords: ["files [C++], deleting", "_wunlink function", "wunlink function", "unlink function", "_unlink function", "tunlink function", "files [C++], removing", "_tunlink function"]
ms.assetid: 5e4f5f1b-1e99-4391-9b18-9ac63c32fae8
---
# `_unlink`, `_wunlink`

Delete a file.

## Syntax

```C
int _unlink(
   const char *filename
);
int _wunlink(
   const wchar_t *filename
);
```

### Parameters

*`filename`*\
Name of file to remove.

## Return value

Each of these functions returns 0 if successful. Otherwise, the function returns -1 and sets `errno` to `EACCES`, which means the path specifies a read-only file or a directory, or to `ENOENT`, which means the file or path isn't found.

For more information about return codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **`_unlink`** function deletes the file specified by *`filename`*. **`_wunlink`** is a wide-character version of **`_unlink`**; the *`filename`* argument to **`_wunlink`** is a wide-character string. These functions behave identically otherwise.

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tunlink` | **`_unlink`** | **`_unlink`** | **`_wunlink`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_unlink`** | \<io.h> and \<stdio.h> |
| **`_wunlink`** | \<io.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Code example

This program uses _unlink to delete CRT_UNLINK.TXT.

```C
// crt_unlink.c

#include <stdio.h>

int main( void )
{
   if( _unlink( "crt_unlink.txt" ) == -1 )
      perror( "Could not delete 'CRT_UNLINK.TXT'" );
   else
      printf( "Deleted 'CRT_UNLINK.TXT'\n" );
}
```

### Input: crt_unlink.txt

```Input
This file will be deleted.
```

### Sample output

```Output
Deleted 'CRT_UNLINK.TXT'
```

## See also

[File handling](../file-handling.md)\
[`_close`](close.md)\
[`remove`, `_wremove`](remove-wremove.md)
