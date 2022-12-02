---
description: "Learn more about: _splitpath, _wsplitpath"
title: "_splitpath, _wsplitpath"
ms.date: "4/2/2020"
api_name: ["_wsplitpath", "_splitpath", "_o__splitpath", "_o__wsplitpath"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-filesystem-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["wsplitpath", "_splitpath", "splitpath", "_wsplitpath", "_tsplitpath"]
helpviewer_keywords: ["_splitpath function", "pathnames", "wsplitpath function", "splitpath function", "_wsplitpath function", "tsplitpath function", "path names", "_tsplitpath function"]
ms.assetid: 32bd76b5-1385-4ee8-a64c-abcb541cd2e4
---
# `_splitpath`, `_wsplitpath`

Break a path name into components. More secure versions of these functions are available, see [`_splitpath_s`, `_wsplitpath_s`](splitpath-s-wsplitpath-s.md).

## Syntax

```C
void _splitpath(
   const char *path,
   char *drive,
   char *dir,
   char *fname,
   char *ext
);
void _wsplitpath(
   const wchar_t *path,
   wchar_t *drive,
   wchar_t *dir,
   wchar_t *fname,
   wchar_t *ext
);
```

### Parameters

*`path`*\
Full path.

*`drive`*\
Drive letter, followed by a colon (**:**). You can pass `NULL` for this parameter if you don't need the drive letter.

*`dir`*\
Directory path, including trailing slash. Forward slashes ( **/** ), backslashes ( **\\** ), or both may be used. You can pass `NULL` for this parameter if you don't need the directory path.

*`fname`*\
Base filename (no extension). You can pass `NULL` for this parameter if you don't need the filename.

*`ext`*\
Filename extension, including leading period (**.**). You can pass `NULL` for this parameter if you don't need the filename extension.

## Remarks

The **`_splitpath`** function breaks a path into its four components. **`_splitpath`** automatically handles multibyte-character string arguments as appropriate, recognizing multibyte-character sequences according to the multibyte code page currently in use. **`_wsplitpath`** is a wide-character version of **`_splitpath`**; the arguments to **`_wsplitpath`** are wide-character strings. These functions behave identically otherwise.

**Security Note** These functions incur a potential threat brought about by a buffer overrun problem. Buffer overrun problems are a frequent method of system attack, resulting in an unwarranted elevation of privilege. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns). More secure versions of these functions are available; see [`_splitpath_s`, `_wsplitpath_s`](splitpath-s-wsplitpath-s.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tsplitpath` | **`_splitpath`** | **`_splitpath`** | **`_wsplitpath`** |

Each component of the full path is stored in a separate buffer; the manifest constants `_MAX_DRIVE`, `_MAX_DIR`, `_MAX_FNAME`, and `_MAX_EXT` (defined in `STDLIB.H`) specify the maximum size for each file component. File components that are larger than the corresponding manifest constants cause heap corruption.

Each buffer must be as large as its corresponding manifest constant to avoid potential buffer overrun.

The following table lists the values of the manifest constants.

| Name | Value |
|---|---|
| `_MAX_DRIVE` | 3 |
| `_MAX_DIR` | 256 |
| `_MAX_FNAME` | 256 |
| `_MAX_EXT` | 256 |

If the full path doesn't contain a component (for example, a filename), **`_splitpath`** assigns empty strings to the corresponding buffers.

You can pass `NULL` to **`_splitpath`** for any parameter other than *`path`* that you don't need.

If *`path`* is `NULL`, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, `errno` is set to `EINVAL` and the function returns `EINVAL`.

## Requirements

| Routine | Required header |
|---|---|
| **`_splitpath`** | `<stdlib.h>` |
| **`_wsplitpath`** | `<stdlib.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

See the example for [`_makepath`](makepath-wmakepath.md).

## See also

[File handling](../file-handling.md)\
[`_fullpath`, `_wfullpath`](fullpath-wfullpath.md)\
[`_getmbcp`](getmbcp.md)\
[`_makepath`, `_wmakepath`](makepath-wmakepath.md)\
[`_setmbcp`](setmbcp.md)\
[`_splitpath_s`, `_wsplitpath_s`](splitpath-s-wsplitpath-s.md)
