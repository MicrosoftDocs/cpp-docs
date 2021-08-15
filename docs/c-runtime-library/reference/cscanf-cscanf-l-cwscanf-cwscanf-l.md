---
description: "Learn more about: _cscanf, _cscanf_l, _cwscanf, _cwscanf_l"
title: "_cscanf, _cscanf_l, _cwscanf, _cwscanf_l"
ms.date: "10/21/2019"
api_name: ["_cscanf_l", "_cscanf", "_cwscanf", "_cwscanf_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_cwscanf", "cwscanf_l", "tcscanf_l", "_tcscanf_l", "_cscanf", "_cscanf_l", "tcscanf", "cwscanf", "_cwscanf_l", "cscanf_l", "_tcscanf"]
helpviewer_keywords: ["_cwscanf function", "data [C++], reading from the console", "cscanf_l function", "tcscanf function", "_cscanf_l function", "cwscanf function", "_tcscanf_l function", "_cscanf function", "_tcscanf function", "cwscanf_l function", "tcscanf_l function", "reading data [C++], from the console", "_cwscanf_l function"]
ms.assetid: dbfe7547-b577-4567-a1cb-893fa640e669
---
# _cscanf, _cscanf_l, _cwscanf, _cwscanf_l

Reads formatted data from the console. More secure versions of these functions are available; see [_cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l](cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md).

> [!NOTE]
> In Visual Studio 2015 The `printf` and `scanf` family of functions were declared as **`inline`** and moved to the `<stdio.h>` and `<conio.h>` headers. If you are migrating older code you might see *LNK2019* in connection with these functions. For more information, see [Visual C++ change history 2003 - 2015](../../porting/visual-cpp-change-history-2003-2015.md#stdio_and_conio).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _cscanf(
   const char *format [,
   argument] ...
);
int _cscanf_l(
   const char *format,
   locale_t locale [,
   argument] ...
);
int _cwscanf(
   const wchar_t *format [,
   argument] ...
);
int _cwscanf_l(
   const wchar_t *format,
   locale_t locale [,
   argument] ...
);
```

### Parameters

*format*<br/>
Format-control string.

*argument*<br/>
Optional parameters.

*locale*<br/>
The locale to use.

## Return Value

The number of fields that were successfully converted and assigned. The return value does not include fields that were read but not assigned. The return value is **EOF** for an attempt to read at end of file. This can occur when keyboard input is redirected at the operating-system command-line level. A return value of 0 means that no fields were assigned.

## Remarks

The **_cscanf** function reads data directly from the console into the locations given by *argument*. The [_getche](getch-getwch.md) function is used to read characters. Each optional parameter must be a pointer to a variable with a type that corresponds to a type specifier in *format*. The format controls the interpretation of the input fields and has the same form and function as the *format* parameter for the [scanf](scanf-scanf-l-wscanf-wscanf-l.md) function. While **_cscanf** normally echoes the input character, it does not do so if the last call was to **_ungetch**.

This function validates its parameters. If format is **NULL**, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and the function returns **EOF**.

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcscanf**|**_cscanf**|**_cscanf**|**_cwscanf**|
|**_tcscanf_l**|**_cscanf_l**|**_cscanf_l**|**_cwscanf_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_cscanf**, **_cscanf_l**|\<conio.h>|
|**_cwscanf**, **_cwscanf_l**|\<conio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_cscanf.c
// compile with: /c /W3
/* This program prompts for a string
* and uses _cscanf to read in the response.
* Then _cscanf returns the number of items
* matched, and the program displays that number.
*/

#include <stdio.h>
#include <conio.h>

int main( void )
{
   int   result, i[3];

   _cprintf_s( "Enter three integers: ");
   result = _cscanf( "%i %i %i", &i[0], &i[1], &i[2] ); // C4996
   // Note: _cscanf is deprecated; consider using _cscanf_s instead
   _cprintf_s( "\r\nYou entered " );
   while( result-- )
      _cprintf_s( "%i ", i[result] );
   _cprintf_s( "\r\n" );
}
```

```Input
1 2 3
```

```Output
Enter three integers: 1 2 3
You entered 3 2 1
```

## See also

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
