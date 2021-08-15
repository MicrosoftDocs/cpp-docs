---
description: "Learn more about: _locking"
title: "_locking"
ms.date: "4/2/2020"
api_name: ["_locking", "_o__locking"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_locking"]
helpviewer_keywords: ["locking function", "bytes [C++], locking file", "files [C++], locking bytes", "files [C++], locking", "_locking function"]
ms.assetid: 099aaac1-d4ca-4827-aed6-24dff9844150
---
# _locking

Locks or unlocks bytes of a file.

## Syntax

```C
int _locking(
   int fd,
   int mode,
   long nbytes
);
```

### Parameters

*fd*<br/>
File descriptor.

*mode*<br/>
Locking action to perform.

*nbytes*<br/>
Number of bytes to lock.

## Return Value

**_locking** returns 0 if successful. A return value of -1 indicates failure, in which case [errno](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) is set to one of the following values.

|errno value|Condition|
|-|-|
| **EACCES** | Locking violation (file already locked or unlocked). |
| **EBADF** | Invalid file descriptor. |
| **EDEADLOCK** | Locking violation. Returned when the **_LK_LOCK** or **_LK_RLCK** flag is specified and the file cannot be locked after 10 attempts. |
| **EINVAL** | An invalid argument was given to **_locking**. |

If the failure is due to a bad parameter, such as an invalid file descriptor, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).

## Remarks

The **_locking** function locks or unlocks *nbytes* bytes of the file specified by *fd*. Locking bytes in a file prevents access to those bytes by other processes. All locking or unlocking begins at the current position of the file pointer and proceeds for the next *nbytes* bytes. It is possible to lock bytes past end of file.

*mode* must be one of the following manifest constants, which are defined in Locking.h.

|*mode* value|Effect|
|-|-|
| **_LK_LOCK** | Locks the specified bytes. If the bytes cannot be locked, the program immediately tries again after 1 second. If, after 10 attempts, the bytes cannot be locked, the constant returns an error. |
| **_LK_NBLCK** | Locks the specified bytes. If the bytes cannot be locked, the constant returns an error. |
| **_LK_NBRLCK** | Same as **_LK_NBLCK**. |
| **_LK_RLCK** | Same as **_LK_LOCK**. |
| **_LK_UNLCK** | Unlocks the specified bytes, which must have been previously locked. |

Multiple regions of a file that do not overlap can be locked. A region being unlocked must have been previously locked. **_locking** does not merge adjacent regions; if two locked regions are adjacent, each region must be unlocked separately. Regions should be locked only briefly and should be unlocked before closing a file or exiting the program.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_locking**|\<io.h> and \<sys/locking.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_locking.c
/* This program opens a file with sharing. It locks
* some bytes before reading them, then unlocks them. Note that the
* program works correctly only if the file exists.
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/locking.h>
#include <share.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <io.h>

int main( void )
{
   int  fh, numread;
   char buffer[40];

   /* Quit if can't open file or system doesn't
    * support sharing.
    */
   errno_t err = _sopen_s( &fh, "crt_locking.txt", _O_RDONLY, _SH_DENYNO,
                          _S_IREAD | _S_IWRITE );
   printf( "%d %d\n", err, fh );
   if( err != 0 )
      exit( 1 );

   /* Lock some bytes and read them. Then unlock. */
   if( _locking( fh, LK_NBLCK, 30L ) != -1 )
   {
      long lseek_ret;
      printf( "No one can change these bytes while I'm reading them\n" );
      numread = _read( fh, buffer, 30 );
      buffer[30] = '\0';
      printf( "%d bytes read: %.30s\n", numread, buffer );
      lseek_ret = _lseek( fh, 0L, SEEK_SET );
      _locking( fh, LK_UNLCK, 30L );
      printf( "Now I'm done. Do what you will with them\n" );
   }
   else
      perror( "Locking failed\n" );

   _close( fh );
}
```

### Input: crt_locking.txt

```Input
The first thirty bytes of this file will be locked.
```

## Sample Output

```Output
No one can change these bytes while I'm reading them
30 bytes read: The first thirty bytes of this
Now I'm done. Do what you will with them
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
