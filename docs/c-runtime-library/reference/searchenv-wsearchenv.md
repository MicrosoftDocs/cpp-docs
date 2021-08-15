---
description: "Learn more about: _searchenv, _wsearchenv"
title: "_searchenv, _wsearchenv"
ms.date: "4/2/2020"
api_name: ["_searchenv", "_wsearchenv", "_o__searchenv", "_o__wsearchenv"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-environment-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wsearchenv", "_tsearchenv", "wsearchenv", "_searchenv", "searchenv"]
helpviewer_keywords: ["_wsearchenv function", "files [C++], finding", "_searchenv function", "tsearchenv function", "environment paths, searching for files", "_tsearchenv function", "wsearchenv function", "searchenv function", "environment paths"]
ms.assetid: 9c944a27-d326-409b-aee6-410e8762d9d3
---
# _searchenv, _wsearchenv

Uses environment paths to search for a file. More secure versions of these functions are available; see [_searchenv_s, _wsearchenv_s](searchenv-s-wsearchenv-s.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
void _searchenv(
   const char *filename,
   const char *varname,
   char *pathname
);
void _wsearchenv(
   const wchar_t *filename,
   const wchar_t *varname,
   wchar_t *pathname
);
template <size_t size>
void _searchenv(
   const char *filename,
   const char *varname,
   char (&pathname)[size]
); // C++ only
template <size_t size>
void _wsearchenv(
   const wchar_t *filename,
   const wchar_t *varname,
   wchar_t (&pathname)[size]
); // C++ only
```

### Parameters

*filename*<br/>
Name of the file to search for.

*varname*<br/>
Environment to search.

*pathname*<br/>
Buffer to store the complete path.

## Remarks

The **_searchenv** routine searches for the target file in the specified domain. The *varname* variable can be any environment or user-defined variable—for example, **PATH**, **LIB**, or **INCLUDE**—that specifies a list of directory paths. Because **_searchenv** is case-sensitive, *varname* should match the case of the environment variable.

The routine first searches for the file in the current working directory. If it does not find the file, it looks through the directories that are specified by the environment variable. If the target file is in one of those directories, the newly created path is copied into *pathname*. If the *filename* file is not found, *pathname* contains an empty null-terminated string.

The *pathname* buffer should be at least **_MAX_PATH** characters long to accommodate the full length of the constructed path name. Otherwise, **_searchenv** might overrun the *pathname* buffer and cause unexpected behavior.

**_wsearchenv** is a wide-character version of **_searchenv**, and the arguments to **_wsearchenv** are wide-character strings. **_wsearchenv** and **_searchenv** behave identically otherwise.

If *filename* is an empty string, these functions return **ENOENT**.

If *filename* or *pathname* is a **NULL** pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set **errno** to **EINVAL**.

For more information about **errno** and error codes, see [errno Constants](../../c-runtime-library/errno-constants.md).

In C++, these functions have template overloads that invoke the newer, more secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tsearchenv**|**_searchenv**|**_searchenv**|**_wsearchenv**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_searchenv**|\<stdlib.h>|
|**_wsearchenv**|\<stdlib.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_searchenv.c
// compile with: /W3
// This program searches for a file in
// a directory that's specified by an environment variable.

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char pathbuffer[_MAX_PATH];
   char searchfile[] = "CL.EXE";
   char envvar[] = "PATH";

   // Search for file in PATH environment variable:
   _searchenv( searchfile, envvar, pathbuffer ); // C4996
   // Note: _searchenv is deprecated; consider using _searchenv_s
   if( *pathbuffer != '\0' )
      printf( "Path for %s:\n%s\n", searchfile, pathbuffer );
   else
      printf( "%s not found\n", searchfile );
}
```

```Output
Path for CL.EXE:
C:\Program Files\Microsoft Visual Studio 8\VC\BIN\CL.EXE
```

## See also

[Directory Control](../../c-runtime-library/directory-control.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_putenv, _wputenv](putenv-wputenv.md)<br/>
[_searchenv_s, _wsearchenv_s](searchenv-s-wsearchenv-s.md)<br/>
