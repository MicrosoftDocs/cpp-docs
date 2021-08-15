---
description: "Learn more about: mbrtoc16, mbrtoc32"
title: "mbrtoc16, mbrtoc323"
ms.date: "4/2/2020"
api_name: ["mbrtoc16", "mbrtoc32", "_o_mbrtoc16", "_o_mbrtoc32"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-convert-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["mbrtoc16", "mbrtoc32", "uchar/mbrtoc16", "uchar/mbrtoc32"]
helpviewer_keywords: ["mbrtoc16 function", "mbrtoc32 function"]
ms.assetid: 099ade4d-56f7-4e61-8b45-493f1d7a64bd
---
# mbrtoc16, mbrtoc32

Translates the first UTF-8 multibyte character in a string into the equivalent UTF-16 or UTF-32 character.

## Syntax

```C
size_t mbrtoc16(
   char16_t* destination,
   const char* source,
   size_t max_bytes,
   mbstate_t* state
);

size_t mbrtoc32(
   char32_t* destination,
   const char* source,
   size_t max_bytes,
   mbstate_t* state
);
```

### Parameters

*destination*\
Pointer to the **`char16_t`** or **`char32_t`** equivalent of the UTF-8 multibyte character to convert. If null, the function doesn't store a value.

*source*\
Pointer to the UTF-8 multibyte character string to convert.

*max_bytes*\
The maximum number of bytes in *source* to examine for a character to convert. This argument should be a value between one and the number of bytes, including any null terminator, remaining in *source*.

*state*\
Pointer to a **mbstate_t** conversion state object used to interpret the UTF-8 multibyte string to one or more output characters.

## Return value

On success, returns the value of the first of these conditions that applies, given the current *state* value:

|Value|Condition|
|-----------|---------------|
|0|The next *max_bytes* or fewer characters converted from *source* correspond to the null wide character, which is the value stored if *destination* isn't null.<br /><br /> *state* contains the initial shift state.|
|Between 1 and *max_bytes*, inclusive|The value returned is the number of bytes of *source* that complete a valid multibyte character. The converted wide character is stored if *destination* isn't null.|
|-3|The next wide character resulting from a previous call to the function has been stored in *destination* if *destination* isn't null. No bytes from *source* are consumed by this call to the function.<br /><br /> When  *source* points to a UTF-8 multibyte character that requires more than one wide character to represent (for example, a surrogate pair), then the *state* value is updated so that the next function call writes out the additional character.|
|-2|The next *max_bytes* bytes represent an incomplete, but potentially valid, UTF-8 multibyte character. No value is stored in *destination*. This result can occur if *max_bytes* is zero.|
|-1|An encoding error has occurred. The next *max_bytes* or fewer bytes do not contribute to a complete and valid UTF-8 multibyte character. No value is stored in *destination*.<br /><br /> **EILSEQ** is stored in **errno** and the conversion state value *state* is unspecified.|

## Remarks

The **mbrtoc16** function reads up to *max_bytes* bytes from *source* to find the first complete, valid UTF-8 multibyte character, and then stores the equivalent UTF-16 character in *destination*. If the character requires more than one UTF-16 output character, such as a surrogate pair, then the *state* value is set to store the next UTF-16 character in *destination* on the next call to **mbrtoc16**. The **mbrtoc32** function is identical, but output is stored as a UTF-32 character.

If *source* is null, these functions return the equivalent of a call made using arguments of **NULL** for *destination*, `""` (an empty, null-terminated string) for *source*,  and 1 for *max_bytes*. The passed values of *destination* and *max_bytes* are ignored.

If *source* isn't null, the function starts at the beginning of the string and inspects up to *max_bytes* bytes to determine the number of bytes required to complete the next UTF-8 multibyte character, including any shift sequences. If the examined bytes contain a valid and complete UTF-8 multibyte character, the function converts the character into the equivalent 16-bit or 32-bit wide character or characters. If *destination* isn't null, the function stores the first (and possibly only) result character in destination. If additional output characters are required, a value is set in *state*, so that subsequent calls to the function output the additional characters and return the value -3. If no more output characters are required, then *state* is set to the initial shift state.

To convert non-UTF-8 multibyte characters to UTF-16 LE characters, use the [mbrtowc](mbrtowc.md), [mbtowc, or _mbtowc_l](mbtowc-mbtowc-l.md) functions.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**mbrtoc16**, **mbrtoc32**|\<uchar.h>|\<cuchar>|

For additional compatibility information, see [Compatibility](../compatibility.md).

## See also

[Data conversion](../data-conversion.md)\
[Locale](../locale.md)\
[Interpretation of multibyte-character sequences](../interpretation-of-multibyte-character-sequences.md)\
[c16rtomb, c32rtomb](c16rtomb-c32rtomb1.md)\
[mbrtowc](mbrtowc.md)\
[mbsrtowcs](mbsrtowcs.md)\
[mbsrtowcs_s](mbsrtowcs-s.md)
