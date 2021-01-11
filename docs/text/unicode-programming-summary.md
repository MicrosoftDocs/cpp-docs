---
description: "Learn more about: Unicode Programming Summary"
title: "Unicode Programming Summary"
ms.date: "11/04/2016"
helpviewer_keywords: ["Unicode [C++], programming with", "Unicode [C++], MFC and C run-time functions"]
ms.assetid: a4c9770f-6c9c-447c-996b-980920288bed
---
# Unicode Programming Summary

To take advantage of the MFC and C run-time support for Unicode, you need to:

- Define `_UNICODE`.

   Define the symbol `_UNICODE` before you build your program.

- Specify entry point.

   On the **Advanced** page of the **Linker** folder in the project's [Property Pages](../build/reference/property-pages-visual-cpp.md) dialog box, set the **Entry Point** symbol to `wWinMainCRTStartup`.

- Use portable run-time functions and types.

   Use the proper C run-time functions for Unicode string handling. You can use the `wcs` family of functions, but you might prefer the fully portable (internationally enabled) `_TCHAR` macros. These macros are all prefixed with `_tcs`; they substitute, one for one, for the `str` family of functions. These functions are described in detail in the [Internationalization](../c-runtime-library/internationalization.md) section of the *Run-Time Library Reference*. For more information, see [Generic-Text Mappings in tchar.h](../text/generic-text-mappings-in-tchar-h.md).

   Use `_TCHAR` and the related portable data types described in [Support for Unicode](../text/support-for-unicode.md).

- Handle literal strings properly.

   The Visual C++ compiler interprets a literal string coded as:

    ```cpp
    L"this is a literal string"
    ```

   to mean a string of Unicode characters. You can use the same prefix for literal characters. Use the `_T` macro to code literal strings generically, so they compile as Unicode strings under Unicode or as ANSI strings (including MBCS) without Unicode. For example, instead of:

    ```cpp
    pWnd->SetWindowText( "Hello" );
    ```

   use:

    ```cpp
    pWnd->SetWindowText( _T("Hello") );
    ```

   With `_UNICODE` defined, `_T` translates the literal string to the L-prefixed form; otherwise, `_T` translates the string without the L prefix.

    > [!TIP]
    >  The `_T` macro is identical to the `_TEXT` macro.

- Be careful passing string lengths to functions.

   Some functions want the number of characters in a string; others want the number of bytes. For example, if `_UNICODE` is defined, the following call to a `CArchive` object will not work (`str` is a `CString`):

    ```cpp
    archive.Write( str, str.GetLength( ) );    // invalid
    ```

   In a Unicode application, the length gives you the number of characters but not the correct number of bytes, because each character is 2 bytes wide. Instead, you must use:

    ```cpp
    archive.Write( str, str.GetLength( ) * sizeof( _TCHAR ) );    // valid
    ```

   which specifies the correct number of bytes to write.

   However, MFC member functions that are character-oriented, rather than byte-oriented, work without this extra coding:

    ```cpp
    pDC->TextOut( str, str.GetLength( ) );
    ```

   `CDC::TextOut` takes a number of characters, not a number of bytes.

- Use [fopen_s, _wfopen_s](../c-runtime-library/reference/fopen-s-wfopen-s.md) to open Unicode files.

To summarize, MFC and the run-time library provide the following support for Unicode programming:

- Except for database class member functions, all MFC functions are Unicode-enabled, including `CString`. `CString` also provides Unicode/ANSI conversion functions.

- The run-time library supplies Unicode versions of all string-handling functions. (The run-time library also supplies portable versions suitable for Unicode or for MBCS. These are the `_tcs` macros.)

- tchar.h supplies portable data types and the `_T` macro for translating literal strings and characters. For more information, see [Generic-Text Mappings in tchar.h](../text/generic-text-mappings-in-tchar-h.md).

- The run-time library provides a wide-character version of `main`. Use `wmain` to make your application Unicode-aware.

## See also

[Support for Unicode](../text/support-for-unicode.md)
