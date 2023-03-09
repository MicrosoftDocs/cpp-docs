---
description: "Learn more about: sprintf, _sprintf_l, swprintf, _swprintf, _swprintf_l, __swprintf_l"
title: "sprintf, _sprintf_l, swprintf, _swprintf_l, __swprintf_l"
ms.date: "3/9/2021"
api_name: ["__swprintf_l", "sprintf", "_sprintf_l", "_swprintf_l", "swprintf", "_swprintf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntdll.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_stprintf_l", "__swprintf_l", "sprintf_l", "_swprintf", "swprintf", "_sprintf_l", "sprintf", "_stprintf", "stprintf_l"]
helpviewer_keywords: ["_swprintf_l function", "_stprintf function", "__swprintf_l function", "stprintf function", "sprintf function", "_sprintf_l function", "_stprintf_l function", "swprintf function", "_swprintf function", "strings [C++], writing to", "_CRT_NON_CONFORMING_SWPRINTFS", "swprintf_l function", "stprintf_l function", "sprintf_l function", "formatted text [C++]"]
---
# `sprintf`, `_sprintf_l`, `swprintf`, `_swprintf`, `_swprintf_l`, `__swprintf_l`

Write formatted data to a string. More secure versions of some of these functions are available; see [`sprintf_s`, `_sprintf_s_l`, `swprintf_s`, `_swprintf_s_l`](sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md). The secure versions of **`swprintf`** and **`_swprintf_l`** take the size of the buffer as a parameter.

## Syntax

```C
int sprintf(
   char *buffer,
   const char *format [,
   argument] ...
);

int _sprintf_l(
   char *buffer,
   const char *format,
   _locale_t locale [,
   argument] ...
);

int swprintf(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format [,
   argument]...
);

int _swprintf(
   wchar_t *buffer,
   const wchar_t *format [,
   argument]...
);

int _swprintf_l(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   _locale_t locale [,
   argument] ...
);

int __swprintf_l(
   wchar_t *buffer,
   const wchar_t *format,
   _locale_t locale [,
   argument] ...
);

template <size_t size>
int sprintf(
   char (&buffer)[size],
   const char *format [,
   argument] ...
); // C++ only

template <size_t size>
int _sprintf_l(
   char (&buffer)[size],
   const char *format,
   _locale_t locale [,
   argument] ...
); // C++ only
```

### Parameters

*`buffer`*\
Storage location for output

*`count`*\
Maximum number of characters to store in the Unicode version of this function.

*`format`*\
Format-control string

*`argument`*\
Optional arguments

*`locale`*\
The locale to use.

For more information, see [Format specification syntax](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

The number of characters written, or -1 if an error occurred. If *`buffer`* or *`format`* is a null pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return -1 and set `errno` to `EINVAL`.

**`sprintf`** returns the number of bytes stored in *`buffer`*, not counting the terminating null character. **`swprintf`** returns the number of wide characters stored in *`buffer`*, not counting the terminating null wide character.

## Remarks

The **`sprintf`** function formats and stores a series of characters and values in *`buffer`*. Each *`argument`* (if any) is converted and output according to the corresponding format specification in *`format`*. The format consists of ordinary characters and has the same form and function as the *`format`* argument for [`printf`](printf-printf-l-wprintf-wprintf-l.md). A null character is appended after the last character written. If copying occurs between strings that overlap, the behavior is undefined.

> [!IMPORTANT]
> Using **`sprintf`**, there is no way to limit the number of characters written, which means that code using **`sprintf`** is susceptible to buffer overruns. Consider using the related function [`_snprintf`](snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md), which specifies a maximum number of characters to write to *`buffer`*, or use [`_scprintf`](scprintf-scprintf-l-scwprintf-scwprintf-l.md) to determine how large a buffer is required. Also, ensure that *`format`* is not a user-defined string.
>
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

**`swprintf`** is a wide-character version of **`sprintf`**; the pointer arguments to **`swprintf`** are wide-character strings. Detection of encoding errors in **`swprintf`** may differ from **`sprintf`**. **`swprintf`** and **`fwprintf`** behave identically except **`swprintf`** writes output to a string rather than to a destination of type `FILE`, and **`swprintf`** requires the *`count`* parameter to specify the maximum number of characters to write. The versions of these functions with the **`_l`** suffix are identical except they use the locale parameter passed in instead of the current thread locale.

Before the signature for `swprintf` was standardized, a version shipped in an older Microsoft C runtime library that didn't take the character count parameter. The older version is still available in the Microsoft C runtime library, but it's deprecated and was renamed `_swprintf()`. For code that was written against the older signature, define `_CRT_NON_CONFORMING_SWPRINTFS`, which maps calls to `swprintf` to `_swprintf`. In a future version, the old behavior may be removed, so code should be changed to use the new conformant behavior.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure template overloads](../secure-template-overloads.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| **`_stprintf`** | **`sprintf`** | **`sprintf`** | **`_swprintf`** |
| **`_stprintf_l`** | **`_sprintf_l`** | **`_sprintf_l`** | **`__swprintf_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`sprintf`**, **`_sprintf_l`** | `<stdio.h>` |
| **`swprintf`**, **`_swprintf`**, **`_swprintf_l`** | `<stdio.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example: Use `sprintf` to format data

```C
// crt_sprintf.c
// compile with: /W3
// This program uses sprintf to format various
// data and place them in the string named buffer.

#include <stdio.h>

int main( void )
{
   char  buffer[200], s[] = "computer", c = 'l';
   int   i = 35, j;
   float fp = 1.7320534f;

   // Format and print various data:
   j  = sprintf( buffer,     "   String:    %s\n", s ); // C4996
   j += sprintf( buffer + j, "   Character: %c\n", c ); // C4996
   j += sprintf( buffer + j, "   Integer:   %d\n", i ); // C4996
   j += sprintf( buffer + j, "   Real:      %f\n", fp );// C4996
   // Note: sprintf is deprecated; consider using sprintf_s instead

   printf( "Output:\n%s\ncharacter count = %d\n", buffer, j );
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
// crt_swprintf.c
// wide character example
// also demonstrates swprintf returning error code
#include <stdio.h>

int main( void )
{
   wchar_t buf[100];
   int len = swprintf( buf, 100, L"%s", L"Hello world" );
   printf( "wrote %d characters\n", len );
   len = swprintf( buf, 100, L"%s", L"Hello\xffff world" );
   // swprintf fails because string contains WEOF (\xffff)
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
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](scanf-scanf-l-wscanf-wscanf-l.md)\
[`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](sscanf-sscanf-l-swscanf-swscanf-l.md)\
[`vprintf` functions](../vprintf-functions.md)
