---
description: "Learn more about: remove, _wremove"
title: "remove, _wremove"
ms.date: "4/2/2020"
api_name: ["_wremove", "remove", "_o__wremove", "_o_remove"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["remove", "_wremove", "_tremove"]
helpviewer_keywords: ["tremove function", "_wremove function", "files [C++], deleting", "_tremove function", "files [C++], removing", "wremove function", "remove function"]
ms.assetid: b6345ec3-3289-4645-93a4-28b9e478cc19
---
# remove, _wremove

Delete a file.

## Syntax

```C
int remove(
   const char *path
);
int _wremove(
   const wchar_t *path
);
```

### Parameters

*path*<br/>
Path of file to be removed.

## Return Value

Each of these functions returns 0 if the file is successfully deleted. Otherwise, it returns -1 and sets **errno** either to **EACCES** to indicate that the path specifies a read-only file, specifies a directory, or the file is open, or to **ENOENT** to indicate that the filename or path was not found.

See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these and other return codes.

## Remarks

The **remove** function deletes the file specified by *path.* **_wremove** is a wide-character version of **_remove**; the *path* argument to **_wremove** is a wide-character string. **_wremove** and **_remove** behave identically otherwise. All handles to a file must be closed before it can be deleted.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tremove**|**remove**|**remove**|**_wremove**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**remove**|\<stdio.h> or \<io.h>|
|**_wremove**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_remove.c
/* This program uses remove to delete crt_remove.txt */

#include <stdio.h>

int main( void )
{
   if( remove( "crt_remove.txt" ) == -1 )
      perror( "Could not delete 'CRT_REMOVE.TXT'" );
   else
      printf( "Deleted 'CRT_REMOVE.TXT'\n" );
}
```

### Input: crt_remove.txt

```Input
This file will be deleted.
```

### Sample Output

```Output
Deleted 'CRT_REMOVE.TXT'
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_unlink, _wunlink](unlink-wunlink.md)<br/>
