---
title: "_close | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_close"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_close"]
dev_langs: ["C++"]
helpviewer_keywords: ["_close function", "close function", "files [C++], closing"]
ms.assetid: 4708a329-8acf-4cd9-b7b0-a952e1897247
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _close

Closes a file.

## Syntax

```C
int _close(
   int fd
);
```

### Parameters

*fd*<br/>
File descriptor referring to the open file.

## Return Value

**_close** returns 0 if the file was successfully closed. A return value of -1 indicates an error.

## Remarks

The **_close** function closes the file associated with *fd*.

The file descriptor and the underlying OS file handle are closed. Thus, it is not necessary to call **CloseHandle** if the file was originally opened using the Win32 function **CreateFile** and converted to a file descriptor using **_open_osfhandle**.

This function validates its parameters. If *fd* is a bad file descriptor, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions returns -1 and **errno** is set to **EBADF**.

## Requirements

|Routine|Required header|Optional header|
|-------------|---------------------|---------------------|
|**_close**|\<io.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [_open](open-wopen.md).

## See also

[Low-Level I/O](../../c-runtime-library/low-level-i-o.md)<br/>
[_chsize](chsize.md)<br/>
[_creat, _wcreat](creat-wcreat.md)<br/>
[_dup, _dup2](dup-dup2.md)<br/>
[_open, _wopen](open-wopen.md)<br/>
[_unlink, _wunlink](unlink-wunlink.md)<br/>
