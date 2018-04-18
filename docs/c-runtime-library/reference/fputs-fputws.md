---
title: "fputs, fputws | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["fputs", "fputws"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["fputs", "fputws", "_fputts"]
dev_langs: ["C++"]
helpviewer_keywords: ["streams, writing strings to", "fputws function", "_fputts function", "fputs function", "fputts function"]
ms.assetid: d48c82b8-aa17-4830-8c7d-30442ddbb326
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# fputs, fputws

Writes a string to a stream.

## Syntax

```C
int fputs(
   const char *str,
   FILE *stream
);
int fputws(
   const wchar_t *str,
   FILE *stream
);
```

### Parameters

*str*<br/>
Output string.

*stream*<br/>
Pointer to **FILE** structure.

## Return Value

Each of these functions returns a nonnegative value if it is successful. On an error, **fputs** and **fputws** return **EOF**. If *str* or *stream* is a null pointer, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and then **fputs** returns **EOF**, and **fputws** returns **WEOF**.

See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, error codes.

## Remarks

Each of these functions copies *str* to the output *stream* at the current position. **fputws** copies the wide-character argument *str* to *stream* as a multibyte-character string or a wide-character string according to whether *stream* is opened in text mode or binary mode, respectively. Neither function copies the terminating null character.

The two functions behave identically if the stream is opened in ANSI mode. **fputs** does not currently support output into a UNICODE stream.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_fputts**|**fputs**|**fputs**|**fputws**|

## Requirements

|Function|Required header|
|--------------|---------------------|
|**fputs**|\<stdio.h>|
|**fputws**|\<stdio.h> or \<wchar.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console—**stdin**, **stdout**, and **stderr**—must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fputs.c
// This program uses fputs to write
// a single line to the stdout stream.

#include <stdio.h>

int main( void )
{
   fputs( "Hello world from fputs.\n", stdout );
}
```

```Output
Hello world from fputs.
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fgets, fgetws](fgets-fgetws.md)<br/>
[gets, _getws](../../c-runtime-library/gets-getws.md)<br/>
[puts, _putws](puts-putws.md)<br/>
