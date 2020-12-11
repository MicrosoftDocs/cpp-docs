---
description: "Learn more about: puts, _putws"
title: "puts, _putws"
ms.date: "4/2/2020"
api_name: ["_putws", "puts", "_o__putws", "_o_puts"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_putts", "_putws", "puts"]
helpviewer_keywords: ["strings [C++], writing", "_putts function", "standard output, writing to", "putws function", "puts function", "putts function", "_putws function"]
ms.assetid: 32dada12-ed45-40ac-be06-3feeced9ecd6
---
# puts, _putws

Writes a string to **stdout**.

## Syntax

```C
int puts(
   const char *str
);
int _putws(
   const wchar_t *str
);
```

### Parameters

*str*<br/>
Output string.

## Return Value

Returns a nonnegative value if successful. If **puts** fails, it returns **EOF**; if **_putws** fails, it returns **WEOF**. If *str* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions set **errno** to **EINVAL** and return **EOF** or **WEOF**.

For information on these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **puts** function writes *str* to the standard output stream **stdout**, replacing the string's terminating null character ('\0') with a newline character ('\n') in the output stream.

**_putws** is the wide-character version of **puts**; the two functions behave identically if the stream is opened in ANSI mode. **puts** doesn't currently support output into a UNICODE stream.

**_putwch** writes Unicode characters using the current CONSOLE LOCALE setting.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_putts**|**puts**|**puts**|**_putws**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**puts**|\<stdio.h>|
|**_putws**|\<stdio.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **stdin**, **stdout**, and **stderr**, must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_puts.c
// This program uses puts to write a string to stdout.

#include <stdio.h>

int main( void )
{
   puts( "Hello world from puts!" );
}
```

### Output

```Output
Hello world from puts!
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fputs, fputws](fputs-fputws.md)<br/>
[fgets, fgetws](fgets-fgetws.md)<br/>
