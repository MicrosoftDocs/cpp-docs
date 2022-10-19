---
title: "Single-Byte and Multibyte Character Sets"
description: "An introduction to single and multi-byte character sets in the Microsoft runtime library."
ms.topic: "conceptual"
ms.date: "11/04/2016"
helpviewer_keywords: ["SBCS (single byte character set)", "MBCS [C++], about MBCS", "character sets [C++], multibyte", "character sets [C++], single byte"]
ms.assetid: 2cbc78ea-33c0-4cfb-b0df-7ce2458431ce
---
# Single-byte and multibyte character sets

The ASCII character set defines characters in the range 0x00 - 0x7F. There are many other character sets, primarily European, that define the characters within the range 0x00 - 0x7F identically to the ASCII character set and also define an extended character set from 0x80 - 0xFF. An 8-bit, single-byte-character set (SBCS) is sufficient to represent the ASCII character set and the character sets for many European languages. However, some non-European character sets, such as Japanese Kanji, include many more characters than can be represented in a single-byte coding scheme, and so require multibyte-character set (MBCS) encoding.

> [!NOTE]
> Many Microsoft run-time library SBCS routines handle multibyte bytes, characters, and strings as appropriate. Many multibyte-character sets define the ASCII character set as a subset. In many multibyte character sets, each character in the range 0x00 - 0x7F is identical to the character that has the same value in the ASCII character set. For example, in both ASCII and MBCS character strings, the one-byte null character ('\0') has value 0x00 and indicates the terminating null character.

A multibyte character set can consist of both 1-byte and 2-byte characters. A multibyte-character string can contain a mixture of single-byte and double-byte characters. A two-byte multibyte character has a lead byte and a trail byte. In a particular multibyte-character set, the lead bytes fall within a certain range, as do the trail bytes. When these ranges overlap, you may need to evaluate the context to determine whether a given byte is functioning as a lead byte or a trail byte.

## See also

[Internationalization](./internationalization.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)
