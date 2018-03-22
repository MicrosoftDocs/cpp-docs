---
title: "_itoa, _itow functions | Microsoft Docs"
ms.custom: ""
ms.date: "03/21/2018"
ms.technology: ["cpp-standard-libraries"]
ms.topic: "reference"
apiname: ["itoa", "_itoa", "ltoa", "_ltoa", "ultoa", "_ultoa", "_i64toa", "_ui64toa", "_itow", "_ltow", "_ultow", "_i64tow", "_ui64tow"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_itoa", "_ltoa", "_ultoa", "_i64toa", "_ui64toa", "_itow", "_ltow", "_ultow", "_i64tow", "_ui64tow", "itoa", "ltoa", "ultoa", "i64toa", "ui64toa", "itow", "ltow", "ultow", "i64tow", "ui64tow", "itot", "_itot", "ltot", "_ltot", "ultot", "_ultot", "i64tot", "_i64tot", "ui64tot", "_ui64tot", "_MAX_ITOSTR_BASE16_COUNT", "_MAX_ITOSTR_BASE10_COUNT", "_MAX_ITOSTR_BASE8_COUNT", "_MAX_ITOSTR_BASE2_COUNT", "_MAX_LTOSTR_BASE16_COUNT", "_MAX_LTOSTR_BASE10_COUNT", "_MAX_LTOSTR_BASE8_COUNT", "_MAX_LTOSTR_BASE2_COUNT", "_MAX_ULTOSTR_BASE16_COUNT", "_MAX_ULTOSTR_BASE10_COUNT", "_MAX_ULTOSTR_BASE8_COUNT", "_MAX_ULTOSTR_BASE2_COUNT", "_MAX_I64TOSTR_BASE16_COUNT", "_MAX_I64TOSTR_BASE10_COUNT", "_MAX_I64TOSTR_BASE8_COUNT", "_MAX_I64TOSTR_BASE2_COUNT", "_MAX_U64TOSTR_BASE16_COUNT", "_MAX_U64TOSTR_BASE10_COUNT", "_MAX_U64TOSTR_BASE8_COUNT", "_MAX_U64TOSTR_BASE2_COUNT"]
dev_langs: ["C++"]
helpviewer_keywords: ["_itot function", "ui64toa function", "_ui64toa function", "converting integers", "itot function", "_i64tow function", "_i64toa function", "_itow function", "ui64tow function", "integers, converting", "itoa function", "_ui64tow function", "i64tow function", "itow function", "i64toa function", "converting numbers, to strings", "_itoa function"]
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# itoa, _itoa, ltoa, _ltoa, ultoa, _ultoa, _i64toa, _ui64toa, _itow, _ltow, _ultow, _i64tow, _ui64tow

Converts an integer to a string. More secure versions of these functions are available; see [_itoa_s, _itow_s functions](../../c-runtime-library/reference/itoa-s-itow-s.md).

## Syntax

```C
char * _itoa( int value, char *buffer, int radix );
char * _ltoa( long value, char *buffer, int radix );
char * _ultoa( unsigned long value, char *buffer, int radix );
char * _i64toa( long long value, char *buffer, int radix );
char * _ui64toa( unsigned long long value, char *buffer, int radix );

wchar_t * _itow( int value, wchar_t *buffer, int radix );
wchar_t * _ltow( long value, wchar_t *buffer, int radix );
wchar_t * _ultow( unsigned long value, wchar_t *buffer, int radix );
wchar_t * _i64tow( long long value, wchar_t *buffer, int radix );
wchar_t * _ui64tow( unsigned long long value, wchar_t *buffer, int radix );

// These Posix versions of the functions have deprecated names:
char * itoa( int value, char *buffer, int radix );
char * ltoa( long value, char *buffer, int radix );
char * ultoa( unsigned long value, char *buffer, int radix );

// The following template functions are C++ only:
template <size_t size>
char *_itoa( int value, char (&buffer)[size], int radix );

template <size_t size>
char *_itoa( long value, char (&buffer)[size], int radix );

template <size_t size>
char *_itoa( unsigned long value, char (&buffer)[size], int radix );

template <size_t size>
char *_i64toa( long long value, char (&buffer)[size], int radix );

template <size_t size>
char * _ui64toa( unsigned long long value, char (&buffer)[size], int radix );

template <size_t size>
wchar_t * _itow( int value, wchar_t (&buffer)[size], int radix );

template <size_t size>
wchar_t * _ltow( long value, wchar_t (&buffer)[size], int radix );

template <size_t size>
wchar_t * _ultow( unsigned long value, wchar_t (&buffer)[size], int radix );

template <size_t size>
wchar_t * _i64tow( long long value, wchar_t (&buffer)[size], int radix );

template <size_t size>
wchar_t * _ui64tow( unsigned long long value, wchar_t (&buffer)[size],
   int radix );
```

### Parameters

*value*<br/>
Number to be converted.

*buffer*<br/>
Buffer that holds the result of the conversion.

*radix*<br/>
The base to use for the conversion of *value*, which must be in the range 2-36.

*size*<br/>
Length of the buffer in units of the character type. This parameter is inferred from the *buffer* argument in C++.

## Return Value

Each of these functions returns a pointer to *buffer*. There is no error return.

## Remarks

The `_itoa`, `_ltoa`, `_ultoa`, `_i64toa`, and `_ui64toa` functions convert the digits of the given *value* argument to a null-terminated character string and store the result (up to 33 characters for `_itoa`, `_ltoa`, and `_ultoa`, and 65 for `_i64toa` and `_ui64toa`) in *buffer*. If *radix* equals 10 and *value* is negative, the first character of the stored string is the minus sign (**-**). The `_itow`, `_ltow`, `_ultow`, `_i64tow`, and `_ui64tow` functions are wide-character versions of `_itoa`, `_ltoa`, `_ultoa`, `_i64toa`, and `_ui64toa`, respectively.

> [!IMPORTANT]
> These functions can write past the end of a buffer that is too small. To prevent buffer overruns, ensure that *buffer* is large enough to hold the converted digits plus the trailing null-character and a sign character. Misuse of these functions can cause serious security issues in your code.

Because of their potential for security issues, by default, these functions cause deprecation warning [C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996): **This function or variable may be unsafe. Consider using** *safe_function* **instead. To disable deprecation, use _CRT_SECURE_NO_WARNINGS.** We recommend you change your source code to use the *safe_function* suggested by the warning message. The more secure functions do not write more characters than the specified buffer size. For more information, see [_itoa_s, _itow_s functions](../../c-runtime-library/reference/itoa-s-itow-s.md).

To use these functions without the deprecation warning, define the **_CRT_SECURE_NO_WARNINGS** preprocessor macro before including any CRT headers. You can do this on the command line in a developer command prompt by adding the **/D_CRT_SECURE_NO_WARNINGS** compiler option to the **cl** command. Otherwise, define the macro in your source files. If you use precompiled headers, define the macro at the top of the precompiled header include file, typically stdafx.h. To define the macro in your source code, use a **#define** directive before you include any CRT header, as in this example:

```C
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
```

In C++, these functions have template overloads that invoke their safer counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

The Posix names `itoa`, `ltoa`, and `ultoa` exist as aliases for the `_itoa`, `_ltoa`, and `_ultoa` functions. The Posix names are deprecated because they do not follow the implementation-specific function name conventions of ISO C. By default, these functions cause deprecation warning [C4996](../../error-messages/compiler-warnings/compiler-warning-level-3-c4996): **The POSIX name for this item is deprecated. Instead, use the ISO C and C++ conformant name:** *new_name*. We recommend you change your source code to use the safer versions of these functions, `_itoa_s`, `_ltoa_s`, or `_ultoa_s`. For more information, see [_itoa_s, _itow_s functions](../../c-runtime-library/reference/itoa-s-itow-s.md).

For source code portability, you may prefer to retain the Posix names in your code. To use these functions without the deprecation warning, define both the **_CRT_NONSTDC_NO_WARNINGS** and **_CRT_SECURE_NO_WARNINGS** preprocessor macros before including any CRT headers. You can do this on the command line in a developer command prompt by adding the **/D_CRT_SECURE_NO_WARNINGS** and **/D_CRT_NONSTDC_NO_WARNINGS** compiler options to the **cl** command. Otherwise, define the macros in your source files. If you use precompiled headers, define the macros at the top of the precompiled header include file, typically stdafx.h. To define the macros in your source code, use **#define** directives before you include any CRT header, as in this example:

```C
#define _CRT_NONSTDC_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
```

### Maximum conversion count macros

To help you create secure buffers for conversions, the CRT includes some convenient macros. These define the size of the buffer required to convert the longest possible value of each integer type, including the null terminator and sign character, for several common bases. To ensure that your conversion buffer is large enough to receive any conversion in the base specified by *radix*, use one of these defined macros when you allocate the buffer. This helps to prevent buffer overrun errors when you convert integral types to strings. These macros are defined when you include either stdlib.h or wchar.h in your source.

To use one of these macros in a string conversion function, declare your conversion buffer of the appropriate character type and use the macro value for the integer type and base as the buffer dimension. This table lists the macros that are appropriate for each function for the listed bases:

||||
|-|-|-|
|Functions|radix|Macros|
|`_itoa`, `_itow`|16<br/>10<br/>8<br/>2|`_MAX_ITOSTR_BASE16_COUNT`<br/>`_MAX_ITOSTR_BASE10_COUNT`<br/>`_MAX_ITOSTR_BASE8_COUNT`<br/>`_MAX_ITOSTR_BASE2_COUNT`|
|`_ltoa`, `_ltow`|16<br/>10<br/>8<br/>2|`_MAX_LTOSTR_BASE16_COUNT`<br/>`_MAX_LTOSTR_BASE10_COUNT`<br/>`_MAX_LTOSTR_BASE8_COUNT`<br/>`_MAX_LTOSTR_BASE2_COUNT`|
|`_ultoa`, `_ultow`|16<br/>10<br/>8<br/>2|`_MAX_ULTOSTR_BASE16_COUNT`<br/>`_MAX_ULTOSTR_BASE10_COUNT`<br/>`_MAX_ULTOSTR_BASE8_COUNT`<br/>`_MAX_ULTOSTR_BASE2_COUNT`|
|`_i64toa`, `_i64tow`|16<br/>10<br/>8<br/>2|`_MAX_I64TOSTR_BASE16_COUNT`<br/>`_MAX_I64TOSTR_BASE10_COUNT`<br/>`_MAX_I64TOSTR_BASE8_COUNT`<br/>`_MAX_I64TOSTR_BASE2_COUNT`|
|`_ui64toa`, `_ui64tow`|16<br/>10<br/>8<br/>2|`_MAX_U64TOSTR_BASE16_COUNT`<br/>`_MAX_U64TOSTR_BASE10_COUNT`<br/>`_MAX_U64TOSTR_BASE8_COUNT`<br/>`_MAX_U64TOSTR_BASE2_COUNT`|

This example uses a conversion count macro to define a buffer large enough to contain an **unsigned long long** in base 2:

```cpp
#include <wchar.h>
#include <iostream>
int main()
{
    wchar_t buffer[_MAX_U64TOSTR_BASE2_COUNT];
    std:wcout << _ui64tow(0xFFFFFFFFFFFFFFFFull, buffer, 2) << std::endl;
}
```

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|`_itot`|`_itoa`|`_itoa`|`_itow`|
|`_ltot`|`_ltoa`|`_ltoa`|`_ltow`|
|`_ultot`|`_ultoa`|`_ultoa`|`_ultow`|
|`_i64tot`|`_i64toa`|`_i64toa`|`_i64tow`|
|`_ui64tot`|`_ui64toa`|`_ui64toa`|`_ui64tow`|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|`itoa`, `ltoa`, `ultoa`|\<stdlib.h>|
|`_itoa`, `_ltoa`, `_ultoa`, `_i64toa`, `_ui64toa`|\<stdlib.h>|
|`_itow`, `_ltow`, `_ultow`, `_i64tow`, `_ui64tow`|\<stdlib.h> or \<wchar.h>|

These functions and macros are Microsoft-specific. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_itoa.c
// compile with: /W3
// This program makes use of the _itoa functions
// in various examples.

#define _CRT_SECURE_NO_WARNINGS 1
#include <string.h>
#include <stdlib.h>

int main( void )
{
   char buffer[_MAX_U64TOSTR_BASE2_COUNT];
   int r;

   for ( r = 10; r >= 2; --r )
   {
     _itoa( -1, buffer, r );
     printf( "base %d: %s (%d chars)\n", r, buffer, strnlen(buffer, _countof(buffer)) );
   }
   printf( "\n" );

   for ( r = 10; r >= 2; --r )
   {
     _i64toa( -1L, buffer, r );
     printf( "base %d: %s (%d chars)\n", r, buffer, strnlen(buffer, _countof(buffer)) );
   }
   printf( "\n" );

   for( r = 10; r >= 2; --r )
   {
     _ui64toa( 0xffffffffffffffffL, buffer, r );
     printf( "base %d: %s (%d chars)\n", r, buffer, strnlen(buffer, _countof(buffer)) );
   }
}
```

```Output
base 10: -1 (2 chars)
base 9: 12068657453 (11 chars)
base 8: 37777777777 (11 chars)
base 7: 211301422353 (12 chars)
base 6: 1550104015503 (13 chars)
base 5: 32244002423140 (14 chars)
base 4: 3333333333333333 (16 chars)
base 3: 102002022201221111210 (21 chars)
base 2: 11111111111111111111111111111111 (32 chars)

base 10: -1 (2 chars)
base 9: 145808576354216723756 (21 chars)
base 8: 1777777777777777777777 (22 chars)
base 7: 45012021522523134134601 (23 chars)
base 6: 3520522010102100444244423 (25 chars)
base 5: 2214220303114400424121122430 (28 chars)
base 4: 33333333333333333333333333333333 (32 chars)
base 3: 11112220022122120101211020120210210211220 (41 chars)
base 2: 1111111111111111111111111111111111111111111111111111111111111111 (64 chars)

base 10: 18446744073709551615 (20 chars)
base 9: 145808576354216723756 (21 chars)
base 8: 1777777777777777777777 (22 chars)
base 7: 45012021522523134134601 (23 chars)
base 6: 3520522010102100444244423 (25 chars)
base 5: 2214220303114400424121122430 (28 chars)
base 4: 33333333333333333333333333333333 (32 chars)
base 3: 11112220022122120101211020120210210211220 (41 chars)
base 2: 1111111111111111111111111111111111111111111111111111111111111111 (64 chars)
```

## See Also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[_itoa_s, _itow_s functions](../../c-runtime-library/reference/itoa-s-itow-s.md)<br/>
