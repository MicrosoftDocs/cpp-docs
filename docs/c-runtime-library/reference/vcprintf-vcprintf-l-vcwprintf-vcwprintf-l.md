---
description: "Learn more about: _vcprintf, _vcprintf_l, _vcwprintf, _vcwprintf_l"
title: "_vcprintf, _vcprintf_l, _vcwprintf, _vcwprintf_l"
ms.date: "11/04/2016"
api_name: ["_vcwprintf", "_vcprintf_l", "_vcwprintf_l", "_vcprintf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_vcwprintf_l", "_vtcprintf", "vcwprintf", "_vcwprintf", "vcprintf_l", "_vcprintf_l", "_vcprintf", "vcprintf", "vcwprintf_l"]
helpviewer_keywords: ["vcwprintf function", "_vcwprintf_l function", "_vcprintf function", "_vcprintf_l function", "vtcprintf_l function", "vcprintf function", "vcprintf_l function", "_vtcprintf function", "_vcwprintf function", "_vtcprintf_l function", "vcwprintf_l function", "vtcprintf function", "formatted text [C++]"]
ms.assetid: 4ef8d237-6200-4b66-8731-8c57e5624bb1
---
# _vcprintf, _vcprintf_l, _vcwprintf, _vcwprintf_l

Writes formatted output to the console by using a pointer to a list of arguments. More secure versions of these functions are available, see [_vcprintf_s, _vcprintf_s_l, _vcwprintf_s, _vcwprintf_s_l](vcprintf-s-vcprintf-s-l-vcwprintf-s-vcwprintf-s-l.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _vcprintf(
   const char* format,
   va_list argptr
);
int _vcprintf_l(
   const char* format,
   locale_t locale,
   va_list argptr
);
int _vcwprintf(
   const wchar_t* format,
   va_list argptr
);
int _vcwprintf_l(
   const wchar_t* format,
   locale_t locale,
   va_list argptr
);
```

### Parameters

*format*<br/>
Format specification.

*argptr*<br/>
Pointer to list of arguments.

*locale*<br/>
The locale to use.

For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Return Value

The number of characters written, or a negative value if an output error occurs. If *format* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, **errno** is set to **EINVAL** and -1 is returned.

## Remarks

Each of these functions takes a pointer to an argument list, then formats and writes the given data to the console. **_vcwprintf** is the wide-character version of **_vcprintf**. It takes a wide-character string as an argument.

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current locale.

> [!IMPORTANT]
> Ensure that *format* is not a user-defined string. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vtcprintf**|**_vcprintf**|**_vcprintf**|**_vcwprintf**|
|**_vtcprintf_l**|**_vcprintf_l**|**_vcprintf_l**|**_vcwprintf_l**|

## Requirements

|Routine|Required header|Optional headers|
|-------------|---------------------|----------------------|
|**_vcprintf**, **_vcprintf_l**|\<conio.h> and \<stdarg.h>|\<varargs.h>*|
|**_vcwprintf**, **_vcwprintf_l**|\<conio.h> or \<wchar.h>, and \<stdarg.h>|\<varargs.h>*|

\* Required for UNIX V compatibility.

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```cpp
// crt_vcprintf.cpp
// compile with: /c
#include <conio.h>
#include <stdarg.h>

// An error formatting function used to print to the console.
int eprintf(const char* format, ...)
{
    va_list args;
    va_start(args, format);
    int result = _vcprintf(format, args);
    va_end(args);
    return result;
}

int main()
{
    eprintf("(%d:%d): Error %s%d : %s\n", 10, 23, "C", 2111,
           "<some error text>");
    eprintf("    (Related to symbol '%s' defined on line %d).\n",
            "<symbol>", 5 );
}
```

```Output
(10,23): Error C2111 : <some error text>
    (Related to symbol '<symbol>' defined on line 5).
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[vprintf Functions](../../c-runtime-library/vprintf-functions.md)<br/>
[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](cprintf-cprintf-l-cwprintf-cwprintf-l.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
