---
description: "Learn more about: ungetc, ungetwc"
title: "ungetc, ungetwc"
ms.date: "4/2/2020"
api_name: ["ungetwc", "ungetc", "_o_ungetc", "_o_ungetwc"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ungettc", "ungetwc", "ungetc"]
helpviewer_keywords: ["ungetwc function", "ungettc function", "characters, pushing back onto stream", "_ungettc function", "ungetc function"]
ms.assetid: e0754f3a-b4c6-408f-90c7-e6387b830d84
---
# ungetc, ungetwc

Pushes a character back onto the stream.

## Syntax

```C
int ungetc(
   int c,
   FILE *stream
);
wint_t ungetwc(
   wint_t c,
   FILE *stream
);
```

### Parameters

*c*<br/>
Character to be pushed.

*stream*<br/>
Pointer to **FILE** structure.

## Return Value

If successful, each of these functions returns the character argument *c*. If *c* cannot be pushed back or if no character has been read, the input stream is unchanged and **ungetc** returns **EOF**; **ungetwc** returns **WEOF**. If *stream* is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **EOF** or **WEOF** is returned and **errno** is set to **EINVAL**.

For information on these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

The **ungetc** function pushes the character *c* back onto *stream* and clears the end-of-file indicator. The stream must be open for reading. A subsequent read operation on *stream* starts with *c*. An attempt to push **EOF** onto the stream using **ungetc** is ignored.

Characters placed on the stream by **ungetc** may be erased if **fflush**, [fseek](fseek-fseeki64.md), **fsetpos**, or [rewind](rewind.md) is called before the character is read from the stream. The file-position indicator will have the value it had before the characters were pushed back. The external storage corresponding to the stream is unchanged. On a successful **ungetc** call against a text stream, the file-position indicator is unspecified until all the pushed-back characters are read or discarded. On each successful **ungetc** call against a binary stream, the file-position indicator is decremented; if its value was 0 before a call, the value is undefined after the call.

Results are unpredictable if **ungetc** is called twice without a read or file-positioning operation between the two calls. After a call to **fscanf**, a call to **ungetc** may fail unless another read operation (such as **getc**) has been performed. This is because **fscanf** itself calls **ungetc**.

**ungetwc** is a wide-character version of **ungetc**. However, on each successful **ungetwc** call against a text or binary stream, the value of the file-position indicator is unspecified until all pushed-back characters are read or discarded.

These functions are thread-safe and lock sensitive data during execution. For a non-locking version, see [_ungetc_nolock, _ungetwc_nolock](ungetc-nolock-ungetwc-nolock.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_ungettc**|**ungetc**|**ungetc**|**ungetwc**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**ungetc**|\<stdio.h>|
|**ungetwc**|\<stdio.h> or \<wchar.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **stdin**, **stdout**, and **stderr**, must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_ungetc.c
// This program first converts a character
// representation of an unsigned integer to an integer. If
// the program encounters a character that is not a digit,
// the program uses ungetc to replace it in the  stream.
//

#include <stdio.h>
#include <ctype.h>

int main( void )
{
   int ch;
   int result = 0;

   // Read in and convert number:
   while( ((ch = getchar()) != EOF) && isdigit( ch ) )
      result = result * 10 + ch - '0';    // Use digit.
   if( ch != EOF )
      ungetc( ch, stdin );                // Put nondigit back.
   printf( "Number = %d\nNext character in stream = '%c'",
            result, getchar() );
}
```

```Output

      521aNumber = 521
Next character in stream = 'a'
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[getc, getwc](getc-getwc.md)<br/>
[putc, putwc](putc-putwc.md)<br/>
