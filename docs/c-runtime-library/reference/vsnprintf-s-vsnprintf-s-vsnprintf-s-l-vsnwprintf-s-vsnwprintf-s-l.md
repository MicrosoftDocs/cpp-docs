---
description: "Learn more about: vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l"
title: "vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l"
ms.date: "3/9/2021"
api_name: ["_vsnwprintf_s", "_vsnwprintf_s_l", "_vsnprintf_s", "vsnprintf_s", "_vsnprintf_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_vsnprintf_s", "_vsntprintf_s", "_vsnwprintf_s"]
helpviewer_keywords: ["vsnwprintf_s function", "_vsntprintf_s function", "_vsntprintf_s_l function", "vsntprintf_s function", "vsnwprintf_s_l function", "vsnprintf_s_l function", "vsntprintf_s_l function", "_vsnwprintf_s_l function", "_vsnprintf_s function", "vsnprintf_s function", "_vsnprintf_s_l function", "_vsnwprintf_s function", "formatted text [C++]"]
---
# `vsnprintf_s`, `_vsnprintf_s`, `_vsnprintf_s_l`, `_vsnwprintf_s`, `_vsnwprintf_s_l`

Write formatted output using a pointer to a list of arguments. These are versions of [`vsnprintf`, `_vsnprintf`, `_vsnprintf_l`, `_vsnwprintf`, `_vsnwprintf_l`](vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
int vsnprintf_s(
   char *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const char *format,
   va_list argptr
);
int _vsnprintf_s(
   char *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const char *format,
   va_list argptr
);
int _vsnprintf_s_l(
   char *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const char *format,
   _locale_t locale,
   va_list argptr
);
int _vsnwprintf_s(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const wchar_t *format,
   va_list argptr
);
int _vsnwprintf_s_l(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
);
template <size_t size>
int _vsnprintf_s(
   char (&buffer)[size],
   size_t count,
   const char *format,
   va_list argptr
); // C++ only
template <size_t size>
int _vsnwprintf_s(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format,
   va_list argptr
); // C++ only
```

### Parameters

*`buffer`*<br/>
Storage location for output.

*`sizeOfBuffer`*<br/>
The size of the *`buffer`* for output, as the character count.

*`count`*<br/>
Maximum number of characters to write (not including the terminating null), or [`_TRUNCATE`](../../c-runtime-library/truncate.md).

*`format`*<br/>
Format specification.

*`argptr`*<br/>
Pointer to list of arguments.

*`locale`*<br/>
The locale to use.

For more information, see [Format Specifications](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Return Value

**`vsnprintf_s`**, **`_vsnprintf_s`** and **`_vsnwprintf_s`** return the number of characters written, not including the terminating null, or a negative value if truncation of the data occurs (for **`_vsnwprintf_s`**, this is a count of wide characters).

If an encoding error occurs during formatting, **`errno`** is set to **`EILSEQ`**. If the encoding error occurs during formatting for a string conversion specifier (type character **`s`** , **`S`**  or **`Z`**), processing of the format specification is aborted and a negative value is returned by the function. Otherwise, if an encoding error occurs during processing a character conversion specifier (type character **`c`** or **`C`**), the processing of the specifier will be aborted and the invalid character will be skipped. In particular, the number of characters written will not be incremented for this specifier, nor will any data be written for it. Processing of the format specification will continue after skipping the specifier which caused the encoding error, and the function return value will be as described further below.

* If *`count`* is less than *`sizeOfBuffer`* and the number of characters of data is less than or equal to *`count`*, or *`count`* is [`_TRUNCATE`](../../c-runtime-library/truncate.md) and the number of characters of data is less than *`sizeOfBuffer`*, then all of the data is written, a terminating null is appended and the number of characters is returned.

* If *`count`* is less than *`sizeOfBuffer`* but the data exceeds *`count`* characters, then the first *`count`* characters are written. Truncation of the remaining data occurs and -1 is returned without invoking the invalid parameter handler.

* If *`count`* is [`_TRUNCATE`](../../c-runtime-library/truncate.md) and the number of characters of data equals or exceeds *`sizeOfBuffer`*, then as much of the string as will fit in *`buffer`* (with terminating null) is written. Truncation of the remaining data occurs and -1 is returned without invoking the invalid parameter handler.

* If *`count`* is greater than or equal to *`sizeOfBuffer`* but the number of characters of data is less than *`sizeOfBuffer`*, then all of the data is written (with terminating null) and the number of characters is returned.

* If *`count`* and the number of characters of data both equal or exceed *`sizeOfBuffer`* (and *`count`* is not [`_TRUNCATE`](../../c-runtime-library/truncate.md)), the invalid parameter handler is invoked &mdash; as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution continues after the invalid parameter handler, these functions set *buffer* to an empty string, set **`errno`** to **`ERANGE`**, and return -1.

* If *`buffer`* is a null pointer and both *`sizeOfBuffer`* and *`count`* are equal to zero, these functions return 0.

* If *`format`* is a null pointer, or *`buffer`* is a null pointer and either *`sizeOfBuffer`* or *`count`* are nonzero, or if *`buffer`* is not a null pointer and *`sizeOfBuffer`* is zero, the invalid parameter handler is invoked. If execution is allowed to continue, these functions set **`errno`** to **`EINVAL`** and return -1.

### Error Conditions

|**Condition**|Return|**`errno`**|
|-----------------|------------|-------------|
|*`buffer`* is **`NULL`** (and either *`sizeOfBuffer`* or *`count`* != 0)|-1|**`EINVAL`**|
|*`format`* is **`NULL`**|-1|**`EINVAL`**|
|*`buffer`* != **`NULL`** and *`sizeOfBuffer`* == 0|-1|**`EINVAL`**|
|*`sizeOfBuffer`* too small (and *`count`* != **`_TRUNCATE`**)|-1 (and *`buffer`* set to an empty string)|**`ERANGE`**|

## Remarks

**`vsnprintf_s`** is identical to **`_vsnprintf_s`**. **`vsnprintf_s`** is included for conformance to the ANSI standard. **`_vnsprintf`** is retained for backward compatibility.

Each of these functions takes a pointer to an argument list, then formats and writes up to *`count`* characters of the given data to the memory pointed to by *`buffer`* and appends a terminating null.

If *`count`* is [`_TRUNCATE`](../../c-runtime-library/truncate.md), then these functions write as much of the string as will fit in *`buffer`* while leaving room for a terminating null. If the entire string (with terminating null) fits in *`buffer`*, then these functions return the number of characters written (not including the terminating null); otherwise, these functions return -1 to indicate that truncation occurred.

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

> [!NOTE]
> To ensure that there is room for the terminating null, be sure that *`count`* is strictly less than the buffer length, or use **`_TRUNCATE`**.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### Generic-Text Routine Mappings

|`TCHAR.H` routine|`_UNICODE` & `_MBCS` not defined|`_MBCS` defined|`_UNICODE` defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**`_vsntprintf_s`**|**`_vsnprintf_s`**|**`_vsnprintf_s`**|**`_vsnwprintf_s`**|
|**`_vsntprintf_s_l`**|**`_vsnprintf_s_l`**|**`_vsnprintf_s_l`**|**`_vsnwprintf_s_l`**|

## Requirements

|Routine|Required header|Optional headers|
|-------------|---------------------|----------------------|
|**`vsnprintf_s`**|`<stdio.h>` and `<stdarg.h>`|`<varargs.h>`*|
|**`_vsnprintf_s`**, **`_vsnprintf_s_l`**|`<stdio.h>` and `<stdarg.h>`|`<varargs.h>`*|
|**`_vsnwprintf_s`**, **`_vsnwprintf_s_l`**|`<stdio.h>` or `<wchar.h>`, and `<stdarg.h>`|`<varargs.h>`*|

\* Required for UNIX V compatibility.

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```cpp
// crt_vsnprintf_s.cpp
#include <stdio.h>
#include <wtypes.h>

void FormatOutput(LPCSTR formatstring, ...)
{
   int nSize = 0;
   char buff[10];
   memset(buff, 0, sizeof(buff));
   va_list args;
   va_start(args, formatstring);
   nSize = vsnprintf_s( buff, _countof(buff), _TRUNCATE, formatstring, args);
   printf("nSize: %d, buff: %s\n", nSize, buff);
   va_end(args);
}

int main() {
   FormatOutput("%s %s", "Hi", "there");
   FormatOutput("%s %s", "Hi", "there!");
   FormatOutput("%s %s", "Hi", "there!!");
}
```

```Output
nSize: 8, buff: Hi there
nSize: 9, buff: Hi there!
nSize: -1, buff: Hi there!
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[`vprintf` Functions](../../c-runtime-library/vprintf-functions.md)<br/>
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)<br/>
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)<br/>
