---
description: "Learn more about: Support for Unicode"
title: "Support for Unicode"
ms.date: "01/09/2018"
helpviewer_keywords: ["globalization [C++], character sets", "portable data types [MFC]", "Unicode [C++]", "wide characters [C++], about wide characters", "character sets [C++], Unicode", "localization [C++], character sets", "Unicode [C++], installing support"]
---
# Support for Unicode

Unicode is a specification for supporting all character sets, including ones that can't be represented in a single byte.  If you're programming for an international market, we recommend you use either Unicode or a [multibyte character set](../text/support-for-multibyte-character-sets-mbcss.md) (MBCS). Or, code your program so you can build it for either by changing a switch.

A wide character is a 2-byte multilingual character code. Tens of thousands of characters, comprising almost all characters used in modern computing worldwide, including technical symbols and special publishing characters, can be represented according to the Unicode specification as a single wide character encoded by using UTF-16. Characters that cannot be represented in just one wide character can be represented in a Unicode pair by using the Unicode surrogate pair feature. Because almost every character in common use is represented in UTF-16 in a single 16-bit wide character, using wide characters simplifies programming with international character sets. Wide characters encoded using UTF-16LE (for little-endian) are the native character format for Windows.

A wide-character string is represented as a `wchar_t[]` array and is pointed to by a `wchar_t*` pointer. Any ASCII character can be represented as a wide character by prefixing the letter L to the character. For example, L'\0' is the terminating wide (16-bit) NULL character. Similarly, any ASCII string literal can be represented as a wide-character string literal by prefixing the letter L to the ASCII literal (L"Hello").

Generally, wide characters take more space in memory than multibyte characters but are faster to process. In addition, only one locale can be represented at a time in a multibyte encoding, whereas all character sets in the world are represented simultaneously by the Unicode representation.

The MFC framework is Unicode-enabled throughout, and MFC accomplishes Unicode enabling by using portable macros, as shown in the following table.

## Portable Data Types in MFC

|Non-portable data type|Replaced by this macro|
|-----------------------------|----------------------------|
|**`char`**, **`wchar_t`**|`_TCHAR`|
|**`char*`**, `LPSTR` (Win32 data type), `LPWSTR`|`LPTSTR`|
|`const char*`, `LPCSTR` (Win32 data type), `LPCWSTR`|`LPCTSTR`|

Class `CString` uses `_TCHAR` as its base and provides constructors and operators for easy conversions. Most string operations for Unicode can be written by using the same logic used for handling the Windows ANSI character set, except that the basic unit of operation is a 16-bit character instead of an 8-bit byte. Unlike working with multibyte character sets, you do not have to (and should not) treat a Unicode character as if it were two distinct bytes. You do, however, have to deal with the possibility of a single character represented by a surrogate pair of wide characters. In general, do not write code that assumes the length of a string is the same as the number of characters, whether narrow or wide, that it contains.

## What do you want to do?

- [Use MFC Unicode and Multibyte Character Set (MBCS) Support](../atl-mfc-shared/unicode-and-multibyte-character-set-mbcs-support.md)

- [Enable Unicode in my program](../text/international-enabling.md)

- [Enable both Unicode and MBCS in my program](../text/internationalization-strategies.md)

- [Use Unicode to create an internationalized program](../text/unicode-programming-summary.md)

- [Learn the benefits of Unicode](../text/benefits-of-character-set-portability.md)

- [Use wmain so I can pass wide-character arguments to my program](../text/support-for-using-wmain.md)

- [See a summary of Unicode programming](../text/unicode-programming-summary.md)

- [Learn about generic-text mappings for byte-width portability](../text/generic-text-mappings-in-tchar-h.md)

## See also

[Text and Strings](../text/text-and-strings-in-visual-cpp.md)<br/>
[Support for Using wmain](../text/support-for-using-wmain.md)
