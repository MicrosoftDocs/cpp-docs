---
description: "Learn more about: Unicode and MBCS"
title: "Unicode and MBCS"
ms.date: "11/04/2016"
helpviewer_keywords: ["MBCS [C++], Unicode", "MFC [C++], character sets", "character sets [C++], multibyte", "run-time libraries [C++], language portability", "character sets [C++], Unicode", "Unicode [C++], MFC and C run-time functions", "multibyte characters [C++]", "runtime [C++], language portability"]
ms.assetid: 677baec6-71b4-4579-94df-64f18bc117c4
---
# Unicode and MBCS

The Microsoft Foundation Classes (MFC) library, the C run-time library for Visual C++, and the Visual C++ development environment are enabled to assist your international programming. They provide:

- Support for the Unicode standard on Windows. Unicode is the current standard and should be used whenever possible.

   Unicode is a 16-bit character encoding, providing enough encodings for all languages. All ASCII characters are included in Unicode as widened characters.

- Support for a form of multibyte character set (MBCS) called double-byte character set (DBCS) on all platforms.

   DBCS characters are composed of 1 or 2 bytes. Some ranges of bytes are set aside for use as lead bytes. A lead byte specifies that it and the following trail byte comprise a single 2-byte-wide character. You must keep track of which bytes are lead bytes. In a particular multibyte-character set, the lead bytes fall within a certain range, as do the trail bytes. When these ranges overlap, it might be necessary to evaluate the context to determine whether a given byte is functioning as a lead byte or a trail byte.

- Support for tools that simplify MBCS programming of applications written for international markets.

   When run on an MBCS-enabled version of the Windows operating system, the Visual C++ development system — including the integrated source code editor, debugger, and command-line tools — is completely MBCS-enabled. For more information, see [MBCS Support in Visual C++](../text/mbcs-support-in-visual-cpp.md).

> [!NOTE]
> In this documentation, MBCS is used to describe all non-Unicode support for multibyte characters. In Visual C++, MBCS always means DBCS. Character sets wider than 2 bytes are not supported.

By definition, the ASCII character set is a subset of all multibyte-character sets. In many multibyte character sets, each character in the range 0x00 - 0x7F is identical to the character that has the same value in the ASCII character set. For example, in both ASCII and MBCS character strings, the 1-byte NULL character ('\0') has value 0x00 and indicates the terminating null character.

## See also

[Text and Strings](../text/text-and-strings-in-visual-cpp.md)<br/>
[International Enabling](../text/international-enabling.md)
