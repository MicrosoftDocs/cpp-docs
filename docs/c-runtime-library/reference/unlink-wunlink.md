---
title: "_unlink, _wunlink | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_unlink", "_wunlink"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_tunlink", "_unlink", "wunlink", "_wunlink"]
dev_langs: ["C++"]
helpviewer_keywords: ["files [C++], deleting", "_wunlink function", "wunlink function", "unlink function", "_unlink function", "tunlink function", "files [C++], removing", "_tunlink function"]
ms.assetid: 5e4f5f1b-1e99-4391-9b18-9ac63c32fae8
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _unlink, _wunlink

Delete a file.

## Syntax

```C
int _unlink(
   const char *filename
);
int _wunlink(
   const wchar_t *filename
);
```

### Parameters

*filename*<br/>
Name of file to remove.

## Return Value

Each of these functions returns 0 if successful. Otherwise, the function returns -1 and sets **errno** to **EACCES**, which means the path specifies a read-only file, or to **ENOENT**, which means the file or path is not found or the path specified a directory.

See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, return codes.

## Remarks

The **_unlink** function deletes the file specified by *filename*. **_wunlink** is a wide-character version of **_unlink**; the *filename* argument to **_wunlink** is a wide-character string. These functions behave identically otherwise.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tunlink**|**_unlink**|**_unlink**|**_wunlink**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_unlink**|\<io.h> and \<stdio.h>|
|**_wunlink**|\<io.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Code Example

This program uses _unlink to delete CRT_UNLINK.TXT.

```C
// crt_unlink.c

#include <stdio.h>

int main( void )
{
   if( _unlink( "crt_unlink.txt" ) == -1 )
      perror( "Could not delete 'CRT_UNLINK.TXT'" );
   else
      printf( "Deleted 'CRT_UNLINK.TXT'\n" );
}
```

### Input: crt_unlink.txt

```Input
This file will be deleted.
```

### Sample Output

```Output
Deleted 'CRT_UNLINK.TXT'
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_close](close.md)<br/>
[remove, _wremove](remove-wremove.md)<br/>
