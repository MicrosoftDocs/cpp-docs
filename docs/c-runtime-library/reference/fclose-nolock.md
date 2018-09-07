---
title: "_fclose_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["_fclose_nolock"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["fclose_nolock", "_fclose_nolock"]
dev_langs: ["C++"]
helpviewer_keywords: ["streams, closing", "fclose_nolock function", "_fclose_nolock function"]
ms.assetid: b4af4392-5fc8-49bb-9fe2-ca7293d3ce04
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# _fclose_nolock

Closes a stream without thread-locking.

## Syntax

```C
int _fclose_nolock(
   FILE *stream
);
```

### Parameters

*stream*<br/>
Pointer to the **FILE** structure.

## Return Value

**fclose** returns 0 if the stream is successfully closed. Returns **EOF** to indicate an error.

## Remarks

This functions is a non-locking version of **fclose**. It is identical except that it is not protected from interference by other threads. It might be faster because it does not incur the overhead of locking out other threads. Use this function only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fclose_nolock**|\<stdio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_close](close.md)<br/>
[_fdopen, _wfdopen](fdopen-wfdopen.md)<br/>
[fflush](fflush.md)<br/>
[fopen, _wfopen](fopen-wfopen.md)<br/>
[freopen, _wfreopen](freopen-wfreopen.md)<br/>
