---
description: "Learn more about: _mkdir, _wmkdir"
title: "_mkdir, _wmkdir"
ms.date: "4/2/2020"
api_name: ["_wmkdir", "_mkdir", "_o__mkdir", "_o__wmkdir"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mkdir", "tmkdir", "_tmkdir", "wmkdir", "_wmkdir"]
helpviewer_keywords: ["_wmkdir function", "folders [C++], creating", "wmkdir function", "directories [C++], creating", "mkdir function", "tmkdir function", "_mkdir function", "_tmkdir function"]
ms.assetid: 7f22d01d-63a5-4712-a6e7-d34878b2d840
---
# _mkdir, _wmkdir

Creates a new directory.

## Syntax

```C

int _mkdir(
   const char *dirname
);
int _wmkdir(
   const wchar_t *dirname
);
```

### Parameters

*dirname*<br/>
Path for a new directory.

## Return Value

Each of these functions returns the value 0 if the new directory was created. On an error, the function returns -1 and sets **errno** as follows.

**EEXIST** Directory was not created because *dirname* is the name of an existing file, directory, or device.

**ENOENT** Path was not found.

For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **_mkdir** function creates a new directory with the specified *dirname.* **_mkdir** can create only one new directory per call, so only the last component of *dirname* can name a new directory. **_mkdir** does not translate path delimiters. In Windows NT, both the backslash ( \\) and the forward slash (/ ) are valid path delimiters in character strings in run-time routines.

**_wmkdir** is a wide-character version of **_mkdir**; the *dirname* argument to **_wmkdir** is a wide-character string. **_wmkdir** and **_mkdir** behave identically otherwise.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tmkdir**|**_mkdir**|**_mkdir**|**_wmkdir**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mkdir**|\<direct.h>|
|**_wmkdir**|\<direct.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_makedir.c

#include <direct.h>
#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   if( _mkdir( "\\testtmp" ) == 0 )
   {
      printf( "Directory '\\testtmp' was successfully created\n" );
      system( "dir \\testtmp" );
      if( _rmdir( "\\testtmp" ) == 0 )
        printf( "Directory '\\testtmp' was successfully removed\n"  );
      else
         printf( "Problem removing directory '\\testtmp'\n" );
   }
   else
      printf( "Problem creating directory '\\testtmp'\n" );
}
```

### Sample Output

```Output
Directory '\testtmp' was successfully created
Volume in drive C has no label.
Volume Serial Number is E078-087A

Directory of C:\testtmp

02/12/2002  09:56a      <DIR>          .
02/12/2002  09:56a      <DIR>          ..
               0 File(s)              0 bytes
               2 Dir(s)  15,498,690,560 bytes free
Directory '\testtmp' was successfully removed
```

## See also

[Directory Control](../../c-runtime-library/directory-control.md)<br/>
[_chdir, _wchdir](chdir-wchdir.md)<br/>
[_rmdir, _wrmdir](rmdir-wrmdir.md)<br/>
