---
description: "Learn more about: gets_s, _getws_s"
title: "gets_s, _getws_s"
ms.date: "4/2/2020"
api_name: ["_getws_s", "gets_s", "_o__getws_s", "_o_gets_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-stdio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_getws_s", "gets_s"]
helpviewer_keywords: ["getws_s function", "_getws_s function", "lines, getting", "streams, getting lines", "buffers, avoiding overruns", "buffer overruns", "buffers, buffer overruns", "gets_s function", "standard input, reading from"]
ms.assetid: 5880c36f-122c-4061-a1a5-aeeced6fe58c
---
# gets_s, _getws_s

Gets a line from the **stdin** stream. These versions of [gets, _getws](../../c-runtime-library/gets-getws.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
char *gets_s(
   char *buffer,
   size_t sizeInCharacters
);
wchar_t *_getws_s(
   wchar_t *buffer,
   size_t sizeInCharacters
);
```

```cpp
template <size_t size>
char *gets_s( char (&buffer)[size] ); // C++ only

template <size_t size>
wchar_t *_getws_s( wchar_t (&buffer)[size] ); // C++ only
```

### Parameters

*buffer*<br/>
Storage location for input string.

*sizeInCharacters*<br/>
The size of the buffer.

## Return Value

Returns *buffer* if successful. A **NULL** pointer indicates an error or end-of-file condition. Use [ferror](ferror.md) or [feof](feof.md) to determine which one has occurred.

## Remarks

The **gets_s** function reads a line from the standard input stream **stdin** and stores it in *buffer*. The line consists of all characters up to and including the first newline character ('\n'). **gets_s** then replaces the newline character with a null character ('\0') before returning the line. In contrast, the **fgets_s** function retains the newline character.

If the first character read is the end-of-file character, a null character is stored at the beginning of *buffer* and **NULL** is returned.

**_getws_s** is a wide-character version of **gets_s**; its argument and return value are wide-character strings.

If *buffer* is **NULL** or *sizeInCharacters* is less than or equal to zero, or if the buffer is too small to contain the input line and null terminator, these functions invoke an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **NULL** and set errno to **ERANGE**.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_getts_s**|**gets_s**|**gets_s**|**_getws_s**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**gets_s**|\<stdio.h>|
|**_getws_s**|\<stdio.h> or \<wchar.h>|

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **stdin**, **stdout**, and **stderr**, must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_gets_s.c
// This program retrieves a string from the stdin and
// prints the same string to the console.

#include <stdio.h>

int main( void )
{
   char line[21]; // room for 20 chars + '\0'
   gets_s( line, 20 );
   printf( "The line entered was: %s\n", line );
}
```

```Input
Hello there!
```

```Output
The line entered was: Hello there!
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[gets, _getws](../../c-runtime-library/gets-getws.md)<br/>
[fgets, fgetws](fgets-fgetws.md)<br/>
[fputs, fputws](fputs-fputws.md)<br/>
[puts, _putws](puts-putws.md)<br/>
