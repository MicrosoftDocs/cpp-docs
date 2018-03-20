---
title: "_itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-standard-libraries"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
apiname: ["_itow", "_i64tow", "_itoa", "_i64toa", "_ui64toa", "_ui64tow"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_i64tow", "ui64toa", "ui64tow", "itot", "_itot", "_i64toa", "_itoa", "_itow", "_ui64tow", "i64toa", "i64tow", "itow", "_ui64toa"]
dev_langs: ["C++"]
helpviewer_keywords: ["_itot function", "ui64toa function", "_ui64toa function", "converting integers", "itot function", "_i64tow function", "_i64toa function", "_itow function", "ui64tow function", "integers, converting", "itoa function", "_ui64tow function", "i64tow function", "itow function", "i64toa function", "converting numbers, to strings", "_itoa function"]
ms.assetid: 46592a00-77bb-4e73-98c0-bf629d96cea6
caps.latest.revision: 25
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# _itoa, _ltoa, _ultoa, _i64toa, _ui64toa, _itow, _ltow, _ultow, _i64tow, _ui64tow

Converts an integer to a string. More secure versions of these functions are available; see [_itoa_s, _i64toa_s, _ui64toa_s, _itow_s, _i64tow_s, _ui64tow_s](../../c-runtime-library/reference/itoa-s-i64toa-s-ui64toa-s-itow-s-i64tow-s-ui64tow-s.md).

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
String result.

*radix*<br/>
The base to use for the conversion of *value*, which must be in the range 2-36.

*size*<br/>
Length of the buffer in units of the character type. This parameter is inferred from the *buffer* argument in C++.

## Return Value

Each of these functions returns a pointer to *buffer*. There is no error return.

## Remarks

The `_itoa`, `_ltoa`, `_ultoa`, `_i64toa`, and `_ui64toa` functions convert the digits of the given *value* argument to a null-terminated character string and stores the result (up to 33 characters for `_itoa`, `_ltoa`, and `_ultoa`, and 65 for `_i64toa` and `_ui64toa`) in *buffer*. If *radix* equals 10 and *value* is negative, the first character of the stored string is the minus sign ( `-` ). The `_itow`, `_ltow`, `_ultow`, `_i64tow`, and `_ui64tow` functions are wide-character versions of `_itoa`, `_ltoa`, `_ultoa`, `_i64toa`, and `_ui64toa`, respectively.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

> [!IMPORTANT]
> To prevent buffer overruns, ensure that *buffer* is large enough to hold the converted digits plus the trailing null-character and a sign character.

### Maximum conversion count macros

To help you create secure buffers for conversions, the Microsoft implementation of the CRT includes some convenient macros for the size of the buffer required to convert the longest possible integer of each type, including the null terminator and sign character, for several common bases. To ensure that your conversion buffer is large enough to receive any conversion in the base specified by *radix*, use one of these defined macros when you allocate the buffer. This helps to prevent buffer overrun errors when you convert integral types to strings. These macros are defined when you include either stdlib.h or wchar.h in your source.

To use one of these macros in a string conversion function, declare your conversion buffer of the appropriate character type and use the macro value for the integer type and base as the buffer dimension. This table lists the macros that are appropriate for each function for the listed bases:

||||
|-|-|-|
|Functions|radix|Macros|
|`_itoa`, `_itow`|16<br/>10<br/>8<br/>2|`_MAX_ITOSTR_BASE16_COUNT`<br/>`_MAX_ITOSTR_BASE10_COUNT`<br/>`_MAX_ITOSTR_BASE8_COUNT`<br/>`_MAX_ITOSTR_BASE2_COUNT`|
|`_ltoa`, `_ltow`|16<br/>10<br/>8<br/>2|`_MAX_LTOSTR_BASE16_COUNT`<br/>`_MAX_LTOSTR_BASE10_COUNT`<br/>`_MAX_LTOSTR_BASE8_COUNT`<br/>`_MAX_LTOSTR_BASE2_COUNT`|
|`_ultoa`, `_ultow`|16<br/>10<br/>8<br/>2|`_MAX_ULTOSTR_BASE16_COUNT`<br/>`_MAX_ULTOSTR_BASE10_COUNT`<br/>`_MAX_ULTOSTR_BASE8_COUNT`<br/>`_MAX_ULTOSTR_BASE2_COUNT`|
|`_i64toa`, `_i64tow`|16<br/>10<br/>8<br/>2|`_MAX_I64TOSTR_BASE16_COUNT`<br/>`_MAX_I64TOSTR_BASE10_COUNT`<br/>`_MAX_I64TOSTR_BASE8_COUNT`<br/>`_MAX_I64TOSTR_BASE2_COUNT`|
|`_ui64toa`, `_ui64tow`|16<br/>10<br/>8<br/>2|`_MAX_U64TOSTR_BASE16_COUNT`<br/>`_MAX_U64TOSTR_BASE10_COUNT`<br/>`_MAX_U64TOSTR_BASE8_COUNT`<br/>`_MAX_U64TOSTR_BASE2_COUNT`|

This example uses a conversion count macro to define a buffer large enough to contain an unsigned long in base 2:

```cpp
#include <wchar.h>
#include <iostream>
int main()
{
    wchar_t buffer[_MAX_ULTOSTR_BASE2_COUNT];
    std:wcout << _ultow(3000000000ul, buffer, 2) << std::endl;
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
[_ltoa, _ltow](../../c-runtime-library/reference/ltoa-ltow.md)<br/>
[_ltoa_s, _ltow_s](../../c-runtime-library/reference/ltoa-s-ltow-s.md)<br/>
[_ultoa, _ultow](../../c-runtime-library/reference/ultoa-ultow.md)<br/>
[_ultoa_s, _ultow_s](../../c-runtime-library/reference/ultoa-s-ultow-s.md)<br/>
