---
title: "ferror | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["ferror"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["ferror"]
dev_langs: ["C++"]
helpviewer_keywords: ["ferror function", "streams, testing for errors", "errors [C++], testing for stream"]
ms.assetid: 528a34bc-f2aa-4c3f-b89a-5b148e6864f7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# ferror

Tests for an error on a stream.

## Syntax

```C
int ferror(
   FILE *stream
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

## Return Value

If no error has occurred on *stream*, **ferror** returns 0. Otherwise, it returns a nonzero value. If stream is **NULL**, **ferror** invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns 0.

See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, error codes.

## Remarks

The **ferror** routine (implemented both as a function and as a macro) tests for a reading or writing error on the file associated with *stream*. If an error has occurred, the error indicator for the stream remains set until the stream is closed or rewound, or until **clearerr** is called against it.

## Requirements

|Function|Required header|
|--------------|---------------------|
|**ferror**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [feof](feof.md).

## See also

[Error Handling](../../c-runtime-library/error-handling-crt.md)<br/>
[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[clearerr](clearerr.md)<br/>
[_eof](eof.md)<br/>
[feof](feof.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[perror, _wperror](perror-wperror.md)<br/>
