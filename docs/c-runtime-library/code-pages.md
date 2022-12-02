---
title: "Code Pages"
description: "A description of code page support in the Microsoft C runtime."
ms.topic: "conceptual"
ms.date: "11/04/2016"
helpviewer_keywords: ["character sets [C++], code pages", "ANSI [C++], code pages", "system-default code page", "multibyte code pages [C++]", "localization [C++], code pages", "code pages [C++], types of", "locale code pages [C++]"]
ms.assetid: 4a26fc42-185a-4add-98bf-a7b314ae6186
---
# Code pages

A *code page* is a character set, which can include numbers, punctuation marks, and other glyphs. Different languages and locales may use different code pages. For example, ANSI code page 1252 is used for English and most European languages; OEM code page 932 is used for Japanese Kanji.

A code page can be represented in a table as a mapping of characters to single-byte or multibyte values. Many code pages share the ASCII character set for characters in the range 0x00 - 0x7F.

The Microsoft runtime library uses the following types of code pages:

- System-default ANSI code page. By default, at startup, the runtime system automatically sets the multibyte code page to the system-default ANSI code page, which is obtained from the operating system. The call:

    ```C
    setlocale ( LC_ALL, "" );
    ```

   also sets the locale to the system-default ANSI code page.

- Locale code page. The behavior of several run-time routines is dependent on the current locale setting, which includes the locale code page. (For more information, see [Locale](./locale.md).) By default, all locale-dependent routines in the Microsoft run-time library use the code page that corresponds to the "C" locale. At run time, you can change or query the locale code page in use with a call to [`setlocale`](./reference/setlocale-wsetlocale.md).

- Multibyte code page. The behavior of most of the multibyte-character routines in the run-time library depends on the current multibyte code page setting. By default, these routines use the system-default ANSI code page. At run-time you can query and change the multibyte code page with [`_getmbcp`](./reference/getmbcp.md) and [`_setmbcp`](./reference/setmbcp.md), respectively.

- The "C" locale is defined by ANSI to correspond to the locale in which C programs have traditionally executed. The code page for the "C" locale ("C" code page) corresponds to the ASCII character set. For example, in the "C" locale, `islower` returns true for the values 0x61 - 0x7A only. In another locale, `islower` may return `true` for these and other values, as defined by that locale.

## See also

[Internationalization](./internationalization.md)\
[Universal C runtime routines by category](./run-time-routines-by-category.md)
