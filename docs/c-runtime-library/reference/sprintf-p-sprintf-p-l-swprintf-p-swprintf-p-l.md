---
description: "Learn more about: _sprintf_p, _sprintf_p_l, _swprintf_p, _swprintf_p_l"
title: "_sprintf_p, _sprintf_p_l, _swprintf_p, _swprintf_p_l"
ms.date: "3/9/2021"
api_name: ["_sprintf_p", "_swprintf_p_l", "_swprintf_p", "_sprintf_p_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_sprintf_p", "_swprintf_p_l", "_sprintf_p_l", "_swprintf_p", "sprintf_p", "swprint_p_l", "swprintf_p", "swprintf_p_l"]
helpviewer_keywords: ["sprintf_p_l function", "swprintf_p function", "swprintf_p_l function", "_sprintf_p function", "_sprintf_p_l function", "_swprintf_p function", "sprintf_p function", "_stprintf_p function", "stprintf_p function", "_swprintf_p_l function", "stprintf_p_l function", "formatted text [C++]", "_stprintf_p_l function"]
---
# `_sprintf_p`, `_sprintf_p_l`, `_swprintf_p`, `_swprintf_p_l`

Write formatted data to a string with the ability to specify the order that the parameters are used in the format string.

## Syntax

```C
int _sprintf_p(
   char *buffer,
   size_t sizeOfBuffer,
   const char *format [,
   argument_list]
);
int _sprintf_p_l(
   char *buffer,
   size_t sizeOfBuffer,
   const char *format,
   _locale_t locale [,
   argument_list]
);
int _swprintf_p(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   const wchar_t *format [,
   argument_list]
);
int _swprintf_p_l(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   const wchar_t *format,
   _locale_t locale [,
   argument_list]
);
```

### Parameters

*`buffer`*\
Storage location for output

*`sizeOfBuffer`*\
Maximum number of characters to store.

*`format`*\
Format-control string.

*`argument_list`*\
Optional arguments to the format string.

*`locale`*\
The locale to use.

For more information, see [Format specification syntax](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

The number of characters written, or -1 if an error occurred.

## Remarks

The **`_sprintf_p`** function formats and stores a series of characters and values in *`buffer`*. Each argument in the *`argument_list`* (if any) is converted and output according to the corresponding format specification in *`format`*. The *`format`* argument uses the [format specification syntax for `printf` and `wprintf` functions](../format-specification-syntax-printf-and-wprintf-functions.md). A null character is appended after the last character written. If copying occurs between strings that overlap, the behavior is undefined. The difference between **`_sprintf_p`** and **`sprintf_s`** is that **`_sprintf_p`** supports positional parameters, which allows specifying the order in which the arguments are used in the format string. For more information, see [`printf_p` Positional Parameters](../printf-p-positional-parameters.md).

**`_swprintf_p`** is a wide-character version of **`_sprintf_p`**; the pointer arguments to **`_swprintf_p`** are wide-character strings. Detection of encoding errors in **`_swprintf_p`** may differ from the detection in **`_sprintf_p`**. **`_swprintf_p`** and **`fwprintf_p`** behave identically except that **`_swprintf_p`** writes output to a string rather than to a destination of type `FILE`, and **`_swprintf_p`** requires the *`count`* parameter to specify the maximum number of characters to be written. The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

**`_sprintf_p`** returns the number of bytes stored in *`buffer`*, not counting the terminating null character. **`_swprintf_p`** returns the number of wide characters stored in *`buffer`*, not counting the terminating null wide character. If *`buffer`* or *`format`* is a null pointer, or if the format string contains invalid formatting characters, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return -1 and set `errno` to `EINVAL`.

> [!IMPORTANT]
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-text routine mappings

| `TCHAR.H` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_stprintf_p` | **`_sprintf_p`** | **`_sprintf_p`** | **`_swprintf_p`** |
| `_stprintf_p_l` | **`_sprintf_p_l`** | **`_sprintf_p_l`** | **`_swprintf_p_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_sprintf_p`**, **`_sprintf_p_l`** | `<stdio.h>` |
| **`_swprintf_p`**, **`_swprintf_p_l`** | `<stdio.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example: Use `_sprintf_p` to format data

```C
// crt_sprintf_p.c
// This program uses _sprintf_p to format various
// data and place them in the string named buffer.
//

#include <stdio.h>

int main( void )
{
    char     buffer[200],
            s[] = "computer", c = 'l';
    int      i = 35,
            j;
    float    fp = 1.7320534f;

    // Format and print various data:
    j  = _sprintf_p( buffer, 200,
                     "   String:    %s\n", s );
    j += _sprintf_p( buffer + j, 200 - j,
                     "   Character: %c\n", c );
    j += _sprintf_p( buffer + j, 200 - j,
                     "   Integer:   %d\n", i );
    j += _sprintf_p( buffer + j, 200 - j,
                     "   Real:      %f\n", fp );

    printf( "Output:\n%s\ncharacter count = %d\n",
            buffer, j );
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
// crt_swprintf_p.c
// This is the wide character example which
// also demonstrates _swprintf_p returning
// error code.
#include <stdio.h>

#define BUFFER_SIZE 100

int main( void )
{
    wchar_t buffer[BUFFER_SIZE];
    int     len;

    len = _swprintf_p(buffer, BUFFER_SIZE, L"%2$s %1$d",
                      0, L" marbles in your head.");
    _printf_p( "Wrote %d characters\n", len );

    // _swprintf_p fails because string contains WEOF (\xffff)
    len = _swprintf_p(buffer, BUFFER_SIZE, L"%s",
                      L"Hello\xffff world" );
    _printf_p( "Wrote %d characters\n", len );
}
```

```Output
Wrote 24 characters
Wrote -1 characters
```

## See also

[Stream I/O](../stream-i-o.md)\
[`_fprintf_p`, `_fprintf_p_l`, `_fwprintf_p`, `_fwprintf_p_l`](fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`_printf_p`, `_printf_p_l`, `_wprintf_p`, `_wprintf_p_l`](printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](scanf-scanf-l-wscanf-wscanf-l.md)\
[`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](sscanf-sscanf-l-swscanf-swscanf-l.md)\
[`sscanf_s`, `_sscanf_s_l`, `swscanf_s`, `_swscanf_s_l`](sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md)\
[`vprintf` functions](../vprintf-functions.md)\
[`printf_p` Positional Parameters](../printf-p-positional-parameters.md)
