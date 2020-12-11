---
description: "Learn more about: _set_fmode"
title: "_set_fmode"
ms.date: "4/2/2020"
api_name: ["_set_fmode", "_o__set_fmode"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_set_fmode", "set_fmode"]
helpviewer_keywords: ["file translation [C++], default mode", "_set_fmode function", "file translation [C++], setting mode", "set_fmode function"]
ms.assetid: f80eb9c7-733b-4652-a9bc-6b3790a35f12
---
# _set_fmode

Sets the default file translation mode for file I/O operations.

## Syntax

```C
errno_t _set_fmode(
   int mode
);
```

### Parameters

*mode*<br/>
The file translation mode desired: **_O_TEXT** or **_O_BINARY**.

## Return Value

Returns zero if successful, an error code on failure. If *mode* is not **_O_TEXT** or **_O_BINARY** or **_O_WTEXT**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns **EINVAL**.

## Remarks

The function sets the [_fmode](../../c-runtime-library/fmode.md) global variable. This variable specifies the default file translation mode for the file I/O operations **_open** and **_pipe**.

**_O_TEXT** and **_O_BINARY** are defined in Fcntl.h. **EINVAL** is defined in Errno.h.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_set_fmode**|\<stdlib.h>|\<fcntl.h>, \<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_set_fmode.c
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>     /* for _O_TEXT and _O_BINARY */
#include <errno.h>     /* for EINVAL */
#include <sys\stat.h>  /* for _S_IWRITE */
#include <share.h>     /* for _SH_DENYNO */

int main()
{
   int mode, fd, ret;
   errno_t err;
   int buf[12] = { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74,
                   75, 76 };
   char * filename = "fmode.out";

   err = _get_fmode(&mode);
   if (err == EINVAL)
   {
      printf( "Invalid parameter: mode\n");
      return 1;
   }
   else
      printf( "Default Mode is %s\n", mode == _O_TEXT ? "text" :
              "binary");

   err = _set_fmode(_O_BINARY);
   if (err == EINVAL)
   {
      printf( "Invalid mode.\n");
      return 1;
   }

   if ( _sopen_s(&fd, filename, _O_RDWR | _O_CREAT, _SH_DENYNO, _S_IWRITE | _S_IREAD) != 0 )
   {
      printf( "Error opening the file %s\n", filename);
      return 1;
   }

   if (ret = _write(fd, buf, 12*sizeof(int)) < 12*sizeof(int))
   {
      printf( "Problem writing to the file %s.\n", filename);
      printf( "Number of bytes written: %d\n", ret);
   }

   if (_close(fd) != 0)
   {
      printf("Error closing the file %s. Error code %d.\n",
             filename, errno);
   }

   system("type fmode.out");
}
```

```Output
Default Mode is binary
A   B   C   D   E   F   G   H   I   J   K   L
```

## See also

[_fmode](../../c-runtime-library/fmode.md)<br/>
[_get_fmode](get-fmode.md)<br/>
[_setmode](setmode.md)<br/>
[Text and Binary Mode File I/O](../../c-runtime-library/text-and-binary-mode-file-i-o.md)<br/>
