---
description: "Learn more about: strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l"
title: "strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l"
ms.date: "4/2/2020"
api_name: ["_wcstok_s_l", "_mbstok_s_l", "_mbstok_s", "strtok_s", "wcstok_s", "_strtok_s_l", "_o__mbstok_s", "_o__mbstok_s_l", "_o_strtok_s", "_o_wcstok_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tcstok_s_l", "_wcstok_s_l", "_tcstok_s", "_mbstok_s_l", "strtok_s", "wcstok_s", "_mbstok_s", "_strtok_s_l"]
helpviewer_keywords: ["_strtok_s_l function", "_mbstok_s_l function", "strings [C++], searching", "mbstok_s_l function", "wcstok_s_l function", "_wcstok_s_l function", "_tcstok_s function", "_tcstok_s_l function", "strtok_s_l function", "wcstok_s function", "tokens, finding in strings", "mbstok_s function", "_mbstok_s function", "strtok_s function"]
ms.assetid: 7696c972-f83b-4617-8c82-95973e9fdb46
---
# strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l

Finds the next token in a string, by using the current locale or a locale that's passed in. These versions of [strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l](strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> **_mbstok_s** and **_mbstok_s_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char* strtok_s(
   char* str,
   const char* delimiters,
   char** context
);

char* _strtok_s_l(
   char* str,
   const char* delimiters,
   char** context,
   _locale_t locale
);

wchar_t* wcstok_s(
   wchar_t* str,
   const wchar_t* delimiters,
   wchar_t** context
);

wchar_t *_wcstok_s_l(
   wchar_t* str,
   const wchar_t* delimiters,
   wchar_t** context,
   _locale_t locale
);

unsigned char* _mbstok_s(
   unsigned char* str,
   const unsigned char* delimiters,
   char** context
);

unsigned char* _mbstok_s_l(
   unsigned char* str,
   const unsigned char* delimiters,
   char** context,
   _locale_t locale
);
```

### Parameters

*str*<br/>
A string containing the token or tokens to find.

*delimiters*<br/>
The set of delimiter characters to use.

*context*<br/>
Used to store position information between calls to the function.

*locale*<br/>
The locale to use.

## Return Value

Returns a pointer to the next token found in *str*. Returns **NULL** when no more tokens are found. Each call modifies *str* by substituting a null character for the first delimiter that occurs after the returned token.

### Error Conditions

|*str*|*delimiters*|*context*|Return value|**errno**|
|----------------|------------------|---------------|------------------|-------------|
|**NULL**|any|pointer to a null pointer|**NULL**|**EINVAL**|
|any|**NULL**|any|**NULL**|**EINVAL**|
|any|any|**NULL**|**NULL**|**EINVAL**|

If *str* is **NULL** but *context* is a pointer to a valid context pointer, there's no error.

## Remarks

The **strtok_s** family of functions finds the next token in *str*. The set of characters in *delimiters* specifies possible delimiters of the token to be found in *str* on the current call. **wcstok_s** and **_mbstok_s** are wide-character and multibyte-character versions of **strtok_s**. The arguments and return values of **wcstok_s** and **_wcstok_s_l** are wide-character strings; those of **_mbstok_s** and **_mbstok_s_l** are multibyte-character strings. These functions behave identically otherwise.

This function validates its parameters. When an error condition occurs, as in the Error Conditions table, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions set **errno** to **EINVAL** and return **NULL**.

On the first call to **strtok_s**, the function skips leading delimiters and returns a pointer to the first token in *str*, terminating the token with a null character. More tokens can be broken out of the remainder of *str* by a series of calls to **strtok_s**. Each call to **strtok_s** modifies *str* by inserting a null character after the token returned by that call. The *context* pointer keeps track of which string is being read and where in the string the next token is to be read. To read the next token from *str*, call **strtok_s** with a **NULL** value for the *str* argument, and pass the same *context* parameter. The **NULL** *str* argument causes **strtok_s** to search for the next token in the modified *str*. The *delimiters* argument can take any value from one call to the next so that the set of delimiters may vary.

Since the *context* parameter supersedes the static buffers used in **strtok** and **_strtok_l**, it's possible to parse two strings simultaneously in the same thread.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale. For more information, see [setlocale](setlocale-wsetlocale.md).

The versions of these functions without the **_l** suffix use the current thread locale for this locale-dependent behavior. The versions with the **_l** suffix are identical except they instead use the locale specified by the *locale* parameter. For more information, see [Locale](../../c-runtime-library/locale.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strtok_s**|\<string.h>|
|**_strtok_s_l**|\<string.h>|
|**wcstok_s**,<br />**_wcstok_s_l**|\<string.h> or \<wchar.h>|
|**_mbstok_s**,<br />**_mbstok_s_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|\_UNICODE & \_MBCS not defined|\_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstok_s**|**strtok_s**|**_mbstok_s**|**wcstok_s**|
|**_tcstok_s_l**|**_strtok_s_l**|**_mbstok_s_l**|**_wcstok_s_l**|

## Example

```C
// crt_strtok_s.c
// In this program, a loop uses strtok_s
// to print all the tokens (separated by commas
// or blanks) in two strings at the same time.

#include <string.h>
#include <stdio.h>

char string1[] =
    "A string\tof ,,tokens\nand some  more tokens";
char string2[] =
    "Another string\n\tparsed at the same time.";
char seps[]   = " ,\t\n";
char *token1 = NULL;
char *token2 = NULL;
char *next_token1 = NULL;
char *next_token2 = NULL;

int main(void)
{
    printf("Tokens:\n");

    // Establish string and get the first token:
    token1 = strtok_s(string1, seps, &next_token1);
    token2 = strtok_s(string2, seps, &next_token2);

    // While there are tokens in "string1" or "string2"
    while ((token1 != NULL) || (token2 != NULL))
    {
        // Get next token:
        if (token1 != NULL)
        {
            printf(" %s\n", token1);
            token1 = strtok_s(NULL, seps, &next_token1);
        }
        if (token2 != NULL)
        {
            printf("        %s\n", token2);
            token2 = strtok_s(NULL, seps, &next_token2);
        }
    }
}
```

```Output
Tokens:
A
        Another
string
        string
of
        parsed
tokens
        at
and
        the
some
        same
more
        time.
tokens
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
