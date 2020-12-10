---
description: "Learn more about: _utime, _utime32, _utime64, _wutime, _wutime32, _wutime64"
title: "_utime, _utime32, _utime64, _wutime, _wutime32, _wutime64"
ms.date: "4/2/2020"
api_name: ["_utime64", "_utime", "_wutime", "_wutime64", "_wutime32", "_utime32", "_o__utime32", "_o__utime64", "_o__wutime32", "_o__wutime64"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tutime", "_utime64", "wutime", "utime32", "wutime64", "_utime", "wutime32", "_wutime", "utime", "utime64", "_wutime64", "_utime32", "_tutime64", "_wutime32"]
helpviewer_keywords: ["tutime function", "utime32 function", "utime64 function", "_utime function", "_tutime32 function", "time [C++], file modification", "wutime function", "_wutime function", "_wutime32 function", "_tutime64 function", "_tutime function", "files [C++], modification time", "_wutime64 function", "_utime32 function", "utime function", "_utime64 function", "wutime64 function", "wutime32 function", "tutime64 function", "tutime32 function"]
ms.assetid: 8d482d40-19b9-4591-bfee-5d7f601d1a9e
---
# _utime, _utime32, _utime64, _wutime, _wutime32, _wutime64

Set the file modification time.

## Syntax

```C
int _utime(
   const char *filename,
   struct _utimbuf *times
);
int _utime32(
   const char *filename,
   struct __utimbuf32 *times
);
int _utime64(
   const char *filename,
   struct __utimbuf64 *times
);
int _wutime(
   const wchar_t *filename,
   struct _utimbuf *times
);
int _wutime32(
   const wchar_t *filename,
   struct __utimbuf32 *times
);
int _wutime64(
   const wchar_t *filename,
   struct __utimbuf64 *times
);
```

### Parameters

*filename*<br/>
Pointer to a string that contains the path or filename.

*times*<br/>
Pointer to stored time values.

## Return Value

Each of these functions returns 0 if the file-modification time was changed. A return value of -1 indicates an error. If an invalid parameter is passed, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and **errno** is set to one of the following values:

|errno value|Condition|
|-|-|
| **EACCES** | Path specifies directory or read-only file |
| **EINVAL** | Invalid *times* argument |
| **EMFILE** | Too many open files (the file must be opened to change its modification time) |
| **ENOENT** | Path or filename not found |

See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, return codes.

The date can be changed for a file if the change date is after midnight, January 1, 1970, and before the end date of the function used. **_utime** and **_wutime** use a 64-bit time value, so the end date is 23:59:59, December 31, 3000, UTC. If **_USE_32BIT_TIME_T** is defined to force the old behavior, the end date is 23:59:59 January 18, 2038, UTC. **_utime32** or **_wutime32** use a 32-bit time type regardless of whether **_USE_32BIT_TIME_T** is defined, and always have the earlier end date. **_utime64** or **_wutime64** always use the 64-bit time type, so these functions always support the later end date.

## Remarks

The **_utime** function sets the modification time for the file specified by *filename*. The process must have write access to the file in order to change the time. In the Windows operating system, you can change the access time and the modification time in the **_utimbuf** structure. If *times* is a **NULL** pointer, the modification time is set to the current local time. Otherwise, *times* must point to a structure of type **_utimbuf**, defined in SYS\UTIME.H.

The **_utimbuf** structure stores file access and modification times used by **_utime** to change file-modification dates. The structure has the following fields, which are both of type **time_t**:

| Field |   |
|-------|---|
| **actime** | Time of file access |
| **modtime** | Time of file modification |

Specific versions of the **_utimbuf** structure (**_utimebuf32** and **__utimbuf64**) are defined using the 32-bit and 64-bit versions of the time type. These are used in the 32-bit and 64-bit specific versions of this function. **_utimbuf** itself by default uses a 64-bit time type unless **_USE_32BIT_TIME_T** is defined.

**_utime** is identical to **_futime** except that the *filename* argument of **_utime** is a filename or a path to a file, rather than a file descriptor of an open file.

**_wutime** is a wide-character version of **_utime**; the *filename* argument to **_wutime** is a wide-character string. These functions behave identically otherwise.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tutime**|**_utime**|**_utime**|**_wutime**|
|**_tutime32**|**_utime32**|**_utime32**|**_wutime32**|
|**_tutime64**|**_utime64**|**_utime64**|**_wutime64**|

## Requirements

|Routine|Required headers|Optional headers|
|-------------|----------------------|----------------------|
|**_utime**, **_utime32**, **_utime64**|\<sys/utime.h>|\<errno.h>|
|**_utime64**|\<sys/utime.h>|\<errno.h>|
|**_wutime**|\<utime.h> or \<wchar.h>|\<errno.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

This program uses **_utime** to set the file-modification time to the current time.

```C
// crt_utime.c
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/utime.h>
#include <time.h>

int main( void )
{
   struct tm tma = {0}, tmm = {0};
   struct _utimbuf ut;

   // Fill out the accessed time structure
   tma.tm_hour = 12;
   tma.tm_isdst = 0;
   tma.tm_mday = 15;
   tma.tm_min = 0;
   tma.tm_mon = 0;
   tma.tm_sec = 0;
   tma.tm_year = 103;

   // Fill out the modified time structure
   tmm.tm_hour = 12;
   tmm.tm_isdst = 0;
   tmm.tm_mday = 15;
   tmm.tm_min = 0;
   tmm.tm_mon = 0;
   tmm.tm_sec = 0;
   tmm.tm_year = 102;

   // Convert tm to time_t
   ut.actime = mktime(&tma);
   ut.modtime = mktime(&tmm);

   // Show file time before and after
   system( "dir crt_utime.c" );
   if( _utime( "crt_utime.c", &ut ) == -1 )
      perror( "_utime failed\n" );
   else
      printf( "File time modified\n" );
   system( "dir crt_utime.c" );
}
```

### Sample Output

```Output
Volume in drive C has no label.
Volume Serial Number is 9CAC-DE74

Directory of C:\test

01/09/2003  05:38 PM               935 crt_utime.c
               1 File(s)            935 bytes
               0 Dir(s)  20,742,955,008 bytes free
File time modified
Volume in drive C has no label.
Volume Serial Number is 9CAC-DE74

Directory of C:\test

01/15/2002  12:00 PM               935 crt_utime.c
               1 File(s)            935 bytes
               0 Dir(s)  20,742,955,008 bytes free
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[asctime, _wasctime](asctime-wasctime.md)<br/>
[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](ctime-ctime32-ctime64-wctime-wctime32-wctime64.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_ftime, _ftime32, _ftime64](ftime-ftime32-ftime64.md)<br/>
[_futime, _futime32, _futime64](futime-futime32-futime64.md)<br/>
[gmtime, _gmtime32, _gmtime64](gmtime-gmtime32-gmtime64.md)<br/>
[localtime, _localtime32, _localtime64](localtime-localtime32-localtime64.md)<br/>
[_stat, _wstat Functions](stat-functions.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
