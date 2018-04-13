---
title: "fwrite | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["fwrite"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["fwrite"]
dev_langs: ["C++"]
helpviewer_keywords: ["streams, writing data to", "fwrite function"]
ms.assetid: 7afacf3a-72d7-4a50-ba2e-bea1ab9f4124
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# fwrite

Writes data to a stream.

## Syntax

```C
size_t fwrite(
   const void *buffer,
   size_t size,
   size_t count,
   FILE *stream
);
```

### Parameters

*buffer*
Pointer to data to be written.

*size*
Item size, in bytes.

*count*
Maximum number of items to be written.

*stream*
Pointer to `FILE` structure.

## Return Value

`fwrite` returns the number of full items actually written, which may be less than *count* if an error occurs. Also, if an error occurs, the file-position indicator cannot be determined. If either *stream* or *buffer* is a null pointer, or if an odd number of bytes to be written is specified in Unicode mode, the function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets `errno` to `EINVAL` and returns 0.

## Remarks

The `fwrite` function writes up to *count* items, of *size* length each, from *buffer* to the output *stream*. The file pointer associated with *stream* (if there is one) is incremented by the number of bytes actually written. If *stream* is opened in text mode, each linefeed is replaced with a carriage-return - linefeed pair. The replacement has no effect on the return value.

When *stream* is opened in Unicode translation mode—for example, if *stream* is opened by calling `fopen` and using a mode parameter that includes `ccs=UNICODE`, `ccs=UTF-16LE`, or `ccs=UTF-8`, or if the mode is changed to a Unicode translation mode by using `_setmode` and a mode parameter that includes `_O_WTEXT`, `_O_U16TEXT`, or `_O_U8TEXT`—*buffer* is interpreted as a pointer to an array of `wchar_t` that contains UTF-16 data. An attempt to write an odd number of bytes in this mode causes a parameter validation error.

Because this function locks the calling thread, it is thread-safe. For a non-locking version, see `_fwrite_nolock`.

## Requirements

|Function|Required header|
|--------------|---------------------|
|`fwrite`|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [fread](../../c-runtime-library/reference/fread.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_setmode](../../c-runtime-library/reference/setmode.md)<br/>
[fread](../../c-runtime-library/reference/fread.md)<br/>
[_fwrite_nolock](../../c-runtime-library/reference/fwrite-nolock.md)<br/>
[_write](../../c-runtime-library/reference/write.md)<br/>
