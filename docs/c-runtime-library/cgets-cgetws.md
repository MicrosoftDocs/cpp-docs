---
description: "Learn more about: _cgets, _cgetws"
title: "_cgets, _cgetws"
ms.date: "4/2/2020"
api_name: ["_cgetws", "_cgets", "_o__cgets", "_o__cgetws"]
api_location: ["msvcr100.dll", "msvcr110.dll", "msvcr80.dll", "msvcr120.dll", "msvcr90.dll", "msvcrt.dll", "msvcr110_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-conio-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cgetws", "_cgetws", "_cgets"]
helpviewer_keywords: ["_cgetws function", "strings [C++], getting from console", "console, getting strings from", "_cgets function", "cgetws function", "cgets function"]
ms.assetid: 4d5e134a-58c3-4f62-befd-5d235b0212f4
---
# _cgets, _cgetws

Gets a character string from the console. More secure versions of these functions are available; see [_cgets_s, _cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md).

> [!IMPORTANT]
> These functions are obsolete. Beginning in Visual Studio 2015, they are not available in the CRT. The secure versions of these functions,  _cgets_s and _cgetws_s, are still available. For information on these alternative functions, see [_cgets_s, _cgetws_s](../c-runtime-library/reference/cgets-s-cgetws-s.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```
char *_cgets(
   char *buffer
);
wchar_t *_cgetws(
   wchar_t *buffer
);
template <size_t size>
char *_cgets(
   char (&buffer)[size]
); // C++ only
template <size_t size>
wchar_t *_cgetws(
   wchar_t (&buffer)[size]
); // C++ only
```

#### Parameters

*buffer*<br/>
Storage location for data.

## Return Value

`_cgets` and `_cgetws` return a pointer to the start of the string, at `buffer[2]`. If `buffer` is **NULL**, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../c-runtime-library/parameter-validation.md). If execution is allowed to continue, they return **NULL** and set `errno` to `EINVAL`.

## Remarks

These functions read a string of characters from the console and store the string and its length in the location pointed to by `buffer`. The `buffer` parameter must be a pointer to a character array. The first element of the array, `buffer[0]`, must contain the maximum length (in characters) of the string to be read. The array must contain enough elements to hold the string, a terminating null character ('\0'), and 2 additional bytes. The function reads characters until a carriage return-line feed (CR-LF) combination or the specified number of characters is read. The string is stored starting at `buffer[2]`. If the function reads a CR-LF, it stores the null character ('\0'). The function then stores the actual length of the string in the second array element, `buffer[1]`.

Because all editing keys are active when `_cgets` or `_cgetws` is called while in a console window, pressing the F3 key repeats the last entered entry.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../c-runtime-library/secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_cgetts`|`_cgets`|`_cgets`|`_cgetws`|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`_cgets`|\<conio.h>|
|`_cgetws`|\<conio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../c-runtime-library/compatibility.md).

## Example

```c
// crt_cgets.c
// compile with: /c /W3
// This program creates a buffer and initializes
// the first byte to the size of the buffer. Next, the
// program accepts an input string using _cgets and displays
// the size and text of that string.

#include <conio.h>
#include <stdio.h>
#include <errno.h>

int main( void )
{
   char buffer[83] = { 80 };  // Maximum characters in 1st byte
   char *result;

   printf( "Input line of text, followed by carriage return:\n");

   // Input a line of text:
   result = _cgets( buffer ); // C4996
   // Note: _cgets is deprecated; consider using _cgets_s
   if (!result)
   {
      printf( "An error occurred reading from the console:"
              " error code %d\n", errno);
   }
   else
   {
      printf( "\nLine length = %d\nText = %s\n",
              buffer[1], result );
   }
}
```

```Output

      A line of input.Input line of text, followed by carriage return:
Line Length = 16
Text = A line of input.
```

## See also

[Console and Port I/O](../c-runtime-library/console-and-port-i-o.md)<br/>
[_getch, _getwch](../c-runtime-library/reference/getch-getwch.md)
