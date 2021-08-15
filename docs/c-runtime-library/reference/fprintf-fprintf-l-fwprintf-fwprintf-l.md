---
description: "Learn more about: fprintf, _fprintf_l, fwprintf, _fwprintf_l"
title: "fprintf, _fprintf_l, fwprintf, _fwprintf_l"
ms.date: "3/9/2021"
api_name: ["fwprintf", "fprintf", "_fprintf_l", "_fwprintf_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fprintf", "fwprintf", "_ftprintf"]
helpviewer_keywords: ["_fwprintf_l function", "fprintf function", "fprintf_l function", "_fprintf_l function", "_ftprintf function", "fwprintf function", "ftprintf_l function", "ftprintf function", "_ftprintf_l function", "print formatted data to streams", "fwprintf_l function"]
---
# `fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`

Print formatted data to a stream. More secure versions of these functions are available; see [`fprintf_s`, `_fprintf_s_l`, `fwprintf_s`, `_fwprintf_s_l`](fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md).

## Syntax

```C
int fprintf(
   FILE *stream,
   const char *format [,
   argument ]...
);
int _fprintf_l(
   FILE *stream,
   const char *format,
   locale_t locale [,
   argument ]...
);
int fwprintf(
   FILE *stream,
   const wchar_t *format [,
   argument ]...
);
int _fwprintf_l(
   FILE *stream,
   const wchar_t *format,
   locale_t locale [,
   argument ]...
);
```

### Parameters

*`stream`*<br/>
Pointer to **FILE** structure.

*`format`*<br/>
Format-control string.

*`argument`*<br/>
Optional arguments.

*`locale`*<br/>
The locale to use.

## Return Value

**`fprintf`** returns the number of bytes written. **`fwprintf`** returns the number of wide characters written. Each of these functions returns a negative value instead when an output error occurs. If *`stream`* or *`format`* is **`NULL`**, these functions invoke the invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return -1 and set **`errno`** to **`EINVAL`**. The format string is not checked for valid formatting characters as it is when using **`fprintf_s`** or **`fwprintf_s`**.

See [`_doserrno`, `errno`, `_sys_errlist`, and `_sys_nerr`](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on these, and other, error codes.

## Remarks

**`fprintf`** formats and prints a series of characters and values to the output *`stream`*. Each function *`argument`* (if any) is converted and output according to the corresponding format specification in *`format`*. For **`fprintf`**, the *`format`* argument has the same syntax and use that it has in **`printf`**.

**`fwprintf`** is a wide-character version of **`fprintf`**; in **`fwprintf`**, *`format`* is a wide-character string. These functions behave identically if the stream is opened in ANSI mode. **`fprintf`** does not currently support output into a UNICODE stream.

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *format* is not a user-defined string.
>
>
> Starting in Windows 10 version 2004  (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-Text Routine Mappings

|`TCHAR.H` routine|`_UNICODE` & `_MBCS` not defined|`_MBCS` defined|`_UNICODE` defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**`_ftprintf`**|**`fprintf`**|**`fprintf`**|**`fwprintf`**|
|**`_ftprintf_l`**|**`_fprintf_l`**|**`_fprintf_l`**|**`_fwprintf_l`**|

For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Requirements

|Function|Required header|
|--------------|---------------------|
|**`fprintf`**, **`_fprintf_l`**|`<stdio.h>`|
|**`fwprintf`**, **`_fwprintf_l`**|`<stdio.h>` or `<wchar.h>`|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_fprintf.c
/* This program uses fprintf to format various
* data and print it to the file named FPRINTF.OUT. It
* then displays FPRINTF.OUT on the screen using the system
* function to invoke the operating-system TYPE command.
*/

#include <stdio.h>
#include <process.h>

FILE *stream;

int main( void )
{
   int    i = 10;
   double fp = 1.5;
   char   s[] = "this is a string";
   char   c = '\n';

   fopen_s( &stream, "fprintf.out", "w" );
   fprintf( stream, "%s%c", s, c );
   fprintf( stream, "%d\n", i );
   fprintf( stream, "%f\n", fp );
   fclose( stream );
   system( "type fprintf.out" );
}
```

```Output
this is a string
10
1.500000
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[`_cprintf`, `_cprintf_l`, `_cwprintf`, `_cwprintf_l`](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[`fscanf`, `_fscanf_l`, `fwscanf`, `_fwscanf_l`](fscanf-fscanf-l-fwscanf-fwscanf-l.md)<br/>
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `_swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[Format Specification Syntax: `printf` and `wprintf` Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)<br/>
