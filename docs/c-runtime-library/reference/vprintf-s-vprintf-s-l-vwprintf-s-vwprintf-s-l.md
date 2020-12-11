---
description: "Learn more about: vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l"
title: "vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l"
ms.date: "11/04/2016"
api_name: ["_vwprintf_s_l", "vwprintf_s", "_vprintf_s_l", "vprintf_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["vprintf_s", "vwprintf_s", "_vtprintf_s"]
helpviewer_keywords: ["vwprintf_s_l function", "_vwprintf_s_l function", "vwprintf_s function", "_vtprintf_s_l function", "vprintf_s_l function", "vtprintf_s_l function", "_vtprintf_s function", "vtprintf_s function", "_vprintf_s_l function", "formatted text [C++]", "vprintf_s function"]
ms.assetid: cf864996-a530-4b40-9c30-54c4cef439c8
---
# vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l

Writes formatted output by using a pointer to a list of arguments. These versions of [vprintf, _vprintf_l, vwprintf, _vwprintf_l](vprintf-vprintf-l-vwprintf-vwprintf-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
int vprintf_s(
   const char *format,
   va_list argptr
);
int _vprintf_s_l(
   const char *format,
   locale_t locale,
   va_list argptr
);
int vwprintf_s(
   const wchar_t *format,
   va_list argptr
);
int _vwprintf_s_l(
   const wchar_t *format,
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

**vprintf_s** and **vwprintf_s** return the number of characters written, not including the terminating null character, or a negative value if an output error occurs. If *format* is a null pointer, or if the format string contains invalid formatting characters, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the functions return -1 and set **errno** to **EINVAL**.

For information on these and other error codes, see [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions takes a pointer to an argument list, then formats and writes the given data to **stdout**.

The secure versions of these functions differ from **vprintf** and **vwprintf** only in that the secure versions check that the format string contains valid formatting characters.

**vwprintf_s** is the wide-character version of **vprintf_s**; the two functions behave identically if the stream is opened in ANSI mode. **vprintf_s** doesn't currently support output into a UNICODE stream.

The versions of these functions with the **_l** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *format* is not a user-defined string. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_vtprintf_s**|**vprintf_s**|**vprintf_s**|**vwprintf_s**|
|**_vtprintf_s_l**|**_vprintf_s_l**|**_vprintf_s_l**|**_vwprintf_s_l**|

## Requirements

|Routine|Required header|Optional headers|
|-------------|---------------------|----------------------|
|**vprintf_s**, **_vprintf_s_l**|\<stdio.h> and \<stdarg.h>|\<varargs.h>*|
|**vwprintf_s**, **_vwprintf_s_l**|\<stdio.h> or \<wchar.h>, and \<stdarg.h>|\<varargs.h>*|

\* Required for UNIX V compatibility.

The console is not supported in Universal Windows Platform (UWP) apps. The standard stream handles that are associated with the console, **stdin**, **stdout**, and **stderr**, must be redirected before C run-time functions can use them in UWP apps. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[vprintf Functions](../../c-runtime-library/vprintf-functions.md)<br/>
[fprintf, _fprintf_l, fwprintf, _fwprintf_l](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[printf, _printf_l, wprintf, _wprintf_l](printf-printf-l-wprintf-wprintf-l.md)<br/>
[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[va_arg, va_copy, va_end, va_start](va-arg-va-copy-va-end-va-start.md)<br/>
