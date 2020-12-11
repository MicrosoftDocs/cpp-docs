---
description: "Learn more about: perror, _wperror"
title: "perror, _wperror"
ms.date: "4/2/2020"
api_name: ["_wperror", "perror", "_o__wperror"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wperror", "_tperror", "perror"]
helpviewer_keywords: ["_tperror function", "tperror function", "wperror function", "error messages, printing", "printing error messages", "_wperror function", "perror function"]
ms.assetid: 34fce792-16fd-4673-9849-cd88b54b6cd5
---
# perror, _wperror

Print an error message.

## Syntax

```C
void perror(
   const char *message
);
void _wperror(
   const wchar_t *message
);
```

### Parameters

*message*<br/>
String message to print.

## Remarks

The **perror** function prints an error message to **stderr**. **_wperror** is a wide-character version of **_perror**; the *message* argument to **_wperror** is a wide-character string. **_wperror** and **_perror** behave identically otherwise.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tperror**|**perror**|**perror**|**_wperror**|

*message* is printed first, followed by a colon, then by the system error message for the last library call that produced the error, and finally by a newline character. If *message* is a null pointer or a pointer to a null string, **perror** prints only the system error message.

The error number is stored in the variable [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) (defined in ERRNO.H). The system error messages are accessed through the variable [_sys_errlist](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md), which is an array of messages ordered by error number. **perror** prints the appropriate error message using the **errno** value as an index to **_sys_errlist**. The value of the variable [_sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) is defined as the maximum number of elements in the **_sys_errlist** array.

For accurate results, call **perror** immediately after a library routine returns with an error. Otherwise, subsequent calls can overwrite the **errno** value.

In the Windows operating system, some **errno** values listed in ERRNO.H are unused. These values are reserved for use by the UNIX operating system. See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for a listing of **errno** values used by the Windows operating system. **perror** prints an empty string for any **errno** value not used by these platforms.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**perror**|\<stdio.h> or \<stdlib.h>|
|**_wperror**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_perror.c
// compile with: /W3
/* This program attempts to open a file named
* NOSUCHF.ILE. Because this file probably doesn't exist,
* an error message is displayed. The same message is
* created using perror, strerror, and _strerror.
*/

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <share.h>

int main( void )
{
   int  fh;

   if( _sopen_s( &fh, "NOSUCHF.ILE", _O_RDONLY, _SH_DENYNO, 0 ) != 0 )
   {
      /* Three ways to create error message: */
      perror( "perror says open failed" );
      printf( "strerror says open failed: %s\n",
         strerror( errno ) ); // C4996
      printf( _strerror( "_strerror says open failed" ) ); // C4996
      // Note: strerror and _strerror are deprecated; consider
      // using strerror_s and _strerror_s instead.
   }
   else
   {
      printf( "open succeeded on input file\n" );
      _close( fh );
   }
}
```

```Output
perror says open failed: No such file or directory
strerror says open failed: No such file or directory
_strerror says open failed: No such file or directory
```

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[clearerr](clearerr.md)<br/>
[ferror](ferror.md)<br/>
[strerror, _strerror, _wcserror, \__wcserror](strerror-strerror-wcserror-wcserror.md)<br/>
