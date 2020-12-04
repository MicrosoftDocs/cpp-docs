---
description: "Learn more about: _scprintf, _scprintf_l, _scwprintf, _scwprintf_l"
title: "_scprintf, _scprintf_l, _scwprintf, _scwprintf_l"
ms.date: "11/04/2016"
api_name: ["_scprintf_l", "_scwprintf", "_scwprintf_l", "_scprintf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["scprintf", "_scprintf_l", "_scwprintf_l", "_scprintf", "scwprintf", "_scwprintf", "scprintf_l", "_sctprintf_l", "scwprintf_l", "_sctprintf"]
helpviewer_keywords: ["scprintf function", "sctprintf_l function", "scwprintf_l function", "_scwprintf_l function", "_sctprintf_l function", "sctprintf function", "_scwprintf function", "_scprintf_l function", "_sctprintf function", "scprintf_l function", "formatted text [C++]", "_scprintf function", "scwprintf function"]
ms.assetid: ecbb0ba6-5f4c-4ce6-a64b-144ad8b5fe92
---
# _scprintf, _scprintf_l, _scwprintf, _scwprintf_l

Returns the number of characters in the formatted string.

## Syntax

```C
int _scprintf(
   const char *format [,
   argument] ...
);
int _scprintf_l(
   const char *format,
   locale_t locale [,
   argument] ...
);
int _scwprintf(
   const wchar_t *format [,
   argument] ...
);
int _scwprintf_l(
   const wchar_t *format,
   locale_t locale [,
   argument] ...
);
```

### Parameters

*format*<br/>
Format-control string.

*argument*<br/>
Optional arguments.

*locale*<br/>
The locale to use.

For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Return Value

Returns the number of characters that would be generated if the string were to be printed or sent to a file or buffer using the specified formatting codes. The value returned does not include the terminating null character. **_scwprintf** performs the same function for wide characters.

If *format* is a **NULL** pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set **errno** to **EINVAL**.

For information about these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each *argument* (if any) is converted according to the corresponding format specification in *format*. The format consists of ordinary characters and has the same form and function as the *format* argument for [printf](printf-printf-l-wprintf-wprintf-l.md).

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *format* is not a user-defined string.

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_sctprintf**|**_scprintf**|**_scprintf**|**_scwprintf**|
|**_sctprintf_l**|**_scprintf_l**|**_scprintf_l**|**_scwprintf_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_scprintf**, **_scprintf_l**|\<stdio.h>|
|**_scwprintf**, **_scwprintf_l**|\<stdio.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt__scprintf.c

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main( void )
{
   int count;
   int size;
   char *s = NULL;

   count = _scprintf( "The value of Pi is calculated to be %f.\n",
                      M_PI);

   size = count + 1; // the string will need one more char for the null terminator
   s = malloc(sizeof(char) * size);
   sprintf_s(s, size, "The value of Pi is calculated to be %f.\n",
                      M_PI);
   printf("The length of the following string will be %i.\n", count);
   printf("%s", s);
   free( s );
}
```

```Output
The length of the following string will be 46.
The value of Pi is calculated to be 3.141593.
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[vprintf Functions](../../c-runtime-library/vprintf-functions.md)<br/>
