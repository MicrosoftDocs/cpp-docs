---
title: "_isatty | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_isatty"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_isatty"]
dev_langs: ["C++"]
helpviewer_keywords: ["isatty function", "character device checking", "_isatty function", "checking character devices"]
ms.assetid: 9f1b2e87-0cd7-4079-b187-f2b7ca15fcbe
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _isatty

Determines whether a file descriptor is associated with a character device.

## Syntax

```C
int _isatty( int fd );
```

### Parameters

*fd*<br/>
File descriptor that refers to the device to be tested.

## Return Value

**_isatty** returns a nonzero value if the descriptor is associated with a character device. Otherwise, **_isatty** returns 0.

## Remarks

The **_isatty** function determines whether *fd* is associated with a character device (a terminal, console, printer, or serial port).

This function validates the *fd* parameter. If *fd* is a bad file pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns 0 and sets **errno** to **EBADF**.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_isatty**|\<io.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_isatty.c
/* This program checks to see whether
* stdout has been redirected to a file.
*/

#include <stdio.h>
#include <io.h>

int main( void )
{
   if( _isatty( _fileno( stdout ) ) )
      printf( "stdout has not been redirected to a file\n" );
   else
      printf( "stdout has been redirected to a file\n");
}
```

### Sample Output

```Output
stdout has not been redirected to a file
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
