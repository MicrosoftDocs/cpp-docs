---
description: "Learn more about: printf_p Positional Parameters"
title: "printf_p Positional Parameters"
ms.date: "11/04/2016"
api_location: ["msvcr120.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr90.dll", "msvcr80.dll", "msvcr100.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
helpviewer_keywords: ["_printf_p function, positional parameters", "printf_p function, positional parameters"]
ms.assetid: beb4fd85-a7aa-4665-9085-2c907a5b9ab0
---
# printf_p Positional Parameters

Positional parameters provide the ability to specify by number which of the arguments is to be substituted into a field in a format string. The following positional parameter `printf` functions are available:

| Non-positional printf functions | Positional parameter equivalents |
|---|---|
|[printf, _printf_l, wprintf, _wprintf_l](../c-runtime-library/reference/printf-printf-l-wprintf-wprintf-l.md)|[_printf_p, _printf_p_l, _wprintf_p, _wprintf_p_l](../c-runtime-library/reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md)|
|[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../c-runtime-library/reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)|[_sprintf_p, _sprintf_p_l, _swprintf_p, _swprintf_p_l](../c-runtime-library/reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md)|
|[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../c-runtime-library/reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md)|[_cprintf_p, _cprintf_p_l, _cwprintf_p, _cwprintf_p_l](../c-runtime-library/reference/cprintf-p-cprintf-p-l-cwprintf-p-cwprintf-p-l.md)|
|[fprintf, _fprintf_l, fwprintf, _fwprintf_l](../c-runtime-library/reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)|[_fprintf_p, _fprintf_p_l, _fwprintf_p, _fwprintf_p_l](../c-runtime-library/reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md)|
|[vprintf, _vprintf_l, vwprintf, _vwprintf_l](../c-runtime-library/reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)|[_vprintf_p, _vprintf_p_l, _vwprintf_p, _vwprintf_p_l](../c-runtime-library/reference/vprintf-p-vprintf-p-l-vwprintf-p-vwprintf-p-l.md)|
|[vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l](../c-runtime-library/reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)|[_vfprintf_p, _vfprintf_p_l, _vfwprintf_p, _vfwprintf_p_l](../c-runtime-library/reference/vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)|
|[vsprintf, _vsprintf_l, vswprintf, _vswprintf_l, \__vswprintf_l](../c-runtime-library/reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md)|[_vsprintf_p, _vsprintf_p_l, _vswprintf_p, _vswprintf_p_l](../c-runtime-library/reference/vsprintf-p-vsprintf-p-l-vswprintf-p-vswprintf-p-l.md)|

## How to specify positional parameters

### Parameter indexing

By default, if no positional formatting is present, the positional functions behave identically to the non-positional ones. You specify the positional parameter to format by using `%n$` at the beginning of the format specifier, where `n` is the position of the parameter to format in the parameter list. The parameter position starts at 1 for the first argument after the format string. The remainder of the format specifier follows the same rules as the `printf` format specifier. For more information about format specfiers, see [Format Specification Syntax: printf and wprintf Functions](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

Here's an example of positional formatting:

```C
_printf_p("%1$s %2$s", "November", "10");
```

This prints:

```
November 10
```

The order of the numbers used doesn't need to match the order of the arguments. For example, this is a valid format string:

```C
_printf_p("%2$s %1$s", "November", "10");
```

This prints:

```
10 November
```

Unlike traditional format strings, positional parameters may be used more than once in a format string. For example,

```C
_printf_p("%1$d times %1$d is %2$d", 10, 100);
```

This prints:

```
10 times 10 is 100
```

All arguments must be used at least once somewhere in the format string. The maximum number of positional parameters allowed in a format string is given by `_ARGMAX`.

### Width and precision

You can use `*n$` to specify a positional parameter as a width or precision specifier, where `n` is the position of the width or precision parameter in the parameter list. The position of the width or precision value must appear immediately following the \* symbol. For example,

```C
_printf_p("%1$*2$s","Hello", 10);
```

or

```C
_printf_p("%2$*1$s", 10, "Hello");
```

### Mixing positional and non-positional arguments

Positional parameters may not be mixed with non-positional parameters in the same format string. If any positional formatting is used, all format specifiers must use positional formatting. However, `printf_p` and related functions still support non-positional parameters in format strings containing no positional parameters.

## Example

```C
// positional_args.c
// Build by using: cl /W4 positional_args.c
// Positional arguments allow the specification of the order
// in which arguments are consumed in a formatting string.

#include <stdio.h>

int main()
{
    int     i = 1,
            j = 2,
            k = 3;
    double  x = 0.1,
            y = 2.22,
            z = 333.3333;
    char    *s1 = "abc",
            *s2 = "def",
            *s3 = "ghi";

    // If positional arguments are unspecified,
    // normal input order is used.
    _printf_p("%d %d %d\n", i, j, k);

    // Positional arguments are numbers followed by a $ character.
    _printf_p("%3$d %1$d %2$d\n", i, j, k);

    // The same positional argument may be reused.
    _printf_p("%1$d %2$d %1$d\n", i, j);

    // The positional arguments may appear in any order.
    _printf_p("%1$s %2$s %3$s\n", s1, s2, s3);
    _printf_p("%3$s %1$s %2$s\n", s1, s2, s3);

    // Precision and width specifiers must be int types.
    _printf_p("%3$*5$f %2$.*4$f %1$*4$.*5$f\n", x, y, z, j, k);
}
```

```Output
1 2 3
3 1 2
1 2 1
abc def ghi
ghi abc def
333.333300 2.22 0.100
```

## See also

[Format Specification Syntax: printf and wprintf Functions](../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)
