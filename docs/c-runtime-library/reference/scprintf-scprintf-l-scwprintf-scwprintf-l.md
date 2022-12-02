---
description: "Learn more about: _scprintf, _scprintf_l, _scwprintf, _scwprintf_l"
title: "_scprintf, _scprintf_l, _scwprintf, _scwprintf_l"
ms.date: "3/9/2021"
api_name: ["_scprintf_l", "_scwprintf", "_scwprintf_l", "_scprintf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["scprintf", "_scprintf_l", "_scwprintf_l", "_scprintf", "scwprintf", "_scwprintf", "scprintf_l", "_sctprintf_l", "scwprintf_l", "_sctprintf"]
helpviewer_keywords: ["scprintf function", "sctprintf_l function", "scwprintf_l function", "_scwprintf_l function", "_sctprintf_l function", "sctprintf function", "_scwprintf function", "_scprintf_l function", "_sctprintf function", "scprintf_l function", "formatted text [C++]", "_scprintf function", "scwprintf function"]
---
# `_scprintf`, `_scprintf_l`, `_scwprintf`, `_scwprintf_l`

Returns the number of characters in the formatted string.

## Syntax

```C
int _scprintf(
   const char *format [,
   argument] ...
);
int _scprintf_l(
   const char *format,
   _locale_t locale [,
   argument] ...
);
int _scwprintf(
   const wchar_t *format [,
   argument] ...
);
int _scwprintf_l(
   const wchar_t *format,
   _locale_t locale [,
   argument] ...
);
```

### Parameters

*`format`*\
Format-control string.

*`argument`*\
Optional arguments.

*`locale`*\
The locale to use.

For more information, see [Format specification syntax](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

Returns the number of characters that would be generated if the string were to be printed or sent to a file or buffer using the specified formatting codes. The value returned doesn't include the terminating null character. **`_scwprintf`** performs the same function for wide characters.

If *`format`* is a `NULL` pointer, the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, these functions return -1 and set `errno` to `EINVAL`.

For information about these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each *`argument`* (if any) is converted according to the corresponding format specification in *`format`*. The format consists of ordinary characters and has the same form and function as the *`format`* argument for [`printf`](printf-printf-l-wprintf-wprintf-l.md).

The versions of these functions with the `_l` suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string.
>
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_sctprintf` | **`_scprintf`** | **`_scprintf`** | **`_scwprintf`** |
| `_sctprintf_l` | **`_scprintf_l`** | **`_scprintf_l`** | **`_scwprintf_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`_scprintf`**, **`_scprintf_l`** | \<stdio.h> |
| **`_scwprintf`**, **`_scwprintf_l`** | \<stdio.h> or \<wchar.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt__scprintf.c

#define _USE_MATH_DEFINES

#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main( void )
{
   int count;
   int size;
   char *s = NULL;

   count = _scprintf( "The value of Pi is calculated to be %f.\n",
                      M_PI);

   size = count + 1; // the string will need one more char for the null terminator
   s = malloc(sizeof(char) * size);
   sprintf_s(s, size, "The value of Pi is calculated to be %f.\n",
                      M_PI);
   printf("The length of the following string will be %i.\n", count);
   printf("%s", s);
   free( s );
}
```

```Output
The length of the following string will be 46.
The value of Pi is calculated to be 3.141593.
```

## See also

[Stream I/O](../stream-i-o.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](scanf-scanf-l-wscanf-wscanf-l.md)\
[`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](sscanf-sscanf-l-swscanf-swscanf-l.md)\
[`vprintf` functions](../vprintf-functions.md)
