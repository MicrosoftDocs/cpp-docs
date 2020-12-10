---
description: "Learn more about: _setmode"
title: "_setmode"
ms.date: "4/2/2020"
api_name: ["_setmode", "_o__setmode"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_setmode"]
helpviewer_keywords: ["Unicode [C++], console output", "files [C++], modes", "_setmode function", "file translation [C++], setting mode", "files [C++], translation", "setmode function"]
ms.assetid: 996ff7cb-11d1-43f4-9810-f6097182642a
---
# _setmode

Sets the file translation mode.

## Syntax

```C
int _setmode (
   int fd,
   int mode
);
```

### Parameters

*fd*<br/>
File descriptor.

*mode*<br/>
New translation mode.

## Return Value

If successful, returns the previous translation mode.

If invalid parameters are passed to this function, the invalid-parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function returns -1 and sets **errno** to either **EBADF**, which indicates an invalid file descriptor, or **EINVAL**, which indicates an invalid *mode* argument.

For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_setmode** function sets to *mode* the translation mode of the file given by *fd*. Passing **_O_TEXT** as *mode* sets text (that is, translated) mode. Carriage return-line feed (CR-LF) combinations are translated into a single line feed character on input. Line feed characters are translated into CR-LF combinations on output. Passing **_O_BINARY** sets binary (untranslated) mode, in which these translations are suppressed.

You can also pass **_O_U16TEXT**, **_O_U8TEXT**, or **_O_WTEXT** to enable Unicode mode, as demonstrated in the second example later in this document.

> [!CAUTION]
> Unicode mode is for wide print functions (for example, `wprintf`) and is not supported for narrow print functions. Use of a narrow print function on a Unicode mode stream triggers an assert.

**_setmode** is typically used to modify the default translation mode of **stdin** and **stdout**, but you can use it on any file. If you apply **_setmode** to the file descriptor for a stream, call **_setmode** before you perform any input or output operations on the stream.

> [!CAUTION]
> If you write data to a file stream, explicitly flush the code by using [fflush](fflush.md) before you use **_setmode** to change the mode. If you do not flush the code, you might get unexpected behavior. If you have not written data to the stream, you do not have to flush the code.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional Headers|
|-------------|---------------------|----------------------|
|**_setmode**|\<io.h>|\<fcntl.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example: Use _setmode to change stdin

```C
// crt_setmode.c
// This program uses _setmode to change
// stdin from text mode to binary mode.

#include <stdio.h>
#include <fcntl.h>
#include <io.h>

int main( void )
{
   int result;

   // Set "stdin" to have binary mode:
   result = _setmode( _fileno( stdin ), _O_BINARY );
   if( result == -1 )
      perror( "Cannot set mode" );
   else
      printf( "'stdin' successfully changed to binary mode\n" );
}
```

```Output
'stdin' successfully changed to binary mode
```

## Example: Use _setmode to change stdout

```C
// crt_setmodeunicode.c
// This program uses _setmode to change
// stdout to Unicode. Cyrillic and Ideographic
// characters will appear on the console (if
// your console font supports those character sets).

#include <fcntl.h>
#include <io.h>
#include <stdio.h>

int main(void) {
    _setmode(_fileno(stdout), _O_U16TEXT);
    wprintf(L"\x043a\x043e\x0448\x043a\x0430 \x65e5\x672c\x56fd\n");
    return 0;
}
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_set_fmode](set-fmode.md)<br/>
