---
description: "Learn more about: _rmtmp"
title: "_rmtmp"
ms.date: "4/2/2020"
api_name: ["_rmtmp", "_o__rmtmp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_rmtmp"]
helpviewer_keywords: ["removing temporary files", "_rmtmp function", "files [C++], temporary", "rmtmp function", "files [C++], removing", "temporary files [C++], removing"]
ms.assetid: 7419501e-2587-4f2a-b469-0dca07f84736
---
# _rmtmp

Removes temporary files.

## Syntax

```C

int _rmtmp( void );
```

## Return Value

**_rmtmp** returns the number of temporary files closed and deleted.

## Remarks

The **_rmtmp** function cleans up all temporary files in the current directory. The function removes only those files created by **tmpfile**; use it only in the same directory in which the temporary files were created.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_rmtmp**|\<stdio.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

See the example for [tmpfile](tmpfile.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_flushall](flushall.md)<br/>
[tmpfile](tmpfile.md)<br/>
[_tempnam, _wtempnam, tmpnam, _wtmpnam](tempnam-wtempnam-tmpnam-wtmpnam.md)<br/>
