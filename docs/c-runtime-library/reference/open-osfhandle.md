---
title: "_open_osfhandle | Microsoft Docs"
ms.custom: ""
ms.date: "05/29/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_open_osfhandle"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_open_osfhandle", "open_osfhandle"]
dev_langs: ["C++"]
helpviewer_keywords: ["open_osfhandle function", "file handles [C++], associating", "_open_osfhandle function"]
ms.assetid: 30d94df4-7868-4667-a401-9eb67ecb7855
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _open_osfhandle

Associates a C run-time file descriptor with an existing operating-system file handle.

## Syntax

```cpp
int _open_osfhandle (
   intptr_t osfhandle,
   int flags
);
```

### Parameters

*osfhandle*<br/>
Operating-system file handle.

*flags*<br/>
Types of operations allowed.

## Return Value

If successful, **_open_osfhandle** returns a C run-time file descriptor. Otherwise, it returns -1.

## Remarks

The **_open_osfhandle** function allocates a C run-time file descriptor and associates it with the operating-system file handle specified by *osfhandle*. To avoid a compiler warning, cast the *osfhandle* argument from **HANDLE** to **intptr_t**. The *flags* argument is an integer expression formed from one or more of the manifest constants defined in \<fcntl.h>. When two or more manifest constants are used to form the *flags* argument, the constants are combined with the bitwise-OR operator ( **&#124;** ).

These manifest constants are defined in \<fcntl.h>:

|||
|-|-|
**\_O\_APPEND**|Positions a file pointer to the end of the file before every write operation.
**\_O\_RDONLY**|Opens the file for reading only.
**\_O\_TEXT**|Opens the file in text (translated) mode.
**\_O\_WTEXT**|Opens the file in Unicode (translated UTF-16) mode.

The **_open_osfhandle** call transfers ownership of the Win32 file handle to the file descriptor. To close a file opened with **_open_osfhandle**, call [\_close](close.md). The underlying OS file handle is also closed by a call to **_close**, so it is not necessary to call the Win32 function **CloseHandle** on the original handle. If the file descriptor is owned by a **FILE &#42;** stream, then calling [fclose](fclose-fcloseall.md) on that **FILE &#42;** stream also closes both the file descriptor and the underlying handle. In this case, do not call **_close** on the file descriptor.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_open_osfhandle**|\<io.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[File Handling](../../c-runtime-library/file-handling.md)<br/>
