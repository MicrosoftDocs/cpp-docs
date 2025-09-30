---
title: "_getdrive"
description: "Learn more about: _getdrive"
ms.date: 4/2/2020
api_name: ["_getdrive", "_o__getdrive"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_getdrive", "getdrive"]
helpviewer_keywords: ["current disk drive", "getdrive function", "disk drives", "_getdrive function"]
---
# `_getdrive`

Gets the current disk drive.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _getdrive( void );
```

## Return value

Returns the current (default) drive (1=A, 2=B, and so on). A return value of zero means that the current path doesn't start with a letter drive name, such as a UNC path. Or, it means that an internal buffer allocation failed. If an internal allocation fails, `errno` is set to ENOMEM.

## Remarks

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

## Requirements

| Routine | Required header |
|---|---|
| **`_getdrive`** | \<direct.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_getdrive.c
// Illustrates drive functions including:
//    _getdrive       _chdrive        _getdcwd
//

#include <stdio.h>
#include <direct.h>
#include <stdlib.h>
#include <ctype.h>

int main( void )
{
   int ch, drive, curdrive;
   static char path[_MAX_PATH];

   // Save current drive.
   curdrive = _getdrive();

   printf( "Available drives are:\n" );

   // If we can switch to the drive, it exists.
   for( drive = 1; drive <= 26; drive++ )
   {
      if( !_chdrive( drive ) )
      {
         printf( "%c:", drive + 'A' - 1 );
         if( _getdcwd( drive, path, _MAX_PATH ) != NULL )
            printf( " (Current directory is %s)", path );
         putchar( '\n' );
      }
   }

   // Restore original drive.
   _chdrive( curdrive );
}
```

```Output
Available drives are:
A: (Current directory is A:\)
C: (Current directory is C:\)
E: (Current directory is E:\testdir\bin)
F: (Current directory is F:\)
G: (Current directory is G:\)
```

## See also

[Directory control](../directory-control.md)\
[`_chdrive`](chdrive.md)\
[`_getcwd`, `_wgetcwd`](getcwd-wgetcwd.md)\
[`_getdcwd`, `_wgetdcwd`](getdcwd-wgetdcwd.md)
