---
title: "_execlp, _wexeclp | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_wexeclp", "_execlp"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-process-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_wexeclp", "wexeclp", "_execlp"]
dev_langs: ["C++"]
helpviewer_keywords: ["execlp function", "_execlp function", "_wexeclp function", "wexeclp function"]
ms.assetid: 7b179163-4bcd-4d6a-8baf-68f886791928
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _execlp, _wexeclp

Loads and executes new child processes.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
intptr_t _execlp(
   const char *cmdname,
   const char *arg0,
   ... const char *argn,
   NULL
);
intptr_t _wexeclp(
   const wchar_t *cmdname,
   const wchar_t *arg0,
   ... const wchar_t *argn,
   NULL
);
```

### Parameters

*cmdname*<br/>
Path of the file to execute.

*arg0*, ... *argn*<br/>
List of pointers to parameters.

## Return Value

If successful, these functions do not return to the calling process. A return value of -1 indicates an error, in which case the **errno** global variable is set.

|**errno** value|Description|
|-------------------|-----------------|
|**E2BIG**|The space required for the arguments and environment settings exceeds 32 KB.|
|**EACCES**|The specified file has a locking or sharing violation.|
|**EINVAL**|Invalid parameter.|
|**EMFILE**|Too many files open (the specified file must be opened to determine whether it is executable).|
|**ENOENT**|The file or path not found.|
|**ENOEXEC**|The specified file is not executable or has an invalid executable-file format.|
|**ENOMEM**|Not enough memory is available to execute the new process; the available memory has been corrupted; or an invalid block exists, indicating that the calling process was not allocated properly.|

For more information about these and other return codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions loads and executes a new process, passing each command-line argument as a separate parameter and using the **PATH** environment variable to find the file to execute.

The **_execlp** functions validate their parameters. If *cmdname* or *arg0* is a null pointer or empty string, these functions invoke the invalid parameter handler as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return -1. No new process is launched.

## Requirements

|Function|Required header|Optional header|
|--------------|---------------------|---------------------|
|**_execlp**|\<process.h>|\<errno.h>|
|**_wexeclp**|\<process.h> or \<wchar.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example in [_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md).

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[_exec, _wexec Functions](../../c-runtime-library/exec-wexec-functions.md)<br/>
[abort](abort.md)<br/>
[atexit](atexit.md)<br/>
[exit, _Exit, _exit](exit-exit-exit.md)<br/>
[_onexit, _onexit_m](onexit-onexit-m.md)<br/>
[_spawn, _wspawn Functions](../../c-runtime-library/spawn-wspawn-functions.md)<br/>
[system, _wsystem](system-wsystem.md)<br/>
