---
description: "Learn more about: strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l"
title: "strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l"
ms.date: "6/24/2020"
api_name: ["_mbstok_l", "_mbstok", "wcstok", "_mbstok", "strtok", "_wcstok_l", "_o__mbstok", "_o__mbstok_l", "_o_strtok", "_o_wcstok"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbstok", "strtok", "_tcstok", "wcstok"]
helpviewer_keywords: ["mbstok_l function", "strings [C++], searching", "tcstok function", "_tcstok function", "_strtok_l function", "strtok function", "mbstok function", "wcstok_l function", "_mbstok function", "tcstok_l function", "tokens, finding in strings", "_mbstok_l function", "wcstok function", "_wcstok_l function", "_tcstok_l function", "strtok_l function"]
ms.assetid: 904cb734-f0d7-4d77-ba81-4791ddf461ae
---
# strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l

Finds the next token in a string, by using the current locale or a specified locale that's passed in. More secure versions of these functions are available; see [strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l](strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l.md).

> [!IMPORTANT]
> **_mbstok** and **_mbstok_l** cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
char *strtok(
   char *strToken,
   const char *strDelimit
);
char *strtok_l(
   char *strToken,
   const char *strDelimit,
   _locale_t locale
);
wchar_t *wcstok(
   wchar_t *strToken,
   const wchar_t *strDelimit
);
wchar_t *wcstok(
   wchar_t *strToken,
   const wchar_t *strDelimit,
   wchar_t **context
);
wchar_t *wcstok_l(
   wchar_t *strToken,
   const wchar_t *strDelimit,
   _locale_t locale
);
unsigned char *_mbstok(
   unsigned char *strToken,
   const unsigned char *strDelimit
);
unsigned char *_mbstok_l(
   unsigned char *strToken,
   const unsigned char *strDelimit,
   _locale_t locale
);
```

### Parameters

*strToken*<br/>
String containing token or tokens.

*strDelimit*<br/>
Set of delimiter characters.

*locale*<br/>
Locale to use.

*context*<br/>
Points to memory used to store the internal state of the parser so that the parser can continue from where it left off the next time you call **wcstok**.

## Return Value

Returns a pointer to the next token found in *strToken*. The functions return **NULL** when no more tokens are found. Each call modifies *strToken* by substituting a null character for the first delimiter that occurs after the returned token.

## Remarks

The **strtok** function finds the next token in *strToken*. The set of characters in *strDelimit* specifies possible delimiters of the token to be found in *strToken* on the current call. **wcstok** and **_mbstok** are wide-character and multibyte-character versions of **strtok**. The arguments and return value of **wcstok** are wide-character strings; those of **_mbstok** are multibyte-character strings. These three functions behave identically otherwise.

The two argument version of **wcstok** is not standard. If you need to use that version, you'll need to define `_CRT_NON_CONFORMING_WCSTOK` before you `#include <wchar.h>` (or `#include <string.h>`).

> [!IMPORTANT]
> These functions incur a potential threat brought about by a buffer overrun problem. Buffer overrun problems are a frequent method of system attack, resulting in an unwarranted elevation of privilege. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).

On the first call to **strtok**, the function skips leading delimiters and returns a pointer to the first token in *strToken*, terminating the token with a null character. More tokens can be broken out of the remainder of *strToken* by a series of calls to **strtok**. Each call to **strtok** modifies *strToken* by inserting a null character after the **token** returned by that call. To read the next token from *strToken*, call **strtok** with a **NULL** value for the *strToken* argument. The **NULL** *strToken* argument causes **strtok** to search for the next token in the modified *strToken*. The *strDelimit* argument can take any value from one call to the next so that the set of delimiters may vary.

The output value is affected by the setting of the **LC_CTYPE** category setting of the locale. For more information, see [setlocale](setlocale-wsetlocale.md).

The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior. The versions with the **_l** suffix are identical except that they use the locale parameter passed in instead. For more information, see [Locale](../../c-runtime-library/locale.md).

> [!NOTE]
> Each function uses a thread-local static variable for parsing the string into tokens. Therefore, multiple threads can simultaneously call these functions without undesirable effects. However, within a single thread, interleaving calls to one of these functions is highly likely to produce data corruption and inaccurate results. When parsing different strings, finish parsing one string before starting to parse the next. Also, be aware of the potential for danger when calling one of these functions from within a loop where another function is called. If the other function ends up using one of these functions, an interleaved sequence of calls will result, triggering data corruption.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcstok**|**strtok**|**_mbstok**|**wcstok**|
|**_tcstok**|**_strtok_l**|**_mbstok_l**|**_wcstok_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strtok**|\<string.h>|
|**wcstok**|\<string.h> or \<wchar.h>|
|**_wcstok_l**|<tchar.h>|
|**_mbstok**, **_mbstok_l**|\<mbstring.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_strtok.c
// compile with: /W3
// In this program, a loop uses strtok
// to print all the tokens (separated by commas
// or blanks) in the string named "string".
//
#include <string.h>
#include <stdio.h>

char string[] = "A string\tof ,,tokens\nand some  more tokens";
char seps[]   = " ,\t\n";
char *token;

int main( void )
{
   printf( "Tokens:\n" );

   // Establish string and get the first token:
   token = strtok( string, seps ); // C4996
   // Note: strtok is deprecated; consider using strtok_s instead
   while( token != NULL )
   {
      // While there are tokens in "string"
      printf( " %s\n", token );

      // Get next token:
      token = strtok( NULL, seps ); // C4996
   }
}
```

```Output
Tokens:
A
string
of
tokens
and
some
more
tokens
```

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[Interpretation of Multibyte-Character Sequences](../../c-runtime-library/interpretation-of-multibyte-character-sequences.md)<br/>
[strcspn, wcscspn, _mbscspn, _mbscspn_l](strcspn-wcscspn-mbscspn-mbscspn-l.md)<br/>
[strspn, wcsspn, _mbsspn, _mbsspn_l](strspn-wcsspn-mbsspn-mbsspn-l.md)<br/>
