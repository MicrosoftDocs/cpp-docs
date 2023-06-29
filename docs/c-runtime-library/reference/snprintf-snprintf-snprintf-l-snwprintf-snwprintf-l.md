---
title: "snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l"
description: "API reference for snprintf, _snprintf, _snprintf_l, _snwprintf, and _snwprintf_; which write formatted data to a string."
ms.date: 06/27/2023
api_name: ["_snwprintf", "_snprintf", "_snprintf_l", "_snwprintf_l", "snprintf"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "ntoskrnl.exe"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_snprintf", "snprintf_l", "snwprintf_l", "sntprintf", "snprintf", "_sntprintf", "_sntprintf_l", "sntprintf_l", "snwprintf", "_snprintf_l", "_snwprintf", "_snwprintf_l"]
helpviewer_keywords: ["snwprintf_l function", "sntprintf_l function", "snprintf_l function", "_snwprintf_l function", "_sntprintf_l function", "_snwprintf function", "_snprintf function", "_sntprintf function", "_snprintf_l function", "snwprintf function", "snprintf function", "sntprintf function", "formatted text [C++]"]
---
# `snprintf`, `_snprintf`, `_snprintf_l`, `_snwprintf`, `_snwprintf_l`

Writes formatted data to a string. More secure versions of these functions are available; see [`_snprintf_s`, `_snprintf_s_l`, `_snwprintf_s`, `_snwprintf_s_l`](snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md).

## Syntax

```C
int snprintf(
   char *buffer,
   size_t count,
   const char *format [,
   argument] ...
);

int _snprintf(
   char *buffer,
   size_t count,
   const char *format [,
   argument] ...
);

int _snprintf_l(
   char *buffer,
   size_t count,
   const char *format,
   _locale_t locale [,
   argument] ...
);

int _snwprintf(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format [,
   argument] ...
);

int _snwprintf_l(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   _locale_t locale [,
   argument] ...
);

template <size_t size>
int _snprintf(
   char (&buffer)[size],
   size_t count,
   const char *format [,
   argument] ...
); // C++ only

template <size_t size>
int _snprintf_l(
   char (&buffer)[size],
   size_t count,
   const char *format,
   _locale_t locale [,
   argument] ...
); // C++ only

template <size_t size>
int _snwprintf(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format [,
   argument] ...
); // C++ only

template <size_t size>
int _snwprintf_l(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format,
   _locale_t locale [,
   argument] ...
); // C++ only
```

### Parameters

*`buffer`*\
Storage location for the output.

*`count`*\
Maximum number of characters to write. For the functions that take `wchar_t`, it's the maximum number of wide characters to write.

*`format`*\
Format-control string.

*`argument`*\
Optional arguments.

*`locale`*\
The locale to use to format the output.

For more information, see [Format specification syntax: `printf` and `wprintf` functions](../format-specification-syntax-printf-and-wprintf-functions.md).

## Return value

The number of characters that which would have been written to the buffer if `count` was ignored. The count doesn't include the terminating `NULL` character.

Let **`len`** be the length of the formatted data string, not including the terminating `NULL`.\
For all functions, if `len < count`, then **`len`** characters are stored in *`buffer`*, a null-terminator is appended, and the number of characters written, not including the terminating `NULL`, is returned.

The wide character versions of these functions return the number of wide characters written, not including the terminating `NULL`.

See [Behavior summary](#behavior-summary) for details.

## Remarks

Beginning with the UCRT in Visual Studio 2015 and Windows 10, **`snprintf`** is no longer identical to **`_snprintf`**. The **`snprintf`** behavior is now C99 standard conformant. The difference is that if you run out of buffer, `snprintf` null-terminates the end of the buffer and returns the number of characters that would have been required whereas `_snprintf` doesn't null-terminate the buffer and returns -1. Also, `snprintf()` includes one more character in the output because it doesn't null-terminate the buffer.

- **`snprintf`** and the **`_snprintf`** family of functions format and store *`count`* or fewer characters in *`buffer`*.
- **`snprintf`** always stores a terminating `NULL` character, truncating the output if necessary.
- If **`snprintf`** returns a value > *`count`* - 1, the output has been truncated.
- The **`_snprintf`** family of functions only appends a terminating `NULL` character if the formatted string length is strictly less than *`count`* characters.
- Each *`argument`* (if any) is converted and is output according to the corresponding format specification in *`format`*. The format consists of ordinary characters and has the same form and function as the *`format`* argument for [`printf`](printf-printf-l-wprintf-wprintf-l.md). If copying occurs between strings that overlap, the behavior is undefined.

### Behavior summary

For the following table:

- Let `sizeOfBuffer` be the size of `buffer`. If the function takes a `char` buffer, the size is in bytes. If the function takes a `wchar_t` buffer, the size specifies the number of 16-bit words.
- Let `len` be the size of the formatted data. If the function takes a `char` buffer, the size is in bytes. If the function takes a `wchar_t` buffer, the size specifies the number of 16-bit words.
- Characters refer to `char` characters for functions that take a `char` buffer, and to `wchar_t` characters for functions that take a `wchar_t` buffer.
- For more information about the invalid parameter handler, see [Parameter Validation](../../c-runtime-library/parameter-validation.md).

| Condition | Behavior | Return value | `errno` | Invokes invalid parameter handler |
|--|--|--|--|--|
| Success | Writes the characters into the buffer using the specified format string. | The number of characters written. | N/A | No |
| Encoding error during formatting | If processing string specifier `s`, `S`, or `Z`, format specification processing stops, a `NULL` is placed at the beginning of the buffer. | -1 | `EILSEQ` (42) | No |
| Encoding error during formatting | If processing character specifier `c` or `C`, the invalid character is skipped. The number of characters written isn't incremented for the skipped character, nor is any data written for it. Processing the format specification continues after skipping the specifier with the encoding error. | The number of characters written, not including the terminating `NULL`. | `EILSEQ` (42) | No |
| `buffer == NULL` and `count != 0` | If execution continues after invalid parameter handler executes, sets `errno` and returns a negative value. | -1 | `EINVAL` (22) | Yes |
| `count == 0` | The number of characters that would have been written, not including the terminating `NULL`. You can use this result to allocate sufficient buffer space for the string and a terminating `NULL`, and then call the function again to fill the buffer. | N/A | No |
| `count < 0`| Unsafe: the value is treated as unsigned, likely creating a large value that results in overwriting the memory that follows the buffer. | The number of characters written | N/A | No |
| `count < sizeOfBuffer` and `len <= count` | All of the data is written and a terminating `NULL` is appended. | The number of characters written, not including the terminating `NULL`. | N/A | No |
| `count < sizeOfBuffer` and `len > count` | The first *`count-1`* characters are written followed by a null-terminator. | The number of characters that would have been written had `count` matched the number of characters to output, not including the null-terminator. | N/A | No |
| `count >= sizeOfBuffer` and `len < sizeOfBuffer` | All of the data is written with a terminating `NULL`. | The number of characters written, not including the terminating `NULL`. | N/A | No |
| `count >= sizeOfBuffer` and `len >= sizeOfBuffer` | Unsafe: Overwrites the memory that follows the buffer. | The number of characters written, not including the terminating `NULL`. | N/A | No |
| `format == NULL` | No data is written. If execution continues after invalid parameter handler executes, sets `errno` and returns a negative value. | -1 | `EINVAL` (22) | Yes |

For information about these and other error codes, see [`_doserrno`, `errno`, `_sys_errlist`, and `_sys_nerr`](../errno-doserrno-sys-errlist-and-sys-nerr.md).

> [!IMPORTANT]
> Ensure that *`format`* is not a user-defined string. Because the **`_snprintf`** functions do not guarantee null termination—in particular, when the return value is *`count`*—make sure that they are followed by code that adds the null terminator. For more information, see [Avoiding buffer overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
>
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with [`legacy_stdio_float_rounding.obj`](../link-options.md).

**`_snwprintf`** is a wide-character version of **`_snprintf`**; the pointer arguments to **`_snwprintf`** are wide-character strings. Detection of encoding errors in **`_snwprintf`** might differ from the detection in **`_snprintf`**. **`_snwprintf`**, just like **`swprintf`**, writes output to a string instead of a destination of type `FILE`.

The versions of these functions that have the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

In C++, these functions have template overloads that invoke the newer, more secure counterparts. For more information, see [Secure template overloads](../secure-template-overloads.md).

### Generic-text routine mappings

| `Tchar.h` routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_sntprintf` | **`_snprintf`** | **`_snprintf`** | **`_snwprintf`** |
| `_sntprintf_l` | **`_snprintf_l`** | **`_snprintf_l`** | **`_snwprintf_l`** |

## Requirements

| Routine | Required header |
|---|---|
| **`snprintf`**, **`_snprintf`**,  **`_snprintf_l`** | `<stdio.h>` |
| **`_snwprintf`**, **`_snwprintf_l`** | `<stdio.h>` or `<wchar.h>` |

For more compatibility information, see [Compatibility](../compatibility.md).

## Example

```C
// crt_snprintf.c
// compile with: /W3
#include <stdio.h>
#include <stdlib.h>

#if !defined(__cplusplus)
typedef int bool;
const bool true = 1;
const bool false = 0;
#endif

#define FAIL 0 // change to 1 and see what happens

int main(void)
{
   char buffer[200];
   const static char s[] = "computer"
#if FAIL
"computercomputercomputercomputercomputercomputercomputercomputer"
"computercomputercomputercomputercomputercomputercomputercomputer"
"computercomputercomputercomputercomputercomputercomputercomputer"
"computercomputercomputercomputercomputercomputercomputercomputer"
#endif
   ;
   const char c = 'l';
   const int i = 35;
#if FAIL
   const double fp = 1e300; // doesn't fit in the buffer
#else
   const double fp = 1.7320534;
#endif
   /* !subtract one to prevent "squeezing out" the terminal null! */
   const int bufferSize = sizeof(buffer)/sizeof(buffer[0]) - 1;
   int bufferUsed = 0;
   int bufferLeft = bufferSize - bufferUsed;
   bool bSuccess = true;
   buffer[0] = 0;

   /* Format and print various data: */

   if (bufferLeft > 0)
   {
      int perElementBufferUsed = _snprintf(&buffer[bufferUsed],
      bufferLeft, "   String: %s\n", s ); // C4996
      // Note: _snprintf is deprecated; consider _snprintf_s instead
      if (bSuccess = (perElementBufferUsed >= 0))
      {
         bufferUsed += perElementBufferUsed;
         bufferLeft -= perElementBufferUsed;
         if (bufferLeft > 0)
         {
            int perElementBufferUsed = _snprintf(&buffer[bufferUsed],
            bufferLeft, "   Character: %c\n", c ); // C4996
            if (bSuccess = (perElementBufferUsed >= 0))
            {
               bufferUsed += perElementBufferUsed;
               bufferLeft -= perElementBufferUsed;
               if (bufferLeft > 0)
               {
                  int perElementBufferUsed = _snprintf(&buffer
                  [bufferUsed], bufferLeft, "   Integer: %d\n", i ); // C4996
                  if (bSuccess = (perElementBufferUsed >= 0))
                  {
                     bufferUsed += perElementBufferUsed;
                     bufferLeft -= perElementBufferUsed;
                     if (bufferLeft > 0)
                     {
                        int perElementBufferUsed = _snprintf(&buffer
                        [bufferUsed], bufferLeft, "   Real: %f\n", fp ); // C4996
                        if (bSuccess = (perElementBufferUsed >= 0))
                        {
                           bufferUsed += perElementBufferUsed;
                        }
                     }
                  }
               }
            }
         }
      }
   }

   if (!bSuccess)
   {
      printf("%s\n", "failure");
   }
   else
   {
      /* !store null because _snprintf doesn't necessarily (if the string
       * fits without the terminal null, but not with it)!
       * bufferUsed might be as large as bufferSize, which normally is
       * like going one element beyond a buffer, but in this case
       * subtracted one from bufferSize, so we're ok.
       */
      buffer[bufferUsed] = 0;
      printf( "Output:\n%s\ncharacter count = %d\n", buffer, bufferUsed );
   }
   return EXIT_SUCCESS;
}
```

```Output
Output:
   String: computer
   Character: l
   Integer: 35
   Real: 1.732053

character count = 69
```

## See also

[Stream I/O](../stream-i-o.md)\
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)\
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)\
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)\
[`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](scanf-scanf-l-wscanf-wscanf-l.md)\
[`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](sscanf-sscanf-l-swscanf-swscanf-l.md)\
[`vprintf` functions](../vprintf-functions.md)
