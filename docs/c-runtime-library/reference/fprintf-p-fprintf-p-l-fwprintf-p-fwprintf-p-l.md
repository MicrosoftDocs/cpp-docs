---
description: "Learn more about: _fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l"
title: "_fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l"
ms.date: "11/04/2016"
api_name: ["_fwprintf_p", "_fprintf_p_l", "_fwprintf_p_l", "_fprintf_p"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_fprintf_p", "_ftprintf_p", "fwprintf_p", "_fwprintf_p", "fprintf_p", "ftprintf_p"]
helpviewer_keywords: ["fprintf_p_l function", "fprintf_p function", "_fprintf_p_l function", "_fprintf_p function", "_ftprintf_p_l function", "streams, printing formatted data to", "_fwprintf_p function", "fwprintf_p function", "_ftprintf_p function", "_fwprintf_p_l function", "ftprintf_p function", "printing [C++], formatted data to streams", "ftprintf_p_l function", "fwprintf_p_l function"]
ms.assetid: 46b082e1-45ba-4383-9ee4-97015aa50bc6
---
# _fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l

Prints formatted data to a stream.

## Syntax

```C
int _fprintf_p(
   FILE *stream,
   const char *format [,
   argument ]...
);
int _fprintf_p_l(
   FILE *stream,
   const char *format,
   locale_t locale [,
   argument ]...
);
int _fwprintf_p(
   FILE *stream,
   const wchar_t *format [,
   argument ]...
);
int _fwprintf_p_l(
   FILE *stream,
   const wchar_t *format,
   locale_t locale [,
   argument ]...
);
```

### Parameters

*stream*<br/>
Pointer to the **FILE** structure.

*format*<br/>
Format-control string.

*argument*<br/>
Optional arguments.

*locale*<br/>
The locale to use.

## Return Value

**_fprintf_p** and **_fwprintf_p** return the number of characters written or return a negative value when an output error occurs.

## Remarks

**_fprintf_p** formats and prints a series of characters and values to the output *stream*. Each function *argument* (if any) is converted and output according to the corresponding format specification in *format*. For **_fprintf_p**, the *format* argument has the same syntax and use that it has in **_printf_p**. These functions support positional parameters, meaning that the order of the parameters used by the format string can be changed. For more information about positional parameters, see [printf_p Positional Parameters](../../c-runtime-library/printf-p-positional-parameters.md).

**_fwprintf_p** is a wide-character version of **_fprintf_p**; in **_fwprintf_p**, *format* is a wide-character string. These functions behave identically if the stream is opened in ANSI mode. **_fprintf_p** doesn't currently support output into a UNICODE stream.

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current locale.

> [!IMPORTANT]
> Ensure that *format* is not a user-defined string.

Like the non-secure versions (see [fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)), these functions validate their parameters and invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md), if either *stream* or *format* is a null pointer or if there are any unknown or badly formed formatting specifiers. If execution is allowed to continue, the functions return -1 and set **errno** to **EINVAL**.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_ftprintf_p**|**_fprintf_p**|**_fprintf_p**|**_fwprintf_p**|
|**_ftprintf_p_l**|**_fprintf_p_l**|**_fprintf_p_l**|**_fwprintf_p_l**|

For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**_fprintf_p**, **_fprintf_p_l**|\<stdio.h>|
|**_fwprintf_p**, **_fwprintf_p_l**|\<stdio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fprintf_p.c
// This program uses _fprintf_p to format various
// data and print it to the file named FPRINTF_P.OUT. It
// then displays FPRINTF_P.OUT on the screen using the system
// function to invoke the operating-system TYPE command.
//

#include <stdio.h>
#include <process.h>

int main( void )
{
    FILE    *stream = NULL;
    int     i = 10;
    double  fp = 1.5;
    char    s[] = "this is a string";
    char    c = '\n';

    // Open the file
    if ( fopen_s( &stream, "fprintf_p.out", "w" ) == 0)
    {
        // Format and print data
        _fprintf_p( stream, "%2$s%1$c", c, s );
        _fprintf_p( stream, "%d\n", i );
        _fprintf_p( stream, "%f\n", fp );

        // Close the file
        fclose( stream );
    }

    // Verify our data
    system( "type fprintf_p.out" );
}
```

```Output
this is a string
10
1.500000
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[fscanf, _fscanf_l, fwscanf, _fwscanf_l](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[printf_p Positional Parameters](../../c-runtime-library/printf-p-positional-parameters.md)<br/>
[_cprintf_p, _cprintf_p_l, _cwprintf_p, _cwprintf_p_l](cprintf-p-cprintf-p-l-cwprintf-p-cwprintf-p-l.md)<br/>
[_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l](cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md)<br/>
[printf_p Positional Parameters](../../c-runtime-library/printf-p-positional-parameters.md)<br/>
[fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l](fscanf-s-fscanf-s-l-fwscanf-s-fwscanf-s-l.md)<br/>
