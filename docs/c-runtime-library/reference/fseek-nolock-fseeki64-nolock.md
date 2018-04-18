---
title: "_fseek_nolock, _fseeki64_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_fseek_nolock", "_fseeki64_nolock"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
apitype: "DLLExport"
f1_keywords: ["_fseek_nolock", "_fseeki64_nolock", "fseek_nolock", "fseeki64_nolock"]
dev_langs: ["C++"]
helpviewer_keywords: ["_fseek_nolock function", "fseeki64_nolock function", "file pointers [C++], moving", "fseek_nolock function", "_fseeki64_nolock function", "seek file pointers"]
ms.assetid: 2dd4022e-b715-462b-b935-837561605a02
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _fseek_nolock, _fseeki64_nolock

Moves the file pointer to a specified location.

## Syntax

```C
int _fseek_nolock(
   FILE *stream,
   long offset,
   int origin
);
int _fseeki64_nolock(
   FILE *stream,
   __int64 offset,
   int origin
);
```

### Parameters

*stream*<br/>
Pointer to the **FILE** structure.

*offset*<br/>
Number of bytes from *origin*.

*origin*<br/>
Initial position.

## Return Value

Same as [fseek](fseek-fseeki64.md) and [_fseeki64](fseek-fseeki64.md), respectively.

## Remarks

These functions are the non-locking versions of [fseek](fseek-fseeki64.md) and [_fseeki64](fseek-fseeki64.md), respectively. These are identical to [fseek](fseek-fseeki64.md) and [_fseeki64](fseek-fseeki64.md) except that they are not protected from interference by other threads. These functions might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fseek_nolock**, **_fseeki64_nolock**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[ftell, _ftelli64](ftell-ftelli64.md)<br/>
[_lseek, _lseeki64](lseek-lseeki64.md)<br/>
[rewind](rewind.md)<br/>
