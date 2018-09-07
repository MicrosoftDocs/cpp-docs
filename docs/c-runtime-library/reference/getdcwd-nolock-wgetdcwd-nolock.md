---
title: "_getdcwd_nolock, _wgetdcwd_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_wgetdcwd_nolock", "_getdcwd_nolock"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["_wgetdcwd_nolock", "tgetdcwd_nolock", "wgetdcwd_nolock", "_getdcwd_nolock", "_tgetdcwd_nolock", "getdcwd_nolock"]
dev_langs: ["C++"]
helpviewer_keywords: ["getdcwd_nolock function", "_tgetdcwd_nolock function", "working directory", "tgetdcwd_nolock function", "_getdcwd_nolock function", "current working directory", "wgetdcwd_nolock function", "_wgetdcwd_nolock function", "directories [C++], current working"]
ms.assetid: d9bdf712-43f8-4173-8f9a-844e82beaa97
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _getdcwd_nolock, _wgetdcwd_nolock

Gets the full path of the current working directory on the specified drive.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *_getdcwd_nolock(
   int drive,
   char *buffer,
   int maxlen
);
wchar_t *_wgetdcwd_nolock(
   int drive,
   wchar_t *buffer,
   int maxlen
);
```

### Parameters

*drive*<br/>
Disk drive.

*buffer*<br/>
Storage location for the path.

*maxlen*<br/>
Maximum length of path in characters: **char** for **_getdcwd** and **wchar_t** for **_wgetdcwd**.

## Return Value

See [_getdcwd, _wgetdcwd](getdcwd-wgetdcwd.md).

## Remarks

**_getdcwd_nolock** and **_wgetdcwd_nolock** are identical to **_getdcwd** and **_wgetdcwd**, respectively, except that they are not protected from interference by other threads. They might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tgetdcwd_nolock**|**_getdcwd_nolock**|**_getdcwd_nolock**|**_wgetdcwd_nolock**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_getdcwd_nolock**|\<direct.h>|
|**_wgetdcwd_nolock**|\<direct.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Directory Control](../../c-runtime-library/directory-control.md)<br/>
[_chdir, _wchdir](chdir-wchdir.md)<br/>
[_getcwd, _wgetcwd](getcwd-wgetcwd.md)<br/>
[_getdrive](getdrive.md)<br/>
[_mkdir, _wmkdir](mkdir-wmkdir.md)<br/>
[_rmdir, _wrmdir](rmdir-wrmdir.md)<br/>
