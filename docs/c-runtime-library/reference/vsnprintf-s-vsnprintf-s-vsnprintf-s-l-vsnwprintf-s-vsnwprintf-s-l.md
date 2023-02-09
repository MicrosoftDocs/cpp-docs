---
description: "Learn more about: vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l"
title: "vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l"
ms.date: 09/29/2022
api_name: ["_vsnwprintf_s", "_vsnwprintf_s_l", "_vsnprintf_s", "vsnprintf_s", "_vsnprintf_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/vsnprintf_s", "STDIO/_vsnprintf_s", "CORECRT_WSTDIO/_vsnwprintf_s", "TCHAR/_vsntprintf_s", "STDIO/_vsnprintf_s_l", "CORECRT_WSTDIO/_vsnwprintf_s_l", "TCHAR/_vsntprintf_s_l",  "vsnprintf_s", "_vsnprintf_s", "_vsnwprintf_s", "_vsntprintf_s", "_vsnprintf_s_l", "_vsnwprintf_s_l", "_vsntprintf_s_l"]
helpviewer_keywords: ["vsnwprintf_s function", "_vsntprintf_s function", "_vsntprintf_s_l function", "vsntprintf_s function", "vsnwprintf_s_l function", "vsnprintf_s_l function", "vsntprintf_s_l function", "_vsnwprintf_s_l function", "_vsnprintf_s function", "vsnprintf_s function", "_vsnprintf_s_l function", "_vsnwprintf_s function", "formatted text [C++]"]
---
# `vsnprintf_s`, `_vsnprintf_s`, `_vsnprintf_s_l`, `_vsnwprintf_s`, `_vsnwprintf_s_l`

Write formatted output using a pointer to a list of arguments. These functions are versions of [`vsnprintf`, `_vsnprintf`, `_vsnprintf_l`, `_vsnwprintf`, `_vsnwprintf_l`](vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) with security enhancements as described in [Security features in the CRT](../security-features-in-the-crt.md).

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

*`buffer`*\
Storage location for output.

*`sizeOfBuffer`*\
The size of the *`buffer`* for output, as the character count.

*`count`*\
Maximum number of characters to write (not including the terminating null), or [`_TRUNCATE`](../truncate.md).

*`format`*\
Format specification.

*`argptr`*\
Pointer to list of arguments.

*`locale`*\
The locale to use.

For more information, see [Format specifications](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

**`vsnprintf_s`**, **`_vsnprintf_s`** and **`_vsnwprintf_s`** return the number of characters written, not including the terminating null, or a negative value if either truncation of the data or an output error occurs.

* If *`count`* is less than *`sizeOfBuffer`* and the number of characters of data is less than or equal to *`count`*, or *`count`* is [`_TRUNCATE`](../truncate.md) and the number of characters of data is less than *`sizeOfBuffer`*, then all of the data is written and the number of characters is returned.

* If *`count`* is less than *`sizeOfBuffer`* but the data exceeds *`count`* characters, then the first *`count`* characters are written. Truncation of the remaining data occurs and -1 is returned without invoking the invalid parameter handler.

* If *`count`* is [`_TRUNCATE`](../truncate.md) and the number of characters of data equals or exceeds *`sizeOfBuffer`*, then as much of the string as will fit in *`buffer`* (with terminating null) is written. Truncation of the remaining data occurs and -1 is returned without invoking the invalid parameter handler.

* If *`count`* is equal to or exceeds *`sizeOfBuffer`* but the number of characters of data is less than *`sizeOfBuffer`*, then all of the data is written (with terminating null) and the number of characters is returned.

* If *`count`* and the number of characters of data both equal or exceed *`sizeOfBuffer`*, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution continues after the invalid parameter handler, these functions set *`buffer`* to an empty string, set `errno` to `ERANGE`, and return -1.

* If *`buffer`* or *`format`* is a `NULL` pointer, or if *`count`* is less than or equal to zero, the invalid parameter handler is invoked. If execution is allowed to continue, these functions set `errno` to `EINVAL` and return -1.

### Error conditions

| Condition | Return value | `errno` |
|---|---|---|
| *`buffer`* is `NULL` | -1 | `EINVAL` |
| *`format`* is `NULL` | -1 | `EINVAL` |
| *`count`* <= 0 | -1 | `EINVAL` |
| *`sizeOfBuffer`* too small (and *`count`* != `_TRUNCATE`) | -1 (and *`buffer`* set to an empty string) | `ERANGE` |

## Remarks

**`vsnprintf_s`** is identical to **`_vsnprintf_s`**. **`vsnprintf_s`** is included for conformance to the ANSI standard. **`_vnsprintf`** is retained for backward compatibility.

Each of these functions takes a pointer to an argument list, then formats and writes up to *`count`* characters of the given data to the memory pointed to by *`buffer`* and appends a terminating null.

If *`count`* is [`_TRUNCATE`](../truncate.md), then these functions write as much of the string as will fit in *`buffer`* while leaving room for a terminating null. If the entire string (with terminating null) fits in *`buffer`*, then these functions return the number of characters written (not including the terminating null); otherwise, these functions return -1 to indicate that truncation occurred.

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

> [!NOTE]
> To ensure that there is room for the terminating null, be sure that *`count`* is strictly less than the buffer length, or use `_TRUNCATE`.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure template overloads](../secure-template-overloads.md).

> [!TIP]
> If you get an undefined external `_vsnprintf_s` error and are using the Universal C Runtime, add `legacy_stdio_definitions.lib` to the set of libraries to link. The Universal C Runtime doesn't export this function directly and is instead defined inline in `<stdio.h>`. For more information, see [Overview of potential upgrade issues](../../porting/overview-of-potential-upgrade-issues-visual-cpp.md#libraries) and [Visual Studio 2015 conformance changes](../../porting/visual-cpp-change-history-2003-2015.md#stdio_and_conio).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vsntprintf_s` | **`_vsnprintf_s`** | **`_vsnprintf_s`** | **`_vsnwprintf_s`** |
| `_vsntprintf_s_l` | **`_vsnprintf_s_l`** | **`_vsnprintf_s_l`** | **`_vsnwprintf_s_l`** |

## Requirements

| Routine | Required header | Optional headers |
|---|---|---|
| **`vsnprintf_s`** | `<stdio.h>` and `<stdarg.h>` | `<varargs.h>`* |
| **`_vsnprintf_s`**, **`_vsnprintf_s_l`** | `<stdio.h>` and `<stdarg.h>` | `<varargs.h>`* |
| **`_vsnwprintf_s`**, **`_vsnwprintf_s_l`** | `<stdio.h>` or `<wchar.h>`, and `<stdarg.h>` | `<varargs.h>`* |

\* Required for UNIX V compatibility.

For more compatibility information, see [Compatibility](../compatibility.md).

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

[Stream I/O](../stream-i-o.md)\
[`vprintf` functions](../vprintf-functions.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)\
