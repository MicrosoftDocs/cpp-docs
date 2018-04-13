---
title: "_ftell_nolock, _ftelli64_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_ftelli64_nolock", "_ftell_nolock"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_ftelli64_nolock", "ftelli64_nolock", "ftell_nolock", "_ftell_nolock"]
dev_langs: ["C++"]
helpviewer_keywords: ["ftelli64_nolock function", "_ftelli64_nolock function", "_ftell_nolock function", "ftell_nolock function", "file pointers [C++], getting current position"]
ms.assetid: 84e68b0a-32f8-4c4a-90ad-3f2387685ede
caps.latest.revision: 13
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _ftell_nolock, _ftelli64_nolock

Gets the current position of a file pointer, without locking the thread.

## Syntax

```C
long _ftell_nolock(
   FILE *stream
);
__int64 _ftelli64_nolock(
   FILE *stream
);
```

### Parameters

*stream*
Target the `FILE` structure.

## Return Value

Same as `ftell` and `_ftelli64`. For more information, see [ftell, _ftelli64](../../c-runtime-library/reference/ftell-ftelli64.md)**.**

## Remarks

These functions are non-locking versions of `ftell` and `_ftelli64`, respectively. They are identical to `ftell` and `_ftelli64` except that they are not protected from interference by other threads. These functions might be faster because they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

## Requirements

|Function|Required header|Optional header|
|--------------|---------------------|---------------------|
|`ftell_nolock`|\<stdio.h>|\<errno.h>|
|`_ftelli64_nolock`|\<stdio.h>|\<errno.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fgetpos](../../c-runtime-library/reference/fgetpos.md)<br/>
[fseek, _fseeki64](../../c-runtime-library/reference/fseek-fseeki64.md)<br/>
[_lseek, _lseeki64](../../c-runtime-library/reference/lseek-lseeki64.md)<br/>
[ftell, _ftelli64](../../c-runtime-library/reference/ftell-ftelli64.md)<br/>
