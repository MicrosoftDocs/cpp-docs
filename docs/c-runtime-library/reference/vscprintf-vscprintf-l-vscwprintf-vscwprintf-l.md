---
description: "Learn more about: _vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l"
title: "_vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l"
ms.date: "11/04/2016"
api_name: ["_vscprintf", "_vscprintf_l", "_vscwprintf_l", "_vscwprintf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["vscprintf_l", "vscwpeintf", "_vscwprintf", "_vsctprintf", "_vscprintf", "vscwprintf_l", "vscprintf", "_vscwprintf_l"]
helpviewer_keywords: ["vsctprintf function", "_vscprintf_l function", "_vsctprintf_l function", "_vsctprintf function", "_vscwprintf_l function", "vscwprintf_l function", "_vscprintf function", "_vscwprintf function", "vscwprintf function", "vsctprintf_l function", "formatted text [C++]", "vscprintf function", "vscprintf_l function"]
ms.assetid: 1bc67d3d-21d5-49c9-ac8d-69e26b16a3c3
---
# _vscprintf, _vscprintf_l, _vscwprintf, _vscwprintf_l

Returns the number of characters in the formatted string using a pointer to a list of arguments.

## Syntax

```C
int _vscprintf(
   const char *format,
   va_list argptr
);
int _vscprintf_l(
   const char *format,
   locale_t locale,
   va_list argptr
);
int _vscwprintf(
   const wchar_t *format,
   va_list argptr
);
int _vscwprintf_l(
   const wchar_t *format,
   locale_t locale,
   va_list argptr
);
```

### Parameters

*format*<br/>
Format-control string.

*argptr*<br/>
Pointer to list of arguments.

*locale*<br/>
The locale to use.

For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Return Value

**_vscprintf** returns the number of characters that would be generated if the string pointed to by the list of arguments was printed or sent to a file or buffer using the specified formatting codes. The value returned does not include the terminating null character. **_vscwprintf** performs the same function for wide characters.

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

If *format* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return -1 and set **errno** to **EINVAL**.

## Remarks

Each *argument* (if any) is converted according to the corresponding format specification in *format*. The format consists of ordinary characters and has the same form and function as the *format* argument for [printf](printf-printf-l-wprintf-wprintf-l.md).

> [!IMPORTANT]
> Ensure that if *format* is a user-defined string, it is null terminated and has the correct number and type of parameters. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vsctprintf**|**_vscprintf**|**_vscprintf**|**_vscwprintf**|
|**_vsctprintf_l**|**_vscprintf_l**|**_vscprintf_l**|**_vscwprintf_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_vscprintf**, **_vscprintf_l**|\<stdio.h>|
|**_vscwprintf**, **_vscwprintf_l**|\<stdio.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [vsprintf](vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[scanf, _scanf_l, wscanf, _wscanf_l](scanf-scanf-l-wscanf-wscanf-l.md)<br/>
[sscanf, _sscanf_l, swscanf, _swscanf_l](sscanf-sscanf-l-swscanf-swscanf-l.md)<br/>
[vprintf Functions](../../c-runtime-library/vprintf-functions.md)<br/>
