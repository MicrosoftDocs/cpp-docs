---
description: "Learn more about: _makepath, _wmakepath"
title: "_makepath, _wmakepath"
ms.date: "4/2/2020"
api_name: ["_makepath", "_wmakepath", "_o__makepath", "_o__wmakepath"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wmakepath", "_tmakepath", "makepath", "tmakepath", "wmakepath", "_makepath"]
helpviewer_keywords: ["_makepath function", "wmakepath function", "makepath function", "_tmakepath function", "paths", "_wmakepath function", "tmakepath function"]
ms.assetid: 5930b197-a7b8-46eb-8519-2841a58cd026
---
# _makepath, _wmakepath

Create a path name from components. More secure versions of these functions are available; see [_makepath_s, _wmakepath_s](makepath-s-wmakepath-s.md).

## Syntax

```C
void _makepath(
   char *path,
   const char *drive,
   const char *dir,
   const char *fname,
   const char *ext
);
void _wmakepath(
   wchar_t *path,
   const wchar_t *drive,
   const wchar_t *dir,
   const wchar_t *fname,
   const wchar_t *ext
);
```

### Parameters

*path*<br/>
Full path buffer.

*drive*<br/>
Contains a letter (A, B, and so on) corresponding to the desired drive and an optional trailing colon. **_makepath** inserts the colon automatically in the composite path if it is missing. If *drive* is **NULL** or points to an empty string, no drive letter appears in the composite *path* string.

*dir*<br/>
Contains the path of directories, not including the drive designator or the actual file name. The trailing slash is optional, and either a forward slash (/) or a backslash (\\) or both might be used in a single *dir* argument. If no trailing slash (/ or \\) is specified, it is inserted automatically. If *dir* is **NULL** or points to an empty string, no directory path is inserted in the composite *path* string.

*fname*<br/>
Contains the base file name without any file name extensions. If *fname* is **NULL** or points to an empty string, no filename is inserted in the composite *path* string.

*ext*<br/>
Contains the actual file name extension, with or without a leading period (.). **_makepath** inserts the period automatically if it does not appear in *ext*. If *ext* is **NULL** or points to an empty string, no extension is inserted in the composite *path* string.

## Remarks

The **_makepath** function creates a composite path string from individual components, storing the result in *path*. The *path* might include a drive letter, directory path, filename, and filename extension. **_wmakepath** is a wide-character version of **_makepath**; the arguments to **_wmakepath** are wide-character strings. **_wmakepath** and **_makepath** behave identically otherwise.

**Security Note** Use a null-terminated string. To avoid buffer overrun, the null-terminated string must not exceed the size of the *path* buffer. **_makepath** does not ensure that the length of the composite path string does not exceed **_MAX_PATH**. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tmakepath**|**_makepath**|**_makepath**|**_wmakepath**|

The *path* argument must point to an empty buffer large enough to hold the complete path. The composite *path* must be no larger than the **_MAX_PATH** constant, defined in Stdlib.h.

If path is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). In addition, **errno** is set to **EINVAL**. **NULL** values are allowed for all other parameters.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_makepath**|\<stdlib.h>|
|**_wmakepath**|\<stdlib.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_makepath.c
#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char path_buffer[_MAX_PATH];
   char drive[_MAX_DRIVE];
   char dir[_MAX_DIR];
   char fname[_MAX_FNAME];
   char ext[_MAX_EXT];

   _makepath( path_buffer, "c", "\\sample\\crt\\", "makepath", "c" ); // C4996
   // Note: _makepath is deprecated; consider using _makepath_s instead
   printf( "Path created with _makepath: %s\n\n", path_buffer );
   _splitpath( path_buffer, drive, dir, fname, ext ); // C4996
   // Note: _splitpath is deprecated; consider using _splitpath_s instead
   printf( "Path extracted with _splitpath:\n" );
   printf( "   Drive: %s\n", drive );
   printf( "   Dir: %s\n", dir );
   printf( "   Filename: %s\n", fname );
   printf( "   Ext: %s\n", ext );
}
```

```Output
Path created with _makepath: c:\sample\crt\makepath.c

Path extracted with _splitpath:
   Drive: c:
   Dir: \sample\crt\
   Filename: makepath
   Ext: .c
```

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_splitpath, _wsplitpath](splitpath-wsplitpath.md)<br/>
[_makepath_s, _wmakepath_s](makepath-s-wmakepath-s.md)<br/>
