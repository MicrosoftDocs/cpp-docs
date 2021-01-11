---
description: "Learn more about: rename, _wrename"
title: "rename, _wrename"
ms.date: "4/2/2020"
api_name: ["rename", "_wrename", "_o__wrename", "_o_rename"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wrename", "_trename", "Rename"]
helpviewer_keywords: ["trename function", "directories [C++], renaming", "renaming directories", "names [C++], changing file", "_trename function", "rename function", "wrename function", "files [C++], renaming", "_wrename function", "names [C++], changing directory", "renaming files"]
ms.assetid: 9f0a6103-26a2-4dda-b14b-79a48946266a
---
# rename, _wrename

Rename a file or directory.

## Syntax

```C
int rename(
   const char *oldname,
   const char *newname
);
int _wrename(
   const wchar_t *oldname,
   const wchar_t *newname
);
```

### Parameters

*oldname*<br/>
Pointer to old name.

*newname*<br/>
Pointer to new name.

## Return Value

Each of these functions returns 0 if it is successful. On an error, the function returns a nonzero value and sets **errno** to one of the following values:

|errno value|Condition|
|-|-|
| **EACCES** | File or directory specified by *newname* already exists or could not be created (invalid path); or *oldname* is a directory and *newname* specifies a different path. |
| **ENOENT** | File or path specified by *oldname* not found. |
| **EINVAL** | Name contains invalid characters. |

For other possible return values, see [_doserrno, _errno, syserrlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **rename** function renames the file or directory specified by *oldname* to the name given by *newname*. The old name must be the path of an existing file or directory. The new name must not be the name of an existing file or directory. You can use **rename** to move a file from one directory or device to another by giving a different path in the *newname* argument. However, you cannot use **rename** to move a directory. Directories can be renamed, but not moved.

**_wrename** is a wide-character version of **_rename**; the arguments to **_wrename** are wide-character strings. **_wrename** and **_rename** behave identically otherwise.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_trename**|**rename**|**rename**|**_wrename**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**rename**|\<io.h> or \<stdio.h>|
|**_wrename**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_renamer.c
/* This program attempts to rename a file named
* CRT_RENAMER.OBJ to CRT_RENAMER.JBO. For this operation
* to succeed, a file named CRT_RENAMER.OBJ must exist and
* a file named CRT_RENAMER.JBO must not exist.
*/

#include <stdio.h>

int main( void )
{
   int  result;
   char old[] = "CRT_RENAMER.OBJ", new[] = "CRT_RENAMER.JBO";

   /* Attempt to rename file: */
   result = rename( old, new );
   if( result != 0 )
      printf( "Could not rename '%s'\n", old );
   else
      printf( "File '%s' renamed to '%s'\n", old, new );
}
```

### Output

```Output
File 'CRT_RENAMER.OBJ' renamed to 'CRT_RENAMER.JBO'
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
