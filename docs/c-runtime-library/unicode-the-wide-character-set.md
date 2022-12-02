---
title: "Unicode: The Wide-Character Set"
description: "An introduction to the Unicode wide character set in the Microsoft C runtime."
ms.topic: "conceptual"
ms.date: "11/04/2016"
helpviewer_keywords: ["Unicode [C++], wide character set", "wide characters [C++], Unicode"]
ms.assetid: b6a05a21-59a5-4d30-8c85-2dbe185f7a74
---
# Unicode: The wide-character set

A wide character is a 2-byte multilingual character code. Any character in use in modern computing worldwide, including technical symbols and special publishing characters, can be represented according to the Unicode specification as a wide character. Developed and maintained by a large consortium that includes Microsoft, the Unicode standard is now widely accepted.

A wide character is of type **`wchar_t`**. A wide-character string is represented as a **`wchar_t[]`** array. You point to the array with a `wchar_t*` pointer.

You can represent any ASCII character as a wide character by prefixing the letter `L`. For example, `L'\0'` is the terminating wide (16-bit) null character.

You can represent any ASCII string literal as a wide-character string literal by prefixing the letter `L`. For example, `L"Hello"`.

Generally, wide characters use more space in memory than multibyte characters. But wide characters are faster to process. Only one locale can be represented at a time in multibyte encoding. All character sets in the world are represented simultaneously by the Unicode representation.

## See also

[Internationalization](./internationalization.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)
