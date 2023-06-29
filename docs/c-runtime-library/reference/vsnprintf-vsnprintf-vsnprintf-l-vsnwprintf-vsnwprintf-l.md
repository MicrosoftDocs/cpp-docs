---
title: "vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l"
description: "API reference for vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, and _vsnwprintf_l; which write formatted output using a pointer to a list of arguments."
ms.date: 06/27/2023
api_name: ["_vsnprintf", "_vsnprintf_l", "_vsnwprintf", "_vsnwprintf_l", "_vsnprintf", "_vsnprintf;", "vsnprintf; _vsnprintf", "_vsnwprintf;", "_vsnprintf_l;", "_vsnwprintf_l;"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntoskrnl.exe", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["STDIO/vsnprintf", "STDIO/_vsnprintf", "CORECRT_WSTDIO/_vsnwprintf", "TCHAR/_vsntprintf", "STDIO/_vsnprintf_l", "CORECRT_WSTDIO/_vsnwprintf_l", "TCHAR/_vsntprintf_l", "vsnprintf", "_vsnprintf", "_vsnwprintf", "_vsntprintf", "_vsnprintf_l", "_vsnwprintf_l", "_vsntprintf_l"]
helpviewer_keywords: ["vsntprintf function", "_vsnwprintf_l function", "vsnwprintf_l function", "vsntprintf_l function", "_vsntprintf function", "_vsnprintf_l function", "vsnprintf function", "_vsntprintf_l function", "vsnprintf_l function", "_vsnwprintf function", "_vsnprintf function", "formatted text [C++]", "vsnwprintf function"]
---
# `vsnprintf`, `_vsnprintf`, `_vsnprintf_l`, `_vsnwprintf`, `_vsnwprintf_l`

Write formatted output using a pointer to a list of arguments. More secure versions of these functions are available; see [`vsnprintf_s`, `_vsnprintf_s`, `_vsnprintf_s_l`, `_vsnwprintf_s`, `_vsnwprintf_s_l`](vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md).

## Syntax

```C
int vsnprintf(
   char *buffer,
   size_t count,
   const char *format,
   va_list argptr
);

int _vsnprintf(
   char *buffer,
   size_t count,
   const char *format,
   va_list argptr
);

int _vsnprintf_l(
   char *buffer,
   size_t count,
   const char *format,
   _locale_t locale,
   va_list argptr
);

int _vsnwprintf(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   va_list argptr
);

int _vsnwprintf_l(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
);

template <size_t size>
int vsnprintf(
   char (&buffer)[size],
   size_t count,
   const char *format,
   va_list argptr
); // C++ only

template <size_t size>
int _vsnprintf(
   char (&buffer)[size],
   size_t count,
   const char *format,
   va_list argptr
); // C++ only

template <size_t size>
int _vsnprintf_l(
   char (&buffer)[size],
   size_t count,
   const char *format,
   _locale_t locale,
   va_list argptr
); // C++ only

template <size_t size>
int _vsnwprintf(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format,
   va_list argptr
); // C++ only

template <size_t size>
int _vsnwprintf_l(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format,
   _locale_t locale,
   va_list argptr
); // C++ only
```

### Parameters

*`buffer`*\
Storage location for output.

*`count`*\
Maximum number of characters to write. For the functions that take `wchar_t`, it's the number of wide characters to write.

*`format`*\
Format specification.

*`argptr`*\
Pointer to list of arguments.

*`locale`*\
The locale to use.

For more information, see [Format specification syntax](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

The number of characters written, not including the terminating `NULL`, or a negative value if an output error occurs.

See [Behavior summary](#behavior-summary) for details.

## Remarks

Each of these functions takes a pointer to an argument list, then formats the data, and writes up to *`count`* characters to the memory pointed to by *`buffer`*. The **`vsnprintf`** function always writes a null terminator, even if it truncates the output. When you use **`_vsnprintf`** and **`_vsnwprintf`**, the buffer is null-terminated only if there's room at the end (that is, if the number of characters to write is less than *`count`*).

Beginning with the UCRT in Visual Studio 2015 and Windows 10, **`vsnprintf`** is no longer identical to **`_vsnprintf`**. The **`vsnprintf`** function conforms to the C99 standard; **`_vnsprintf`** is kept for backward compatibility with older code. The difference is that if you run out of buffer, `vsnprintf` null-terminates the end of the buffer and returns the number of characters that would have been required, while `_vsnprintf` doesn't null-terminate the buffer and returns -1. Also, `_vsnprintf()` includes one more character in the output because it doesn't null-terminate the buffer.

> [!IMPORTANT]
> To prevent certain kinds of security risks, ensure that *`format`* isn't a user-defined string. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

> [!NOTE]
> To ensure that there's room for the terminating null when calling **`_vsnprintf`**, **`_vsnprintf_l`**, **`_vsnwprintf`** and **`_vsnwprintf_l`**, be sure that *`count`* is strictly less than the buffer length and initialize the buffer to null prior to calling the function.
>
> Because **`vsnprintf`** always writes a terminating null, the *`count`* parameter may be equal to the size of the buffer.

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure template overloads](../secure-template-overloads.md).

### Behavior summary

For the following table:

- Let `sizeOfBuffer` be the size of `buffer`. If the function takes a `char` buffer, the size is in bytes. If the function takes a `wchar_t` buffer, the size specifies the number of 16-bit words.
- Let `len` be the size of the formatted data. If the function takes a `char` buffer, the size is in bytes. If the function takes a `wchar_t` buffer, the size specifies the number of 16-bit words.
- Characters refer to `char` characters for functions that take a `char` buffer, and to `wchar_t` characters for functions that take a `wchar_t` buffer.
- For more information about the invalid parameter handler, see [Parameter Validation](../../c-runtime-library/parameter-validation.md).

| Condition | Behavior | Return value | `errno` | Invokes invalid parameter handler|
|--|--|--|--|--|
| Success | Writes the characters into the buffer using the specified format string. | The number of characters written, not counting the terminating null character. | N/A | No |
| Encoding error during formatting | If processing string specifier `s`, `S`, or `Z`, format specification processing stops. | -1 | `EILSEQ` (42) | No |
| Encoding error during formatting | If processing character specifier `c` or `C`, the invalid character is skipped. The number of characters written isn't incremented for the skipped character, nor is any data written for it. Processing the format specification continues after skipping the specifier with the encoding error. | The number of characters written, not including the terminating `NULL`. | `EILSEQ` (42) | No |
| `buffer == NULL` and `count != 0` | If execution continues after invalid parameter handler executes, sets `errno` and returns a negative value.| -1 | `EINVAL` (22) | Yes |
| `count == 0` | No data is written | The number of characters that would have been written, not including the terminating `NULL`. You can use this result to allocate sufficient buffer space for the string and a terminating `NULL`, and then call the function again to fill the buffer. | N/A | No |
| `count < 0`| Unsafe: the value is treated as unsigned, likely creating a large value that results in overwriting the memory that follows the buffer. | The number of characters written. | N/A | No |
| `count < sizeOfBuffer` and `len <= count` | All of the data is written and a terminating `NULL` is appended. | The number of characters written, not including the terminating `NULL`. | N/A | No |
| `count < sizeOfBuffer` and `len > count` | The first *`count-1`* characters are written followed by a null-terminator. | The number of characters that would have been written had `count` matched the number of characters to output, not including the null-terminator. | N/A | No |
| `count >= sizeOfBuffer` and `len < sizeOfBuffer` | All of the data is written with a terminating `NULL`. | The number of characters written, not including the terminating `NULL`. | N/A | No |
| `count >= sizeOfBuffer` and `len >= sizeOfBuffer` | Unsafe: overwrites the memory that follows the buffer. | The number of characters written, not including the terminating `NULL`. | N/A | No |
| `format == NULL` | No data is written. If execution continues after invalid parameter handler executes, sets `errno` and returns a negative value. | -1 | `EINVAL` (22) | Yes |

For information about these and other error codes, see [`_doserrno`, `errno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_vsntprintf` | **`_vsnprintf`** | **`_vsnprintf`** | **`_vsnwprintf`** |
| `_vsntprintf_l` | **`_vsnprintf_l`** | **`_vsnprintf_l`** | **`_vsnwprintf_l`** |

## Requirements

| Routine | Required header (C) | Required header (C++) |
|---|---|---|
| **`vsnprintf`**, **`_vsnprintf`**, **`_vsnprintf_l`** | `<stdio.h>` | `<stdio.h>` or  `<cstdio>` |
| **`_vsnwprintf`**, **`_vsnwprintf_l`** | `<stdio.h>` or `<wchar.h>` | `<stdio.h>`, `<wchar.h>`, `<cstdio>`, or `<cwchar>` |

The **`_vsnprintf`**, **`_vsnprintf_l`**, **`_vsnwprintf`** and **`_vsnwprintf_l`** functions are Microsoft-specific. For more compatibility information, see [Compatibility](../compatibility.md).

## Example: Use wide characters with `_vsnwprintf()`

```C
// crt_vsnwprintf.c
// compile by using: cl /W3 crt_vsnwprintf.c

// To turn off error C4996, define this symbol:
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <wtypes.h>

#define BUFFCOUNT (10)

void FormatOutput(LPCWSTR formatstring, ...)
{
    int nSize = 0;
    wchar_t buff[BUFFCOUNT];
    memset(buff, 0, sizeof(buff));
    va_list args;
    va_start(args, formatstring);
    // Note: _vsnwprintf is deprecated; consider vsnwprintf_s instead
    nSize = _vsnwprintf(buff, BUFFCOUNT - 1, formatstring, args); // C4996
    wprintf(L"nSize: %d, buff: %ls\n", nSize, buff);
    va_end(args);
}

int main() {
    FormatOutput(L"%ls %ls", L"Hi", L"there");
    FormatOutput(L"%ls %ls", L"Hi", L"there!");
    FormatOutput(L"%ls %ls", L"Hi", L"there!!");
}
```

```Output
nSize: 8, buff: Hi there
nSize: 9, buff: Hi there!
nSize: -1, buff: Hi there!
```

The behavior changes if you use vsnprintf instead, along with narrow-string parameters. The *`count`* parameter can be the entire size of the buffer, and the return value is the number of characters that would have been written if *`count`* was large enough:

## Example: Use `vsnprintf()` with narrow strings

```C
// crt_vsnprintf.c
// compile by using: cl /W4 crt_vsnprintf.c
#include <stdio.h>
#include <stdarg.h> // for va_list, va_start
#include <string.h> // for memset

#define BUFFCOUNT (10)

void FormatOutput(char* formatstring, ...)
{
    int nSize = 0;
    char buff[BUFFCOUNT];
    memset(buff, 0, sizeof(buff));
    va_list args;
    va_start(args, formatstring);
    nSize = vsnprintf(buff, sizeof(buff), formatstring, args);
    printf("nSize: %d, buff: %s\n", nSize, buff);
    va_end(args);
}

int main() {
    FormatOutput("%s %s", "Hi", "there");   //  8 chars + null
    FormatOutput("%s %s", "Hi", "there!");  //  9 chars + null
    FormatOutput("%s %s", "Hi", "there!!"); // 10 chars + null
}
```

```Output
nSize: 8, buff: Hi there
nSize: 9, buff: Hi there!
nSize: 10, buff: Hi there!
```

## See also

[Stream I/O](../stream-i-o.md)\
[`vprintf` functions](../vprintf-functions.md)\
[Format specification syntax: `printf` and `wprintf` functions](../format-specification-syntax-printf-and-wprintf-functions.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)
