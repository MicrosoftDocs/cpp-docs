---
description: "Learn more about: vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l"
title: "vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l"
ms.date: "11/04/2016"
api_name: ["_vfprintf_l", "vfprintf", "vfwprintf", "_vfwprintf_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["vfwprintf", "_vftprintf", "vfprintf"]
helpviewer_keywords: ["_vfwprintf_l function", "_vftprintf function", "vfprintf function", "_vftprintf_l function", "vfprintf_l function", "vftprintf_l function", "vfwprintf_l function", "vftprintf function", "vfwprintf function", "_vfprintf_l function", "formatted text [C++]"]
ms.assetid: 4443be50-cedf-40b2-b3e2-ff2b3af3b666
---
# vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l

Write formatted output using a pointer to a list of arguments. More secure versions of these functions exist; see [vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l](vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md).

## Syntax

```C
int vfprintf(
   FILE *stream,
   const char *format,
   va_list argptr
);
int _vfprintf_l(
   FILE *stream,
   const char *format,
   locale_t locale,
   va_list argptr
);
int vfwprintf(
   FILE *stream,
   const wchar_t *format,
   va_list argptr
);
int _vfwprintf_l(
   FILE *stream,
   const wchar_t *format,
   locale_t locale,
   va_list argptr
);
```

### Parameters

*stream*<br/>
Pointer to **FILE** structure.

*format*<br/>
Format specification.

*argptr*<br/>
Pointer to list of arguments.

*locale*<br/>
The locale to use.

For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Return Value

**vfprintf** and **vfwprintf** return the number of characters written, not including the terminating null character, or a negative value if an output error occurs. If either *stream* or *format* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return -1 and set **errno** to **EINVAL**.

For information on these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions takes a pointer to an argument list, then formats and writes the given data to *stream*.

**vfwprintf** is the wide-character version of **vfprintf**; the two functions behave identically if the stream is opened in ANSI mode. **vfprintf** doesn't currently support output into a UNICODE stream.

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *format* is not a user-defined string. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vftprintf**|**vfprintf**|**vfprintf**|**vfwprintf**|
|**_vftprintf_l**|**_vfprintf_l**|**_vfprintf_l**|**_vfwprintf_l**|

## Requirements

|Routine|Required header|Optional headers|
|-------------|---------------------|----------------------|
|**vfprintf**, **_vfprintf_l**|\<stdio.h> and \<stdarg.h>|\<varargs.h>*|
|**vfwprintf**, **_vfwprintf_l**|\<stdio.h> or \<wchar.h>, and \<stdarg.h>|\<varargs.h>*|

\* Required for UNIX V compatibility.

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[vprintf Functions](../../c-runtime-library/vprintf-functions.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
