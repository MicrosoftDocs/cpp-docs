---
title: "_ungetc_nolock, _ungetwc_nolock | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_ungetwc_nolock", "_ungetc_nolock"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_ungettc_nolock", "ungetwc_nolock", "ungetc_nolock", "_ungetc_nolock", "_ungetwc_nolock"]
dev_langs: ["C++"]
helpviewer_keywords: ["_ungettc_nolock function", "_ungetwc_nolock function", "characters, pushing back onto stream", "_ungetc_nolock function", "ungetwc_nolock function", "ungettc_nolock function", "ungetc_nolock function"]
ms.assetid: aa02d5c2-1be1-46d2-a8c4-b61269e9d465
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _ungetc_nolock, _ungetwc_nolock

Pushes a character back onto the stream.

## Syntax

```
int _ungetc_nolock(
   int c,
   FILE *stream
);
wint_t _ungetwc_nolock(
   wint_t c,
   FILE *stream
);
```

### Parameters

`c`
Character to be pushed.

*stream*
Pointer to `FILE` structure.

## Return Value

If successful, each of these functions returns the character argument `c`. If `c` cannot be pushed back or if no character has been read, the input stream is unchanged and `_ungetc_nolock` returns `EOF`; `_ungetwc_nolock` returns `WEOF`. If *stream* is `NULL`, `EOF` or `WEOF` is returned and `errno` is set to `EINVAL`.

For information on these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

These functions are non-locking versions of `ungetc` and `ungetwc`. The versions with the `_nolock` suffix are identical except that they are not protected from interference by other threads. They may be faster since they do not incur the overhead of locking out other threads. Use these functions only in thread-safe contexts such as single-threaded applications or where the calling scope already handles thread isolation.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|`_ungettc_nolock`|`_ungetc_nolock`|`_ungetc_nolock`|`_ungetwc_nolock`|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_ungetc_nolock`|\<stdio.h>|
|`_ungetwc_nolock`|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md) in the Introduction.

## See Also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[getc, getwc](../../c-runtime-library/reference/getc-getwc.md)<br/>
[putc, putwc](../../c-runtime-library/reference/putc-putwc.md)