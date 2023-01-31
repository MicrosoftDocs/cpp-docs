---
description: "Learn more about: vprintf Functions"
title: "vprintf Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["vprintf functions", "formatted text [C++]"]
ms.assetid: 02ac7c51-eab1-4bf0-bf4c-77065e3fa744
---
# `vprintf` functions

Each of the `vprintf` functions takes a pointer to an argument list, then formats and writes the given data to a particular destination. The functions differ in several ways: in the parameter validation, whether the functions take single-byte or wide character strings, the output destination, and the support for specifying the order parameters are used in the format string.

[`_vcprintf`, `_vcwprintf`](./reference/vcprintf-vcprintf-l-vcwprintf-vcwprintf-l.md)\
[`vfprintf`, `vfwprintf`](./reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md)\
[`_vfprintf_p`, `_vfprintf_p_l`, `_vfwprintf_p`, `_vfwprintf_p_l`](./reference/vfprintf-p-vfprintf-p-l-vfwprintf-p-vfwprintf-p-l.md)\
[`vfprintf_s`, `_vfprintf_s_l`, `vfwprintf_s`, `_vfwprintf_s_l`](./reference/vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md)\
[`vprintf`, `vwprintf`](./reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md)\
[`_vprintf_p`, `_vprintf_p_l`, `_vwprintf_p`, `_vwprintf_p_l`](./reference/vprintf-p-vprintf-p-l-vwprintf-p-vwprintf-p-l.md)\
[`vprintf_s`, `_vprintf_s_l`, `vwprintf_s`, `_vwprintf_s_l`](./reference/vprintf-s-vprintf-s-l-vwprintf-s-vwprintf-s-l.md)\
[`_vscprintf`, `_vscprintf_l`, `_vscwprintf`, `_vscwprintf_l`](./reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md)\
[`_vsnprintf`, `_vsnwprintf`](./reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md)
[`vsprintf`, `vswprintf`](./reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md)\
[`_vsprintf_p`, `_vsprintf_p_l`, `_vswprintf_p`, `_vswprintf_p_l`](./reference/vsprintf-p-vsprintf-p-l-vswprintf-p-vswprintf-p-l.md)\
[`vsprintf_s`, `_vsprintf_s_l`, `vswprintf_s`, `_vswprintf_s_l`](./reference/vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md)

## Remarks

The `vprintf` functions are similar to their counterpart functions as listed in the following table. However, each `vprintf` function accepts a pointer to an argument list, whereas each of the counterpart functions accepts an argument list.

These functions format data for output to destinations as follows.

| Function | Counterpart function | Output destination | Parameter Validation | Positional Parameter Support |
|---|---|---|---|---|
| `_vcprintf` | [`_cprintf`](./reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md) | console | Check for null. | no |
| `_vcwprintf` | [`_cwprintf`](./reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md) | console | Check for null. | no |
| `vfprintf` | [`fprintf`](./reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md) | *`stream`* | Check for null. | no |
| `vfprintf_p` | [`fprintf_p`](./reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md) | *`stream`* | Check for null and valid format. | yes |
| `vfprintf_s` | [`fprintf_s`](./reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md) | *`stream`* | Check for null and valid format. | no |
| `vfwprintf` | [`fwprintf`](./reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md) | *`stream`* | Check for null. | no |
| `vfwprintf_p` | [`fwprintf_p`](./reference/fprintf-p-fprintf-p-l-fwprintf-p-fwprintf-p-l.md) | *`stream`* | Check for null and valid format. | yes |
| `vfwprintf_s` | [`fwprintf_s`](./reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md) | *`stream`* | Check for null and valid format. | no |
| `vprintf` | [`printf`](./reference/printf-printf-l-wprintf-wprintf-l.md) | `stdout` | Check for null. | no |
| `vprintf_p` | [`printf_p`](./reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md) | `stdout` | Check for null and valid format. | yes |
| `vprintf_s` | [`printf_s`](./reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) | `stdout` | Check for null and valid format. | no |
| `vwprintf` | [`wprintf`](./reference/printf-printf-l-wprintf-wprintf-l.md) | `stdout` | Check for null. | no |
| `vwprintf_p` | [`wprintf_p`](./reference/printf-p-printf-p-l-wprintf-p-wprintf-p-l.md) | `stdout` | Check for null and valid format. | yes |
| `vwprintf_s` | [`wprintf_s`](./reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) | `stdout` | Check for null and valid format. | no |
| `vsprintf` | [`sprintf`](./reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) | memory pointed to by *`buffer`* | Check for null. | no |
| `vsprintf_p` | [`sprintf_p`](./reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md) | memory pointed to by *`buffer`* | Check for null and valid format. | yes |
| `vsprintf_s` | [`sprintf_s`](./reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md) | memory pointed to by *`buffer`* | Check for null and valid format. | no |
| `vswprintf` | [`swprintf`](./reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) | memory pointed to by *`buffer`* | Check for null. | no |
| `vswprintf_p` | [`swprintf_p`](./reference/sprintf-p-sprintf-p-l-swprintf-p-swprintf-p-l.md) | memory pointed to by *`buffer`* | Check for null and valid format. | yes |
| `vswprintf_s` | [`swprintf_s`](./reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md) | memory pointed to by *`buffer`* | Check for null and valid format. | no |
| `_vscprintf` | [`_vscprintf`](./reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md) | memory pointed to by *`buffer`* | Check for null. | no |
| `_vscwprintf` | [`_vscwprintf`](./reference/vscprintf-vscprintf-l-vscwprintf-vscwprintf-l.md) | memory pointed to by *`buffer`* | Check for null. | no |
| `_vsnprintf` | [`_snprintf`](./reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) | memory pointed to by *`buffer`* | Check for null. | no |
| `_vsnwprintf` | [`_snwprintf`](./reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) | memory pointed to by *`buffer`* | Check for null. | no |

The `argptr` argument has type `va_list`, which is defined in VARARGS.H and STDARG.H. The `argptr` variable must be initialized by **va_start,** and may be reinitialized by subsequent `va_arg` calls; `argptr` then points to the beginning of a list of arguments that are converted and transmitted for output according to the corresponding specifications in the *`format`* argument. *`format`* has the same form and function as the *`format`* argument for [`printf`](./reference/printf-printf-l-wprintf-wprintf-l.md). None of these functions invoke `va_end`. For a more complete description of each `vprintf` function, see the description of its counterpart function as listed in the preceding table.

`_vsnprintf` differs from `vsprintf` in that it writes no more than *`count`* bytes to *`buffer`*.

The versions of these functions with the **w** infix in the name are wide-character versions of the corresponding functions without the **w** infix; in each of these wide-character functions, *`buffer`* and *`format`* are wide-character strings. Otherwise, each wide-character function behaves identically to its SBCS counterpart function.

The versions of these functions with **`_s`** and **`_p`** suffixes are the more secure versions. These versions validate the format strings. They'll generate an exception if the format string isn't well formed (for example, if invalid formatting characters are used).

The versions of these functions with the **`_p`** suffix let you specify the order in which the supplied arguments are substituted in the format string. For more information, see [printf_p Positional Parameters](./printf-p-positional-parameters.md).

For `vsprintf`, `vswprintf`, `_vsnprintf` and `_vsnwprintf`, if copying occurs between strings that overlap, the behavior is undefined.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns). If using the secure versions of these functions (either the **`_s`** or **`_p`** suffixes), a user-supplied format string could trigger an invalid parameter exception if the user-supplied string contains invalid formatting characters.

## See also

[Stream I/O](./stream-i-o.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](./reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](./reference/printf-printf-l-wprintf-wprintf-l.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](./reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`va_arg`, `va_copy`, `va_end`, `va_start`](./reference/va-arg-va-copy-va-end-va-start.md)
