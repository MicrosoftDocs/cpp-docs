---
description: "Learn more about: _chmod, _wchmod"
title: "_chmod, _wchmod"
ms.date: "4/2/2020"
api_name: ["_chmod", "_wchmod", "_o__chmod", "_o__wchmod"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_chmod", "_wchmod", "wchmod"]
helpviewer_keywords: ["_chmod function", "wchmod function", "file permissions [C++]", "chmod function", "files [C++], changing permissions", "_wchmod function"]
ms.assetid: 92f7cb86-b3b0-4232-a599-b8c04a2f2c19
---
# _chmod, _wchmod

Changes the file-permission settings.

## Syntax

```C
int _chmod( const char *filename, int pmode );
int _wchmod( const wchar_t *filename, int pmode );
```

### Parameters

*filename*<br/>
Name of the existing file.

*pmode*<br/>
Permission setting for the file.

## Return Value

These functions return 0 if the permission setting is successfully changed. A return value of -1 indicates failure. If the specified file could not be found, **errno** is set to **ENOENT**; if a parameter is invalid, **errno** is set to **EINVAL**.

## Remarks

The **_chmod** function changes the permission setting of the file specified by *filename*. The permission setting controls the read and write access to the file. The integer expression *pmode* contains one or both of the following manifest constants, defined in SYS\Stat.h.

| *pmode* | Meaning |
|-|-|
| **\_S\_IREAD** | Only reading permitted. |
| **\_S\_IWRITE** | Writing permitted. (In effect, permits reading and writing.) |
| **\_S\_IREAD** &#124; **\_S\_IWRITE** | Reading and writing permitted. |

When both constants are given, they are joined with the bitwise or operator (**\|**). If write permission is not given, the file is read-only. Note that all files are always readable; it is not possible to give write-only permission. Thus, the modes **_S_IWRITE** and **_S_IREAD** \| **_S_IWRITE** are equivalent.

**_wchmod** is a wide-character version of **_chmod**; the *filename* argument to **_wchmod** is a wide-character string. **_wchmod** and **_chmod** behave identically otherwise.

This function validates its parameters. If *pmode* is not a combination of one of the manifest constants or incorporates an alternate set of constants, the function simply ignores those. If *filename* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns -1.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tchmod**|**_chmod**|**_chmod**|**_wchmod**|

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_chmod**|\<io.h>|\<sys/types.h>, \<sys/stat.h>, \<errno.h>|
|**_wchmod**|\<io.h> or \<wchar.h>|\<sys/types.h>, \<sys/stat.h>, \<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_chmod.c
// This program uses _chmod to
// change the mode of a file to read-only.
// It then attempts to modify the file.
//

#include <sys/types.h>
#include <sys/stat.h>
#include <io.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

// Change the mode and report error or success
void set_mode_and_report(char * filename, int mask)
{
   // Check for failure
   if( _chmod( filename, mask ) == -1 )
   {
      // Determine cause of failure and report.
      switch (errno)
      {
         case EINVAL:
            fprintf( stderr, "Invalid parameter to chmod.\n");
            break;
         case ENOENT:
            fprintf( stderr, "File %s not found\n", filename );
            break;
         default:
            // Should never be reached
            fprintf( stderr, "Unexpected error in chmod.\n" );
       }
   }
   else
   {
      if (mask == _S_IREAD)
        printf( "Mode set to read-only\n" );
      else if (mask & _S_IWRITE)
        printf( "Mode set to read/write\n" );
   }
   fflush(stderr);
}

int main( void )
{

   // Create or append to a file.
   system( "echo /* End of file */ >> crt_chmod.c_input" );

   // Set file mode to read-only:
   set_mode_and_report("crt_chmod.c_input ", _S_IREAD );

   system( "echo /* End of file */ >> crt_chmod.c_input " );

   // Change back to read/write:
   set_mode_and_report("crt_chmod.c_input ", _S_IWRITE );

   system( "echo /* End of file */ >> crt_chmod.c_input " );
}
```

```Output

A line of text.
```

```Output

      A line of text.Mode set to read-only
Access is denied.
Mode set to read/write
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_access, _waccess](access-waccess.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_fstat, _fstat32, _fstat64, _fstati64, _fstat32i64, _fstat64i32](fstat-fstat32-fstat64-fstati64-fstat32i64-fstat64i32.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_stat, _wstat Functions](stat-functions.md)<br/>
