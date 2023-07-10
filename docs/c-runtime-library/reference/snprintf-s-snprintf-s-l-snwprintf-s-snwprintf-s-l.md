---
description: "Learn more about: _snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l"
title: "_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l"
ms.date: 06/27/2023
api_name: ["_snprintf_s", "_snprintf_s_l", "_snwprintf_s", "_snwprintf_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_snwprintf_s_l", "_sntprintf_s_l", "snprintf_s_l", "_snprintf_s_l", "_sntprintf_s", "_snprintf_s", "snprintf_s", "_snwprintf_s", "snwprintf_s_l", "snwprintf_s", "sntprintf_s", "sntprintf_s_l"]
helpviewer_keywords: ["_snprintf_s_l function", "_snwprintf_s_l function", "_sntprintf_s_l function", "snwprintf_s_l function", "snprintf_s function", "_snprintf_s function", "snprintf_s_l function", "_sntprintf_s function", "sntprintf_s_l function", "sntprintf_s function", "snwprintf_s function", "_snwprintf_s function", "formatted text [C++]"]
---
# `_snprintf_s`, `_snprintf_s_l`, `_snwprintf_s`, `_snwprintf_s_l`

Writes formatted data to a string. These functions are versions of [`snprintf`, `_snprintf`, `_snprintf_l`, `_snwprintf`, `_snwprintf_l`](snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) with security enhancements described in [Security features in the CRT](../security-features-in-the-crt.md).

## Syntax

```C
int _snprintf_s(
   char *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const char *format [,
   argument] ...
);

int _snprintf_s_l(
   char *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const char *format,
   _locale_t locale [,
   argument] ...
);

int _snwprintf_s(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const wchar_t *format [,
   argument] ...
);

int _snwprintf_s_l(
   wchar_t *buffer,
   size_t sizeOfBuffer,
   size_t count,
   const wchar_t *format,
   _locale_t locale [,
   argument] ...
);

template <size_t size>
int _snprintf_s(
   char (&buffer)[size],
   size_t count,
   const char *format [,
   argument] ...
); // C++ only

template <size_t size>
int _snwprintf_s(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format [,
   argument] ...
); // C++ only
```

### Parameters

*`buffer`*\
Storage location for the output.

*`sizeOfBuffer`*\
The size of the storage location for output. Size in **bytes** for the functions that take `char`, and **words** for those that take `wchar_t`.

*`count`*\
Maximum number of characters to write. For the functions that take `wchar_t`, it's the maximum number of wide characters to write. Or [`_TRUNCATE`](../truncate.md).

*`format`*\
Format-control string.

*`argument`*\
Optional arguments.

*`locale`*\
The locale to use.

## Return value

The number of characters written, not including the terminating `NULL`. A negative value is returned if an output error occurs. See [Behavior summary](#behavior-summary) for details.

## Remarks

The **`_snprintf_s`** function formats and stores *`count`* or fewer characters in *`buffer`* and appends a terminating `NULL`. Each argument (if any) is converted and output according to the corresponding format specification in *`format`*. The formatting is consistent with the **`printf`** family of functions; see [Format specification syntax: `printf` and `wprintf` functions](../format-specification-syntax-printf-and-wprintf-functions.md). If copying occurs between strings that overlap, the behavior is undefined.

### Behavior summary

For the following table:

-Let `len` be the size of the formatted data. If the function takes a `char` buffer, the size is in bytes. If the function takes a `wchar_t` buffer, the size specifies the number of 16-bit words.
- Characters refer to `char` characters for functions that take a `char` buffer, and to `wchar_t` characters for functions that take a `wchar_t` buffer.
- For more information about the invalid parameter handler, see [Parameter Validation](../../c-runtime-library/parameter-validation.md).

| Condition | Behavior | Return value | `errno` | Invokes invalid parameter handler |
|--|--|--|--|--|
| Success | Writes the characters into the buffer using the specified format string.| The number of characters written, not including the terminating `NULL`. | N/A | No |
| Encoding error during formatting | If processing string specifier `s`, `S`, or `Z`, format specification processing stops. | -1 | `EILSEQ` (42) | No |
| Encoding error during formatting | If processing character specifier `c` or `C`, the invalid character is skipped. The number of characters written isn't incremented for the skipped character, nor is any data written for it. Processing the format specification continues after skipping the specifier with the encoding error. | The number of characters written, not including the terminating `NULL`. | `EILSEQ` (42) | No |
| `buffer == NULL` and `sizeOfBuffer == 0` and `count == 0` | No data is written. | 0 | N/A | No |
| `buffer == NULL` and either `sizeOfBuffer != 0` or `count != 0` | If execution continues after invalid parameter handler executes, sets `errno` and returns a negative value. | -1 | `EINVAL` (22) | Yes |
| `buffer != NULL` and `sizeOfBuffer == 0` | No data is written. | -1 | `EINVAL` (22) | Yes |
| `count == 0`| A `NULL` is placed at the beginning of the buffer. | -1 | N/A | No |
| `count < 0`| Unsafe: the value is treated as unsigned, likely creating a large value that results in overwriting the memory that follows the buffer. | The number of characters written, not including the terminating `NULL`. | N/A | No |
| `count < sizeOfBuffer` and `len <= count` | All of the data is written and a terminating `NULL` is appended. | The number of characters written. | N/A | No |
| `count < sizeOfBuffer` and `len > count` | The first *`count`* characters are written and a terminating `NULL` is appended. | -1 | N/A | No |
| `count >= sizeOfBuffer` and `len < sizeOfBuffer` | All of the data is written with a terminating `NULL`. | The number of characters written. | N/A | No |
| `count >= sizeOfBuffer` and `len >= sizeOfBuffer` and `count != _TRUNCATE` | If execution continues after invalid parameter handler executes, sets `errno`, sets `buffer[0] == NULL`, and returns a negative value. | -1 | `ERANGE` (34) | Yes |
| `count == _TRUNCATE` and `len >= sizeOfBuffer` | Writes as much of the string as fits in *`buffer`* and a terminating `NULL`. | -1 | N/A | No |
| `count == _TRUNCATE` and `len < sizeOfBuffer` | Writes the entire string into *`buffer`* with a terminating `NULL`. | Number of characters written, not including the terminating `NULL`. | N/A | No |
| `format == NULL` | No data is written. If execution continues after invalid parameter handler executes, sets `errno` and returns a negative value. | -1 | `EINVAL` (22) | Yes |

For information about these and other error codes, see [`_doserrno`, `errno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string.
>
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

**`_snwprintf_s`** is a wide-character version of **`_snprintf_s`**; the pointer arguments to **`_snwprintf_s`** are wide-character strings. Detection of encoding errors in **`_snwprintf_s`** might differ from that in **`_snprintf_s`**. **`_snwprintf_s`**, like **`swprintf_s`**, writes output to a string rather than to a destination of type **`FILE`**.

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure template overloads](../secure-template-overloads.md).

### Generic-text routine mappings

|`Tchar.h` routine|`_UNICODE` and `_MBCS` not defined|`_MBCS` defined|`_UNICODE` defined|
|---|---|---|---|
|**`_sntprintf_s`**|**`_snprintf_s`**|**`_snprintf_s`**|**`_snwprintf_s`**|
|**`_sntprintf_s_l`**|**`_snprintf_s_l`**|**`_snprintf_s_l`**|**`_snwprintf_s_l`**|

## Requirements

|Routine|Required header|
|---|---|
|**`_snprintf_s`**, **`_snprintf_s_l`**|`<stdio.h>`|
|**`_snwprintf_s`**, **`_snwprintf_s_l`**|`<stdio.h>` or `<wchar.h>`|

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```cpp
// crt_snprintf_s.cpp
// compile with: /MTd

// These #defines enable secure template overloads
// (see last part of Examples() below)
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES 1
#define _CRT_SECURE_CPP_OVERLOAD_STANDARD_NAMES_COUNT 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <crtdbg.h>  // For _CrtSetReportMode
#include <errno.h>

// This example uses a 10-byte destination buffer.

int snprintf_s_tester( const char * fmt, int x, size_t count )
{
   char dest[10];

   printf( "\n" );

   if ( count == _TRUNCATE )
      printf( "%zd-byte buffer; truncation semantics\n",
               _countof(dest) );
   else
      printf( "count = %zd; %zd-byte buffer\n",
               count, _countof(dest) );

   int ret = _snprintf_s( dest, _countof(dest), count, fmt, x );

   printf( "    new contents of dest: '%s'\n", dest );

   return ret;
}

void Examples()
{
   // formatted output string is 9 characters long: "<<<123>>>"
   snprintf_s_tester( "<<<%d>>>", 121, 8 );
   snprintf_s_tester( "<<<%d>>>", 121, 9 );
   snprintf_s_tester( "<<<%d>>>", 121, 10 );

   printf( "\nDestination buffer too small:\n" );

   snprintf_s_tester( "<<<%d>>>", 1221, 10 );

   printf( "\nTruncation examples:\n" );

   int ret = snprintf_s_tester( "<<<%d>>>", 1221, _TRUNCATE );
   printf( "    truncation %s occur\n", ret == -1 ? "did"
                                                  : "did not" );

   ret = snprintf_s_tester( "<<<%d>>>", 121, _TRUNCATE );
   printf( "    truncation %s occur\n", ret == -1 ? "did"
                                                  : "did not" );
   printf( "\nSecure template overload example:\n" );

   char dest[10];
   _snprintf( dest, 10, "<<<%d>>>", 12321 );
   // With secure template overloads enabled (see #defines
   // at top of file), the preceding line is replaced by
   //    _snprintf_s( dest, _countof(dest), 10, "<<<%d>>>", 12345 );
   // Instead of causing a buffer overrun, _snprintf_s invokes
   // the invalid parameter handler.
   // If secure template overloads were disabled, _snprintf would
   // write 10 characters and overrun the dest buffer.
   printf( "    new contents of dest: '%s'\n", dest );
}

void myInvalidParameterHandler(
   const wchar_t* expression,
   const wchar_t* function,
   const wchar_t* file,
   unsigned int line,
   uintptr_t pReserved)
{
   wprintf(L"Invalid parameter handler invoked: %s\n", expression);
}

int main( void )
{
   _invalid_parameter_handler oldHandler, newHandler;

   newHandler = myInvalidParameterHandler;
   oldHandler = _set_invalid_parameter_handler(newHandler);
   // Disable the message box for assertions.
   _CrtSetReportMode(_CRT_ASSERT, 0);

   Examples();
}
```

```Output

count = 8; 10-byte buffer
    new contents of dest: '<<<121>>'

count = 9; 10-byte buffer
    new contents of dest: '<<<121>>>'

count = 10; 10-byte buffer
    new contents of dest: '<<<121>>>'

Destination buffer too small:

count = 10; 10-byte buffer
Invalid parameter handler invoked: ("Buffer too small", 0)
    new contents of dest: ''

Truncation examples:

10-byte buffer; truncation semantics
    new contents of dest: '<<<1221>>'
    truncation did occur

10-byte buffer; truncation semantics
    new contents of dest: '<<<121>>>'
    truncation did not occur

Secure template overload example:
Invalid parameter handler invoked: ("Buffer too small", 0)
    new contents of dest: ''
```

## See also

[Stream I/O](../stream-i-o.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](scanf-scanf-l-wscanf-wscanf-l.md)\
[`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](sscanf-sscanf-l-swscanf-swscanf-l.md)\
[`vprintf` functions](../vprintf-functions.md)
