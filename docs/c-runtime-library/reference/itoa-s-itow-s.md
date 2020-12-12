---
description: "Learn more about: _itoa_s, _ltoa_s, _ultoa_s, _i64toa_s, _ui64toa_s, _itow_s,  _ltow_s,  _ultow_s, _i64tow_s, _ui64tow_s"
title: "_itoa_s, _itow_s functions"
ms.date: "4/2/2020"
api_name: ["_itoa_s", "_ltoa_s", "_ultoa_s", "_i64toa_s", "_ui64toa_s", "_itow_s", "_ltow_s", "_ultow_s", "_i64tow_s", "_ui64tow_s", "_o__i64toa_s", "_o__i64tow_s", "_o__itoa_s", "_o__itow_s", "_o__ltoa_s", "_o__ltow_s", "_o__ui64toa_s", "_o__ui64tow_s", "_o__ultoa_s", "_o__ultow_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_itoa_s", "_ltoa_s", "_ultoa_s", "_i64toa_s", "_ui64toa_s", "_itow_s", "_ltow_s", "_ultow_s", "_i64tow_s", "_ui64tow_s", "_itot_s", "_ltot_s", "_ultot_s", "_i64tot_s", "_ui64tot_s", "itoa_s", "ltoa_s", "ultoa_s", "i64toa_s", "ui64toa_s", "itow_s", "ltow_s", "ultow_s", "i64tow_s", "ui64tow_s", "itot_s", "ltot_s", "ultot_s", "i64tot_s", "ui64tot_s"]
helpviewer_keywords: ["_ui64toa_s function", "_itow_s function", "_i64tow_s function", "_itot_s function", "converting integers", "itow_s function", "i64toa_s function", "_ui64tow_s function", "integers, converting", "_i64tot_s function", "itoa_s function", "_itoa_s function", "ui64toa_s function", "i64tow_s function", "converting numbers, to strings", "_ui64tot_s function", "_i64toa_s function"]
ms.assetid: eb746581-bff3-48b5-a973-bfc0a4478ecf
---
# _itoa_s, _ltoa_s, _ultoa_s, _i64toa_s, _ui64toa_s, _itow_s,  _ltow_s,  _ultow_s, _i64tow_s, _ui64tow_s

Converts an integer to a string. These are versions of the [_itoa, _itow functions](itoa-itow.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t _itoa_s( int value, char * buffer, size_t size, int radix );
errno_t _ltoa_s( long value, char * buffer, size_t size, int radix );
errno_t _ultoa_s( unsigned long value, char * buffer, size_t size, int radix );
errno_t _i64toa_s( long long value, char *buffer,
   size_t size, int radix );
errno_t _ui64toa_s( unsigned long long value, char *buffer,
   size_t size, int radix );

errno_t _itow_s( int value, wchar_t *buffer,
   size_t size, int radix );
errno_t _ltow_s( long value, wchar_t *buffer,
   size_t size, int radix );
errno_t _ultow_s( unsigned long value, wchar_t *buffer,
   size_t size, int radix );
errno_t _i64tow_s( long long value, wchar_t *buffer,
   size_t size, int radix );
errno_t _ui64tow_s( unsigned long long value, wchar_t *buffer,
   size_t size, int radix
);

// These template functions are C++ only:
template <size_t size>
errno_t _itoa_s( int value, char (&buffer)[size], int radix );

template <size_t size>
errno_t _ltoa_s( long value, char (&buffer)[size], int radix );

template <size_t size>
errno_t _ultoa_s( unsigned long value, char (&buffer)[size], int radix );

template <size_t size>
errno_t _itow_s( int value, wchar_t (&buffer)[size], int radix );

template <size_t size>
errno_t _ltow_s( long value, wchar_t (&buffer)[size], int radix );

template <size_t size>
errno_t _ultow_s( unsigned long value, wchar_t (&buffer)[size], int radix );
```

### Parameters

*value*<br/>
Number to be converted.

*buffer*<br/>
Output buffer that holds the result of the conversion.

*size*<br/>
Size of *buffer* in characters or wide characters.

*radix*<br/>
The radix or numeric base to use to convert *value*, which must be in the range 2-36.

## Return value

Zero if successful; an error code on failure. If any of the following conditions applies, the function invokes an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md).

### Error conditions

|value|buffer|size|radix|Return|
|-----------|------------|----------------------|-----------|------------|
|any|**NULL**|any|any|**EINVAL**|
|any|any|<=0|any|**EINVAL**|
|any|any|<= length of the result string required|any|**EINVAL**|
|any|any|any|*radix* < 2 or *radix* > 36|**EINVAL**|

### Security issues

These functions can generate an access violation if *buffer* does not point to valid memory and is not **NULL**, or if the length of the buffer is not long enough to hold the result string.

## Remarks

Except for the parameters and return value, the **_itoa_s** and **_itow_s** function families have the same behavior as the corresponding less secure **_itoa** and **_itow** versions.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

The CRT includes convenient macros to define the size of the buffer required to convert the longest possible value of each integer type, including the null terminator and sign character, for several common bases. For information, see [Maximum conversion count macros](itoa-itow.md#maximum-conversion-count-macros).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_itot_s**|**_itoa_s**|**_itoa_s**|**_itow_s**|
|**_ltot_s**|**_ltoa_s**|**_ltoa_s**|**_ltow_s**|
|**_ultot_s**|**_ultoa_s**|**_ultoa_s**|**_ultow_s**|
|**_i64tot_s**|**_i64toa_s**|**_i64toa_s**|**_i64tow_s**|
|**_ui64tot_s**|**_ui64toa_s**|**_ui64toa_s**|**_ui64tow_s**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_itoa_s**, **_ltoa_s**, **_ultoa_s**, **_i64toa_s**, **_ui64toa_s**|\<stdlib.h>|
|**_itow_s**, **_ltow_s**, **_ultow_s**, **_i64tow_s**, **_ui64tow_s**|\<stdlib.h> or \<wchar.h>|

These functions are Microsoft-specific. For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

This sample demonstrates the use of a few of the integer conversion functions. Note that the [_countof](countof-macro.md) macro only works to determine buffer size when the array declaration is visible to the compiler, and not for parameters that have decayed to pointers.

```C
// crt_itoa_s.c
// Compile by using: cl /W4 crt_itoa_s.c
#include <stdlib.h>     // for _itoa_s functions, _countof, count macro
#include <stdio.h>      // for printf
#include <string.h>     // for strnlen

int main( void )
{
    char buffer[_MAX_U64TOSTR_BASE2_COUNT];
    int r;
    for ( r = 10; r >= 2; --r )
    {
        _itoa_s( -1, buffer, _countof(buffer), r );
        printf( "base %d: %s (%d chars)\n",
            r, buffer, strnlen(buffer, _countof(buffer)) );
    }
    printf( "\n" );
    for ( r = 10; r >= 2; --r )
    {
        _i64toa_s( -1LL, buffer, _countof(buffer), r );
        printf( "base %d: %s (%d chars)\n",
            r, buffer, strnlen(buffer, _countof(buffer)) );
    }
    printf( "\n" );
    for ( r = 10; r >= 2; --r )
    {
        _ui64toa_s( 0xffffffffffffffffULL, buffer, _countof(buffer), r );
        printf( "base %d: %s (%d chars)\n",
            r, buffer, strnlen(buffer, _countof(buffer)) );
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

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[_itoa, _itow functions](itoa-itow.md)<br/>
