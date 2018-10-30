---
title: "strtod, _strtod_l, wcstod, _wcstod_l"
ms.date: "10/20/2017"
apiname: ["wcstod", "_wcstod_l", "_strtod_l", "strtod"]
apilocation: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll"]
apitype: "DLLExport"
f1_keywords: ["_tcstod", "strtod", "wcstod", "_strtod_l", "_wcstod_l", "stdlib/strtod", "corecrt_wstdlib/wcstod", "stdlib/_strtod_l", "corecrt_wstdlib/_wcstod_l"]
helpviewer_keywords: ["wcstod_l function", "tcstod_l function", "_tcstod_l function", "strtod function", "_wcstod_l function", "wcstod function", "strtod_l function", "tcstod function", "_tcstod function", "_strtod_l function", "string conversion, to floating point values"]
ms.assetid: 0444f74a-ba2a-4973-b7f0-1d77ba88c6ed
---
# strtod, _strtod_l, wcstod, _wcstod_l

Convert strings to a double-precision value.

## Syntax

```C
double strtod(
   const char *strSource,
   char **endptr
);
double _strtod_l(
   const char *strSource,
   char **endptr,
   _locale_t locale
);
double wcstod(
   const wchar_t *strSource,
   wchar_t **endptr
);
double wcstod_l(
   const wchar_t *strSource,
   wchar_t **endptr,
   _locale_t locale
);
```

### Parameters

*strSource*<br/>
Null-terminated string to convert.

*endptr*<br/>
Pointer to character that stops scan.

*locale*<br/>
The locale to use.

## Return Value

**strtod** returns the value of the floating-point number, except when the representation would cause an overflow, in which case the function returns +/-**HUGE_VAL**. The sign of **HUGE_VAL** matches the sign of the value that cannot be represented. **strtod** returns 0 if no conversion can be performed or an underflow occurs.

**wcstod** returns values analogously to **strtod**. For both functions, **errno** is set to **ERANGE** if overflow or underflow occurs and the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). See [_doserrno, errno, _sys_errlist, and _sys_nerr](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md) for more information on this and other return codes.

## Remarks

Each function converts the input string *strSource* to a **double**. The **strtod** function converts *strSource* to a double-precision value. **strtod** stops reading the string *strSource* at the first character it cannot recognize as part of a number. This may be the terminating null character. **wcstod** is a wide-character version of **strtod**; its *strSource* argument is a wide-character string. These functions behave identically otherwise.

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstod**|**strtod**|**strtod**|**wcstod**|
|**_tcstod_l**|**_strtod_l**|**_strtod_l**|**_wcstod_l**|

The **LC_NUMERIC** category setting of the current locale determines recognition of the radix point character in *strSource*. For more information, see [setlocale](setlocale-wsetlocale.md). The functions without the **_l** suffix use the current locale; **_strtod_l** is identical to **_strtod_l** except that they use the *locale* passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

If *endptr* is not **NULL**, a pointer to the character that stopped the scan is stored at the location pointed to by *endptr*. If no conversion can be performed (no valid digits were found or an invalid base was specified), the value of *strSource* is stored at the location pointed to by *endptr*.

**strtod** expects *strSource* to point to a string of one of the following forms:

[*whitespace*] [*sign*] {*digits* [*radix* *digits*] &#124; *radix* *digits*} [{**e** &#124; **E**} [*sign*] *digits*]
[*whitespace*] [*sign*] {**0x** &#124; **0X**} {*hexdigits* [*radix* *hexdigits*] &#124; *radix* *hexdigits*} [{**p** &#124; **P**} [*sign*] *hexdigits*]
[*whitespace*] [*sign*] {**INF** &#124; **INFINITY**}
[*whitespace*] [*sign*] **NAN** [*sequence*]

The optional leading *whitespace* may consist of space and tab characters, which are ignored; *sign* is either plus (+) or minus (-); *digits* are one or more decimal digits; *hexdigits* are one or more hexadecimal digits; *radix* is the radix point character, either a period (.) in the default "C" locale, or the locale-specific value if the current locale is different or when *locale* is specified; a *sequence* is a sequence of alphanumeric or underscore characters. In both decimal and hexadecimal number forms, if no digits appear before the radix point character, at least one must appear after the radix point character. In the decimal form, the decimal digits can be followed by an exponent, which consists of an introductory letter (**e** or **E**) and an optionally signed integer. In the hexadecimal form, the hexadecimal digits can be followed by an exponent, which consists of an introductory letter (**p** or **P**) and an optionally signed hexadecimal integer that represents the exponent as a power of 2. In either form, if neither an exponent part nor a radix point character appears, a radix point character is assumed to follow the last digit in the string. Case is ignored in both the **INF** and **NAN** forms. The first character that does not fit one of these forms stops the scan.

The UCRT versions of these functions do not support conversion of Fortran-style (**d** or **D**) exponent letters. This non-standard extension was supported by earlier versions of the CRT, and may be a breaking change for your code. The UCRT versions support hexadecimal strings and round-tripping of INF and NAN values, which were not supported in earlier versions. This can also cause breaking changes in your code. For example, the string "0x1a" would be interpreted by **strtod** as 0.0 in previous versions, but as 26.0 in the UCRT version.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strtod**, **_strtod_l**|C: &lt;stdlib.h> C++: &lt;cstdlib> or &lt;stdlib.h> |
|**wcstod**, **_wcstod_l**|C: &lt;stdlib.h> or &lt;wchar.h> C++: &lt;cstdlib>, &lt;stdlib.h> or &lt;wchar.h> |

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strtod.c
// This program uses strtod to convert a
// string to a double-precision value; strtol to
// convert a string to long integer values; and strtoul
// to convert a string to unsigned long-integer values.
//

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
   char   *string, *stopstring;
   double x;
   long   l;
   int    base;
   unsigned long ul;

   string = "3.1415926This stopped it";
   x = strtod( string, &stopstring );
   printf( "string = %s\n", string );
   printf("   strtod = %f\n", x );
   printf("   Stopped scan at: %s\n\n", stopstring );

   string = "-10110134932This stopped it";
   l = strtol( string, &stopstring, 10 );
   printf( "string = %s\n", string );
   printf("   strtol = %ld\n", l );
   printf("   Stopped scan at: %s\n\n", stopstring );

   string = "10110134932";
   printf( "string = %s\n", string );

   // Convert string using base 2, 4, and 8:
   for( base = 2; base <= 8; base *= 2 )
   {
      // Convert the string:
      ul = strtoul( string, &stopstring, base );
      printf( "   strtol = %ld (base %d)\n", ul, base );
      printf( "   Stopped scan at: %s\n", stopstring );
   }
}
```

```Output
string = 3.1415926This stopped it
   strtod = 3.141593
   Stopped scan at: This stopped it

string = -10110134932This stopped it
   strtol = -2147483648
   Stopped scan at: This stopped it

string = 10110134932
   strtol = 45 (base 2)
   Stopped scan at: 34932
   strtol = 4423 (base 4)
   Stopped scan at: 4932
   strtol = 2134108 (base 8)
   Stopped scan at: 932
```

## See also

[Data Conversion](../../c-runtime-library/data-conversion.md)<br/>
[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[String to Numeric Value Functions](../../c-runtime-library/string-to-numeric-value-functions.md)<br/>
[strtol, wcstol, _strtol_l, _wcstol_l](strtol-wcstol-strtol-l-wcstol-l.md)<br/>
[strtoul, _strtoul_l, wcstoul, _wcstoul_l](strtoul-strtoul-l-wcstoul-wcstoul-l.md)<br/>
[atof, _atof_l, _wtof, _wtof_l](atof-atof-l-wtof-wtof-l.md)<br/>
[localeconv](localeconv.md)<br/>
[_create_locale, _wcreate_locale](create-locale-wcreate-locale.md)<br/>
[_free_locale](free-locale.md)<br/>
