---
description: "Learn more about: Text and Strings in Visual C++"
title: "Text and Strings in Visual C++"
ms.date: "11/04/2016"
helpviewer_keywords: ["globalization [C++], character sets", "programming [C++], international", "multiple language support [C++]", "Unicode [C++]", "international applications [C++], about international applications", "portability [C++]", "translation [C++], character sets", "non-European characters [C++]", "character sets [C++]", "globalization [C++]", "Japanese characters [C++]", "Kanji character support [C++]", "local character sets [C++]", "ASCII characters [C++]", "character sets [C++], about character sets", "localization [C++], character sets", "translating code [C++]", "localization [C++]", "character sets [C++], non-European", "portability [C++], character sets", "MBCS [C++], international programming"]
ms.assetid: a1bb27ac-abe5-4c6b-867d-f761d4b93205
---
# Text and Strings in Visual C++

An important aspect of developing applications for international markets is the adequate representation of local character sets. The ASCII character set defines characters in the range 0x00 to 0x7F. There are other character sets, primarily European, that define the characters within the range 0x00 to 0x7F identically to the ASCII character set and also define an extended character set from 0x80 to 0xFF. Thus, an 8-bit, single-byte-character set (SBCS) is sufficient to represent the ASCII character set, as well as the character sets for many European languages. However, some non-European character sets, such as Japanese Kanji, include many more characters than a single-byte coding scheme can represent, and therefore require multibyte-character set (MBCS) encoding.

## In This Section

[Unicode and MBCS](../text/unicode-and-mbcs.md)<br/>
Discusses Visual C++ support for Unicode and MBCS programming.

[Support for Unicode](../text/support-for-unicode.md)<br/>
Describes Unicode, a specification for supporting all character sets, including character sets that cannot be represented in a single byte.

[Support for Multibyte Character Sets (MBCS)](../text/support-for-multibyte-character-sets-mbcss.md)<br/>
Discusses MBCS, an alternative to Unicode for supporting character sets, like Japanese and Chinese, that cannot be represented in a single byte.

[Generic-Text Mappings in tchar.h](../text/generic-text-mappings-in-tchar-h.md)<br/>
Provides Microsoft-specific generic-text mappings for many data types, routines, and other objects.

[How to: Convert Between Various String Types](../text/how-to-convert-between-various-string-types.md)<br/>
Demonstrates how to convert various Visual C++ string types into other strings.

## Related Sections

[Internationalization](../c-runtime-library/internationalization.md)<br/>
Discusses international support in the C run-time library.

[International Samples](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/International)<br/>
Provides links to samples demonstrating internationalization in Visual C++.

[Language and Country/Region Strings](../c-runtime-library/locale-names-languages-and-country-region-strings.md)<br/>
Provides the language and country/region strings in the C run-time library.
