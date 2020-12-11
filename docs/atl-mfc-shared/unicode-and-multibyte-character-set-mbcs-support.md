---
description: "Learn more about: Unicode and Multibyte Character Set (MBCS) Support"
title: "Unicode and Multibyte Character Set (MBCS) Support"
ms.date: "01/09/2017"
helpviewer_keywords: ["MFC [C++], character set support", "MBCS [C++], strings and MFC support", "strings [C++], MBCS support in MFC", "character sets [C++], multibyte", "Unicode [C++], MFC strings", "Unicode [C++], string objects", "strings [C++], Unicode", "strings [C++], character set support"]
---
# Unicode and Multibyte Character Set (MBCS) Support

Some languages, for example, Japanese and Chinese, have large character sets. To support programming for these markets, the Microsoft Foundation Class Library (MFC) enables two different approaches to handling large character sets:

- [Unicode](#mfc-support-for-unicode-strings), **`wchar_t`** based wide-characters and strings encoded as UTF-16.

- [Multibyte Character Sets (MBCS)](#mfc-support-for-mbcs-strings), **`char`** based single or double-byte characters and strings encoded in a locale-specific character set.

Microsoft has recommended the MFC Unicode libraries for all new development, and the MBCS libraries were deprecated in Visual Studio 2013 and Visual Studio 2015. This is no longer the case. The MBCS deprecation warnings have been removed in Visual Studio 2017.

## MFC Support for Unicode Strings

The entire MFC class library is conditionally enabled for Unicode characters and strings stored in wide characters as UTF-16. In particular, class [CString](../atl-mfc-shared/reference/cstringt-class.md) is Unicode-enabled.

These library, debugger, and DLL files are used to support Unicode in MFC:

:::row:::
   :::column span="":::
      MFC*version*U.LIB\
      MFC*version*UD.LIB\
      MFCM*version*U.LIB\
      MFCM*version*UD.LIB\
      MFCS*version*U.LIB\
      MFCS*version*UD.LIB\
      UAFXCW.LIB\
      UAFXCWD.LIB
   :::column-end:::
   :::column span="":::
      MFC*version*U.PDB\
      MFC*version*UD.PDB\
      MFCM*version*U.PDB\
      MFCM*version*UD.PDB\
      MFCS*version*U.PDB\
      MFCS*version*UD.PDB\
      UAFXCW.PDB\
      UAFXCWD.PDB
   :::column-end:::
   :::column span="":::
      MFC*version*U.DLL\
      MFC*version*UD.DLL\
      MFCM*version*U.DLL\
      MFCM*version*UD.DLL
   :::column-end:::
:::row-end:::

(*version* represents the version number of the file; for example, '140' means version 14.0.)

`CString` is based on the TCHAR data type. If the symbol _UNICODE is defined for a build of your program, TCHAR is defined as type **`wchar_t`**, a 16-bit character encoding type. Otherwise, TCHAR is defined as **`char`**, the normal 8-bit character encoding. Therefore, under Unicode, a `CString` is composed of 16-bit characters. Without Unicode, it is composed of characters of type **`char`**.

To complete Unicode programming of your application, you must also:

- Use the _T macro to conditionally code literal strings to be portable to Unicode.

- When you pass strings, pay attention to whether function arguments require a length in characters or a length in bytes. The difference is important if you are using Unicode strings.

- Use portable versions of the C run-time string-handling functions.

- Use the following data types for characters and character pointers:

  - Use TCHAR where you would use **`char`**.

  - Use LPTSTR where you would use **`char`**<strong>\*</strong>.

  - Use LPCTSTR where you would use **`const char`**<strong>\*</strong>. `CString` provides the operator LPCTSTR to convert between `CString` and LPCTSTR.

`CString` also supplies Unicode-aware constructors, assignment operators, and comparison operators.

The [Run-Time Library Reference](../c-runtime-library/c-run-time-library-reference.md) defines portable versions of all its string-handling functions. For more information, see the category [Internationalization](../c-runtime-library/internationalization.md).

## MFC Support for MBCS Strings

The class library is also enabled for multibyte character sets, but only for double-byte character sets (DBCS).

In a multibyte character set, a character can be one or two bytes wide. If it is two bytes wide, its first byte is a special "lead byte" that is chosen from a particular range, depending on which code page is in use. Taken together, the lead and "trail bytes" specify a unique character encoding.

If the symbol _MBCS is defined for a build of your program, type TCHAR, on which `CString` is based, maps to **`char`**. It is up to you to determine which bytes in a `CString` are lead bytes and which are trail bytes. The C run-time library supplies functions to help you determine this.

Under DBCS, a given string can contain all single-byte ANSI characters, all double-byte characters, or a combination of the two. These possibilities require special care in parsing strings. This includes `CString` objects.

> [!NOTE]
> Unicode string serialization in MFC can read both Unicode and MBCS strings regardless of which version of the application that you are running. Your data files are portable between Unicode and MBCS versions of your program.

`CString` member functions use special "generic text" versions of the C run-time functions they call, or they use Unicode-aware functions. Therefore, for example, if a `CString` function would typically call `strcmp`, it calls the corresponding generic-text function `_tcscmp` instead. Depending on how the symbols _MBCS and _UNICODE are defined, `_tcscmp` maps as follows:

|Symbols|Function|
|-|-|
|_MBCS defined|`_mbscmp`|
|_UNICODE defined|`wcscmp`|
|Neither symbol defined|`strcmp`|

> [!NOTE]
> The symbols _MBCS and _UNICODE are mutually exclusive.

Generic-text function mappings for all of the run-time string-handling routines are discussed in [C Run-Time Library Reference](../c-runtime-library/c-run-time-library-reference.md). For a list, see [Internationalization](../c-runtime-library/internationalization.md).

Similarly, `CString` methods are implemented by using generic data type mappings. To enable both MBCS and Unicode, MFC uses TCHAR for **`char`** or **`wchar_t`**, LPTSTR for **`char`**<strong>\*</strong> or `wchar_t*`, and LPCTSTR for **const char**<strong>\*</strong> or `const wchar_t*`. These ensure the correct mappings for either MBCS or Unicode.

## See also

[Strings (ATL/MFC)](../atl-mfc-shared/strings-atl-mfc.md)<br/>
[String Manipulation](../c-runtime-library/string-manipulation-crt.md)
