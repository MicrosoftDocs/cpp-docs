---
description: "Learn more about: _cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l"
title: "_cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l"
ms.date: "11/04/2016"
api_name: ["_cwscanf_s_l", "_cwscanf_s", "_cscanf_s", "_cscanf_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["cscanf_s", "cscanf_s_l", "cwscanf_s", "_cwscanf_s", "_tcscanf_s", "_cscanf_s", "_cwscanf_s_l", "_cscanf_s_l", "cwscanf_s_l", "_tcscanf_s_l", "tcscanf_s", "tcscanf_s_l"]
helpviewer_keywords: ["cscanf_s function", "_cwscanf_s_l function", "tcscanf_s function", "console [C++], reading from", "_cscanf_s function", "data [C++], reading from the console", "cwscanf_s function", "_tcscanf_s_l function", "_cscanf_s_l function", "cscanf_s_l function", "cwscanf_s_l function", "reading data [C++], from the console", "_cwscanf_s function", "_tcscanf_s function", "tcscanf_s_l function"]
ms.assetid: 9ccab74d-916f-42a6-93d8-920525efdf4b
---
# _cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l

Reads formatted data from the console. These more secure versions of [_cscanf, _cscanf_l, _cwscanf, _cwscanf_l](cscanf-cscanf-l-cwscanf-cwscanf-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _cscanf_s(
   const char *format [,
   argument] ...
);
int _cscanf_s_l(
   const char *format,
   locale_t locale [,
   argument] ...
);
int _cwscanf_s(
   const wchar_t *format [,
   argument] ...
);
int _cwscanf_s_l(
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

These functions validate their parameters. If *format* is a null pointer, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **EOF** and **errno** is set to **EINVAL**.

## Remarks

The **_cscanf_s** function reads data directly from the console into the locations given by *argument*. The [_getche](getch-getwch.md) function is used to read characters. Each optional parameter must be a pointer to a variable with a type that corresponds to a type specifier in *format*. The format controls the interpretation of the input fields and has the same form and function as the *format* parameter for the [scanf_s](scanf-scanf-l-wscanf-wscanf-l.md) function. While **_cscanf_s** normally echoes the input character, it does not do so if the last call was to **_ungetch**.

Like other secure versions of functions in the **scanf** family, **_cscanf_s** and **_cswscanf_s** require size arguments for the type field characters **c**, **C**, **s**, **S**, and **[**. For more information, see [scanf Width Specification](../../c-runtime-library/scanf-width-specification.md).

> [!NOTE]
> The size parameter is of type **`unsigned`**, not **size_t**.

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcscanf_s**|**_cscanf_s**|**_cscanf_s**|**_cwscanf_s**|
|**_tcscanf_s_l**|**_cscanf_s_l**|**_cscanf_s_l**|**_cwscanf_s_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_cscanf_s**, **_cscanf_s_l**|\<conio.h>|
|**_cwscanf_s**, **_cwscanf_s_l**|\<conio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## Example

```C
// crt_cscanf_s.c
// compile with: /c
/* This program prompts for a string
* and uses _cscanf_s to read in the response.
* Then _cscanf_s returns the number of items
* matched, and the program displays that number.
*/

#include <stdio.h>
#include <conio.h>

int main( void )
{
   int result, n[3];
   int i;

   result = _cscanf_s( "%i %i %i", &n[0], &n[1], &n[2] );
   _cprintf_s( "\r\nYou entered " );
   for( i=0; i<result; i++ )
      _cprintf_s( "%i ", n[i] );
   _cprintf_s( "\r\n" );
}
```

```Input
1 2 3
```

```Output
You entered 1 2 3
```

## See also

[Console and Port I/O](../../c-runtime-library/console-and-port-i-o.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l](fscanf-s-fscanf-s-l-fwscanf-s-fwscanf-s-l.md)<br/>
[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md)<br/>
[sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md)<br/>
