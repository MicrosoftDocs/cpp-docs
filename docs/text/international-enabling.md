---
description: "Learn more about: International Enabling"
title: "International Enabling"
ms.date: "11/04/2016"
helpviewer_keywords: ["globalization [C++], character sets", "strings [C++], international enabling", "localization [C++], character sets", "MBCS [C++], enabling", "Unicode [C++], enabling"]
ms.assetid: b077f4ca-5865-40ef-a46e-d9e4d686ef21
---
# International Enabling

Most traditional C and C++ code makes assumptions about character and string manipulation that do not work well for international applications. While both MFC and the run-time library support Unicode or MBCS, there is still work for you to do. To guide you, this section explains the meaning of "international enabling" in Visual C++:

- Both Unicode and MBCS are enabled by means of portable data types in MFC function parameter lists and return types. These types are conditionally defined in the appropriate ways, depending on whether your build defines the symbol `_UNICODE` or the symbol `_MBCS` (which means DBCS). Different variants of the MFC libraries are automatically linked with your application, depending on which of these two symbols your build defines.

- Class library code uses portable run-time functions and other means to ensure correct Unicode or MBCS behavior.

- You still must handle certain kinds of internationalization tasks in your code:

  - Use the same portable run-time functions that make MFC portable under either environment.

  - Make literal strings and characters portable under either environment, using the `_T` macro. For more information, see [Generic-Text Mappings in tchar.h](../text/generic-text-mappings-in-tchar-h.md).

  - Take precautions when parsing strings under MBCS. These precautions are not needed under Unicode. For more information, see [MBCS Programming Tips](../text/mbcs-programming-tips.md).

  - Take care if you mix ANSI (8-bit) and Unicode (16-bit) characters in your application. It is possible to use ANSI characters in some parts of your program and Unicode characters in others, but you cannot mix them in the same string.

  - Do not hard-code strings in your application. Instead, make them STRINGTABLE resources by adding them to the application's .rc file. Your application can then be localized without requiring source code changes or recompilation. For more information about STRINGTABLE resources, see [String Editor](../windows/string-editor.md).

> [!NOTE]
> European and MBCS character sets have some characters, such as accented letters, with character codes greater than 0x80. Because most code uses signed characters, these characters greater than 0x80 are sign-extended when converted to **`int`**. This is a problem for array indexing because the sign-extended characters, being negative, indexes outside the array. Languages that use MBCS, such as Japanese, are also unique. Because a character might consist of 1 or 2 bytes, you should always manipulate both bytes at the same time.

## See also

[Unicode and MBCS](../text/unicode-and-mbcs.md)<br/>
[Internationalization Strategies](../text/internationalization-strategies.md)
