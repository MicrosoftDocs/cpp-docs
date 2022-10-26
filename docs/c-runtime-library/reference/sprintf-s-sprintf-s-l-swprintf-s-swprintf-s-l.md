---
description: "Learn more about: sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l"
title: "sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l"
ms.date: "3/9/2021"
api_name: ["_swprintf_s_l", "_sprintf_s_l", "swprintf_s", "sprintf_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["swprintf_s", "sprintf_s", "stdio/sprintf_s", "stdio/swprintf_s", "stdio/_sprintf_s_l", "stdio/_swprintf_s_l", "_sprintf_s_l", "_swprintf_s_l"]
helpviewer_keywords: ["stprintf_s function", "stprintf_s_l function", "swprintf_s_l function", "sprintf_s function", "swprintf_s function", "_swprintf_s_l function", "sprintf_s_l function", "_stprintf_s_l function", "_stprintf_s function", "_sprintf_s_l function", "formatted text [C++]"]
---
# `sprintf_s`, `_sprintf_s_l`, `swprintf_s`, `_swprintf_s_l`

Write formatted data to a string. These functions are versions of [`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) with security enhancements as described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
int sprintf_s(
   char *buffer,
   size_t sizeOfBuffer,
   const char *format,
   ...
);
int _sprintf_s_l(
   char *buffer,
   size_t sizeOfBuffer,
   const char *format,
   _locale_t locale,
   ...
);
int swprintf_s(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   const wchar_t *format,
   ...
);
int _swprintf_s_l(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   const wchar_t *format,
   _locale_t locale,
   ...
);
template <size_t size>
int sprintf_s(
   char (&buffer)[size],
   const char *format,
   ...
); // C++ only
template <size_t size>
int swprintf_s(
   wchar_t (&buffer)[size],
   const wchar_t *format,
   ...
); // C++ only
```

### Parameters

*`buffer`*\
Storage location for output

*`sizeOfBuffer`*\
Maximum number of characters to store.

*`format`*\
Format-control string

*`...`*\
Optional arguments to be formatted

*`locale`*\
The locale to use.

For more information, see [Format specification syntax](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

The number of characters written, or -1 if an error occurred. If *`buffer`* or *`format`* is a null pointer, **`sprintf_s`** and **`swprintf_s`** return -1 and set `errno` to `EINVAL`.

**`sprintf_s`** returns the number of bytes stored in *`buffer`*, not counting the terminating null character. **`swprintf_s`** returns the number of wide characters stored in *`buffer`*, not counting the terminating null wide character.

## Remarks

The **`sprintf_s`** function formats and stores a series of characters and values in *`buffer`*. Each *`argument`* (if any) is converted and output according to the corresponding format specification in *`format`*. The format consists of ordinary characters and has the same form and function as the *`format`* argument for [`printf`](printf-printf-l-wprintf-wprintf-l.md). A null character is appended after the last character written. If copying occurs between strings that overlap, the behavior is undefined.

One main difference between **`sprintf_s`** and [`sprintf`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) is that **`sprintf_s`** checks the format string for valid formatting characters, whereas [`sprintf`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) only checks if the format string or buffer are `NULL` pointers. If either check fails, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the function returns -1 and sets `errno` to `EINVAL`.

The other main difference between **`sprintf_s`** and [`sprintf`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) is that **`sprintf_s`** takes a length parameter specifying the size of the output buffer in characters. If the buffer is too small for the formatted text, including the terminating null, then the buffer is set to an empty string by placing a null character at *`buffer[0]`*, and the invalid parameter handler is invoked. Unlike `_snprintf`, **`sprintf_s`** guarantees that the buffer will be null-terminated unless the buffer size is zero.

**`swprintf_s`** is a wide-character version of **`sprintf_s`**; the pointer arguments to **`swprintf_s`** are wide-character strings. Detection of encoding errors in **`swprintf_s`** may differ from the detection in **`sprintf_s`**. The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

In C++, use of these functions is simplified by template overloads. The overloads can infer buffer length automatically, which eliminates the need to specify a size argument. And, they can automatically replace older, non-secure functions with newer, more secure counterparts. For more information, see [Secure template overloads](../secure-template-overloads.md).

There are versions of **`sprintf_s`** that offer more control over what happens if the buffer is too small. For more information, see [`_snprintf_s`, `_snprintf_s_l`, `_snwprintf_s`, `_snwprintf_s_l`](snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md).

> [!IMPORTANT]
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-text routine mappings

| TCHAR.H routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_stprintf_s` | **`sprintf_s`** | **`sprintf_s`** | **`swprintf_s`** |
| `_stprintf_s_l` | **`_sprintf_s_l`** | **`_sprintf_s_l`** | **`_swprintf_s_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`sprintf_s`**, **`_sprintf_s_l`** | C: \<stdio.h><br /><br /> C++: \<cstdio> or \<stdio.h> |
| **`swprintf_s`**, **`_swprintf_s_l`** | C: \<stdio.h> or \<wchar.h><br /><br /> C++: \<cstdio>, \<cwchar>, \<stdio.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example: Use sprintf_s to format data

```C
// crt_sprintf_s.c
// This program uses sprintf_s to format various
// data and place them in the string named buffer.
//

#include <stdio.h>

int main( void )
{
   char  buffer[200], s[] = "computer", c = 'l';
   int   i = 35, j;
   float fp = 1.7320534f;

   // Format and print various data:
   j  = sprintf_s( buffer, 200,     "   String:    %s\n", s );
   j += sprintf_s( buffer + j, 200 - j, "   Character: %c\n", c );
   j += sprintf_s( buffer + j, 200 - j, "   Integer:   %d\n", i );
   j += sprintf_s( buffer + j, 200 - j, "   Real:      %f\n", fp );

   printf_s( "Output:\n%s\ncharacter count = %d\n", buffer, j );
}
```

```Output
Output:
   String:    computer
   Character: l
   Integer:   35
   Real:      1.732053

character count = 79
```

## Example: Error code handling

```C
// crt_swprintf_s.c
// wide character example
// also demonstrates swprintf_s returning error code
#include <stdio.h>

int main( void )
{
   wchar_t buf[100];
   int len = swprintf_s( buf, 100, L"%s", L"Hello world" );
   printf( "wrote %d characters\n", len );
   len = swprintf_s( buf, 100, L"%s", L"Hello\xffff world" );
   // swprintf_s fails because string contains WEOF (\xffff)
   printf( "wrote %d characters\n", len );
}
```

```Output
wrote 11 characters
wrote -1 characters
```

## See also

[Stream I/O](../stream-i-o.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](scanf-scanf-l-wscanf-wscanf-l.md)\
[`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](sscanf-sscanf-l-swscanf-swscanf-l.md)\
[`vprintf` functions](../vprintf-functions.md)
