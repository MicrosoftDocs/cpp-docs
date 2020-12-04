---
description: "Learn more about: _splitpath_s, _wsplitpath_s"
title: "_splitpath_s, _wsplitpath_s"
ms.date: "4/2/2020"
api_name: ["_wsplitpath_s", "_splitpath_s", "_o__splitpath_s", "_o__wsplitpath_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wsplitpath_s", "splitpath_s", "_splitpath_s", "wsplitpath_s"]
helpviewer_keywords: ["splitpath_s function", "pathnames", "_splitpath_s function", "_wsplitpath_s function", "path names", "wsplitpath_s function"]
ms.assetid: 30fff3e2-cd00-4eb6-b5a2-65db79cb688b
---
# _splitpath_s, _wsplitpath_s

Breaks a path name into components. These are versions of [_splitpath, _wsplitpath](splitpath-wsplitpath.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t _splitpath_s(
   const char * path,
   char * drive,
   size_t driveNumberOfElements,
   char * dir,
   size_t dirNumberOfElements,
   char * fname,
   size_t nameNumberOfElements,
   char * ext,
   size_t extNumberOfElements
);
errno_t _wsplitpath_s(
   const wchar_t * path,
   wchar_t * drive,
   size_t driveNumberOfElements,
   wchar_t *dir,
   size_t dirNumberOfElements,
   wchar_t * fname,
   size_t nameNumberOfElements,
   wchar_t * ext,
   size_t extNumberOfElements
);
template <size_t drivesize, size_t dirsize, size_t fnamesize, size_t extsize>
errno_t _splitpath_s(
   const char *path,
   char (&drive)[drivesize],
   char (&dir)[dirsize],
   char (&fname)[fnamesize],
   char (&ext)[extsize]
); // C++ only
template <size_t drivesize, size_t dirsize, size_t fnamesize, size_t extsize>
errno_t _wsplitpath_s(
   const wchar_t *path,
   wchar_t (&drive)[drivesize],
   wchar_t (&dir)[dirsize],
   wchar_t (&fname)[fnamesize],
   wchar_t (&ext)[extsize]
); // C++ only
```

### Parameters

*path*<br/>
Full path.

*drive*<br/>
Drive letter, followed by a colon (**:**). You can pass **NULL** for this parameter if you do not need the drive letter.

*driveNumberOfElements*<br/>
The size of the *drive* buffer in single-byte or wide characters. If *drive* is **NULL**, this value must be 0.

*dir*<br/>
Directory path, including trailing slash. Forward slashes ( **/** ), backslashes ( **\\** ), or both may be used. You can pass **NULL** for this parameter if you do not need the directory path.

*dirNumberOfElements*<br/>
The size of the *dir* buffer in single-byte or wide characters. If *dir* is **NULL**, this value must be 0.

*fname*<br/>
Base filename (without extension). You can pass **NULL** for this parameter if you do not need the filename.

*nameNumberOfElements*<br/>
The size of the *fname* buffer in single-byte or wide characters. If *fname* is **NULL**, this value must be 0.

*ext*<br/>
Filename extension, including leading period (**.**).You can pass **NULL** for this parameter if you do not need the filename extension.

*extNumberOfElements*<br/>
The size of *ext* buffer in single-byte or wide characters. If *ext* is **NULL**, this value must be 0.

## Return Value

Zero if successful; an error code on failure.

### Error Conditions

|Condition|Return Value|
|---------------|------------------|
|*path* is **NULL**|**EINVAL**|
|*drive* is **NULL**, *driveNumberOfElements* is non-zero|**EINVAL**|
|*drive* is non-**NULL**, *driveNumberOfElements* is zero|**EINVAL**|
|*dir* is **NULL**, *dirNumberOfElements* is non-zero|**EINVAL**|
|*dir* is non-**NULL**, *dirNumberOfElements* is zero|**EINVAL**|
|*fname* is **NULL**, *nameNumberOfElements* is non-zero|**EINVAL**|
|*fname* is non-**NULL**, *nameNumberOfElements* is zero|**EINVAL**|
|*ext* is **NULL**, *extNumberOfElements* is non-zero|**EINVAL**|
|*ext* is non-**NULL**, *extNumberOfElements* is zero|**EINVAL**|

If any of the above conditions occurs, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md) . If execution is allowed to continue, these functions set **errno** to **EINVAL** and return **EINVAL**.

If any of the buffers is too short to hold the result, these functions clear all the buffers to empty strings, set **errno** to **ERANGE**, and return **ERANGE**.

## Remarks

The **_splitpath_s** function breaks a path into its four components. **_splitpath_s** automatically handles multibyte-character string arguments as appropriate, recognizing multibyte-character sequences according to the multibyte code page currently in use. **_wsplitpath_s** is a wide-character version of **_splitpath_s**; the arguments to **_wsplitpath_s** are wide-character strings. These functions behave identically otherwise

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tsplitpath_s**|**_splitpath_s**|**_splitpath_s**|**_wsplitpath_s**|

Each component of the full path is stored in a separate buffer; the manifest constants **_MAX_DRIVE**, **_MAX_DIR**, **_MAX_FNAME**, and **_MAX_EXT** (defined in STDLIB.H) specify the maximum allowable size for each file component. File components larger than the corresponding manifest constants cause heap corruption.

The following table lists the values of the manifest constants.

|Name|Value|
|----------|-----------|
|_MAX_DRIVE|3|
|_MAX_DIR|256|
|_MAX_FNAME|256|
|_MAX_EXT|256|

If the full path does not contain a component (for example, a filename), **_splitpath_s** assigns an empty string to the corresponding buffer.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_splitpath_s**|\<stdlib.h>|
|**_wsplitpath_s**|\<stdlib.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [_makepath_s, _wmakepath_s](makepath-s-wmakepath-s.md).

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
[_splitpath, _wsplitpath](splitpath-wsplitpath.md)<br/>
[_fullpath, _wfullpath](fullpath-wfullpath.md)<br/>
[_getmbcp](getmbcp.md)<br/>
[_makepath, _wmakepath](makepath-wmakepath.md)<br/>
[_setmbcp](setmbcp.md)<br/>
