---
description: "Learn more about: fwrite"
title: "fwrite"
ms.date: "4/2/2020"
api_name: ["fwrite", "_o_fwrite"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fwrite"]
helpviewer_keywords: ["streams, writing data to", "fwrite function"]
ms.assetid: 7afacf3a-72d7-4a50-ba2e-bea1ab9f4124
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

*buffer*<br/>
Pointer to data to be written.

*size*<br/>
Item size, in bytes.

*count*<br/>
Maximum number of items to be written.

*stream*<br/>
Pointer to **FILE** structure.

## Return Value

**fwrite** returns the number of full items actually written, which may be less than *count* if an error occurs. Also, if an error occurs, the file-position indicator cannot be determined. If either *stream* or *buffer* is a null pointer, or if an odd number of bytes to be written is specified in Unicode mode, the function invokes the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, this function sets **errno** to **EINVAL** and returns 0.

## Remarks

The **fwrite** function writes up to *count* items, of *size* length each, from *buffer* to the output *stream*. The file pointer associated with *stream* (if there is one) is incremented by the number of bytes actually written. If *stream* is opened in text mode, each line feed is replaced with a carriage return-line feed pair. The replacement has no effect on the return value.

When *stream* is opened in Unicode translation mode—for example, if *stream* is opened by calling **fopen** and using a mode parameter that includes **ccs=UNICODE**, **ccs=UTF-16LE**, or **ccs=UTF-8**, or if the mode is changed to a Unicode translation mode by using **_setmode** and a mode parameter that includes **_O_WTEXT**, **_O_U16TEXT**, or **_O_U8TEXT**—*buffer* is interpreted as a pointer to an array of **`wchar_t`** that contains UTF-16 data. An attempt to write an odd number of bytes in this mode causes a parameter validation error.

Because this function locks the calling thread, it is thread-safe. For a non-locking version, see **_fwrite_nolock**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**fwrite**|\<stdio.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [fread](fread.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_setmode](setmode.md)<br/>
[fread](fread.md)<br/>
[_fwrite_nolock](fwrite-nolock.md)<br/>
[_write](write.md)<br/>
