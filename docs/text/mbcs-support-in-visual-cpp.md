---
description: "Learn more about: MBCS Support in Visual C++"
title: "MBCS Support in Visual C++"
ms.date: "11/04/2016"
helpviewer_keywords: ["tools [C++], MBCS support", "Asian languages [C++]", "Code Editor [C++], MBCS support", "IME [C++]", "Chinese characters [C++]", "Input Method Editor [C++], MBCS", "resource editors [C++], MBCS support", "debugger [C++], MBCS support", "character sets [C++], multibyte", "Japanese characters [C++]", "multibyte characters [C++]", "Kanji character support [C++]", "NMAKE program, MBCS support", "double-byte character sets [C++]", "IME [C++], MBCS", "Input Method Editor [C++]", "MBCS [C++], enabling"]
ms.assetid: 6179f6b7-bc61-4a48-9267-fb7951223e38
---
# MBCS Support in Visual C++

When run on an MBCS-enabled version of Windows, the Visual C++ development system (including the integrated source code editor, debugger, and command line tools) is MBCS-enabled, with the exception of the memory window.

The memory window does not interpret bytes of data as MBCS characters, even though it can interpret them as ANSI or Unicode characters. ANSI characters are always 1 byte in size and Unicode characters are 2 bytes in size. With MBCS, characters can be 1 or 2 bytes in size and their interpretation depends on which code page is in use. Because of this, it is difficult for the memory window to reliably display MBCS characters. The memory window cannot know which byte is the start of a character. The developer can view the byte values in the memory window and look up the value in tables to determine the character representation. This is possible because the developer knows the starting address of a string based on the source code.

Visual C++ accepts double-byte characters wherever it is appropriate to do so. This includes path names and file names in dialog boxes and text entries in the Visual C++ resource editor (for example, static text in the dialog editor and static text entries in the icon editor). In addition, the preprocessor recognizes some double-byte directives — for example, file names in `#include` statements, and as arguments to the `code_seg` and `data_seg` pragmas. In the source code editor, double-byte characters in comments and string literals are accepted, although not in C/C++ language elements (such as variable names).

## <a name="_core_support_for_the_input_method_editor_.28.ime.29"></a> Support for the Input Method Editor (IME)

Applications written for East Asian markets that use MBCS (for example, Japan) normally support the Windows IME for entering both single- and double-byte characters. The Visual C++ development environment contains full support for the IME.

Japanese keyboards do not directly support Kanji characters. The IME converts a phonetic string, entered in one of the other Japanese alphabets (Romaji, Katakana, or Hiragana) into its possible Kanji representations. If there is ambiguity, you can select from several alternatives. When you have selected the intended Kanji character, the IME passes two `WM_CHAR` messages to the controlling application.

The IME, activated by the ALT+\` key combination, appears as a set of buttons (an indicator) and a conversion window. The application positions the window at the text insertion point. The application must handle `WM_MOVE` and `WM_SIZE` messages by repositioning the conversion window to conform to the new location or size of the target window.

If you want users of your application to have the ability to enter Kanji characters, the application must handle Windows IME messages. For more information about IME programming, see [Input Method Manager](/windows/win32/intl/input-method-manager).

## Visual C++ Debugger

The Visual C++ debugger provides the ability to set breakpoints on IME messages. In addition, the Memory window can display double-byte characters.

## Command-Line Tools

The Visual C++ command-line tools, including the compiler, NMAKE, and the resource compiler (RC.EXE), are MBCS-enabled. You can use the resource compiler's /c option to change the default code page when compiling your application's resources.

To change the default locale at source code compile time, use [#pragma setlocale](../preprocessor/setlocale.md).

## Graphical Tools

The Visual C++ Windows-based tools, such as Spy++ and the resource editing tools, fully support IME strings.

## See also

[Support for Multibyte Character Sets (MBCSs)](../text/support-for-multibyte-character-sets-mbcss.md)<br/>
[MBCS Programming Tips](../text/mbcs-programming-tips.md)
