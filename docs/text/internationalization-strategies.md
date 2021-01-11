---
description: "Learn more about: Internationalization Strategies"
title: "Internationalization Strategies"
ms.date: "11/04/2016"
helpviewer_keywords: ["globalization [C++], character sets", "language-portable code [C++]", "MBCS [C++], internationalization strategies", "Windows API [C++], international programming strategies", "Win32 [C++], international programming strategies", "Unicode [C++], globalizing applications", "character sets [C++], international programming strategies", "localization [C++], character sets"]
ms.assetid: b09d9854-0709-4b9a-a00c-b0b8bc4199b1
---
# Internationalization Strategies

Depending on your target operating systems and markets, you have several internationalization strategies:

- Your application uses Unicode.

   You use Unicode-specific functionality and all characters are 16 bits wide (although you can use ANSI characters in some parts of your program for special purposes). The C run-time library provides functions, macros, and data types for Unicode-only programming. MFC is fully Unicode-enabled.

- Your application uses MBCS and can be run on any Win32 platform.

   You use MBCS-specific functionality. Strings can contain single-byte characters, double-byte characters, or both. The C run-time library provides functions, macros, and data types for MBCS-only programming. MFC is fully MBCS-enabled.

- The source code for your application is written for complete portability — by recompiling with the symbol `_UNICODE` or the symbol `_MBCS` defined, you can produce versions that use either. For more information, see [Generic-Text Mappings in tchar.h](../text/generic-text-mappings-in-tchar-h.md).

   You use fully portable C run-time functions, macros, and data types. MFC's flexibility supports any of these strategies.

The remainder of these topics focus on writing completely portable code that you can build as Unicode or as MBCS.

## See also

[Unicode and MBCS](../text/unicode-and-mbcs.md)<br/>
[Locales and Code Pages](../text/locales-and-code-pages.md)
