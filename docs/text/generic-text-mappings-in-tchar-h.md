---
description: "Learn more about: Generic-Text Mappings in tchar.h"
title: "Generic-Text Mappings in tchar.h"
ms.date: "11/04/2016"
helpviewer_keywords: ["mapping generic-text", "generic-text mappings [C++]", "character sets [C++], generic-text mappings", "Unicode [C++], generic-text mappings", "MBCS [C++], generic-text mappings", "TCHAR.H data types, mapping", "mappings [C++], TCHAR.H"]
ms.assetid: 01e1bb74-5a01-4093-8720-68b6c1fdda80
---
# Generic-Text Mappings in tchar.h

To simplify the transporting of code for international use, the Microsoft run-time library provides Microsoft-specific generic-text mappings for many data types, routines, and other objects. You can use these mappings, which are defined in tchar.h, to write generic code that can be compiled for single-byte, multibyte, or Unicode character sets, depending on a manifest constant that you define by using a `#define` statement. Generic-text mappings are Microsoft extensions that are not ANSI compatible.

By using the tchar.h, you can build single-byte, Multibyte Character Set (MBCS), and Unicode applications from the same sources. tchar.h defines macros (which have the prefix `_tcs`) that, with the correct preprocessor definitions, map to `str`, `_mbs`, or `wcs` functions, as appropriate. To build MBCS, define the symbol `_MBCS`. To build Unicode, define the symbol `_UNICODE`. To build a single-byte application, define neither (the default). By default, `_UNICODE` is defined for MFC applications.

The `_TCHAR` data type is defined conditionally in tchar.h. If the symbol `_UNICODE` is defined for your build, `_TCHAR` is defined as **`wchar_t`**; otherwise, for single-byte and MBCS builds, it is defined as **`char`**. (**`wchar_t`**, the basic Unicode wide-character data type, is the 16-bit counterpart to an 8-bit **`signed char`**.) For international applications, use the `_tcs` family of functions, which operate in `_TCHAR` units, not bytes. For example, `_tcsncpy` copies `n` `_TCHARs`, not `n` bytes.

Because some Single Byte Character Set (SBCS) string-handling functions take (signed) **`char*`** parameters, a type mismatch compiler warning results when `_MBCS` is defined. There are three ways to avoid this warning:

1. Use the type-safe inline function thunks in tchar.h. This is the default behavior.

1. Use the direct macros in tchar.h by defining `_MB_MAP_DIRECT` on the command line. If you do this, you must manually match types. This is the fastest method, but is not type-safe.

1. Use the type-safe statically linked library function thunks in tchar.h. To do so, define the constant `_NO_INLINING` on the command line. This is the slowest method, but the most type-safe.

### Preprocessor Directives for Generic-Text Mappings

|# define|Compiled version|Example|
|---------------|----------------------|-------------|
|`_UNICODE`|Unicode (wide-character)|`_tcsrev` maps to `_wcsrev`|
|`_MBCS`|Multibyte-character|`_tcsrev` maps to `_mbsrev`|
|None (the default has neither `_UNICODE` nor `_MBCS` defined)|SBCS (ASCII)|`_tcsrev` maps to `strrev`|

For example, the generic-text function `_tcsrev`, which is defined in tchar.h, maps to `_mbsrev` if you defined `_MBCS` in your program, or to `_wcsrev` if you defined `_UNICODE`. Otherwise, `_tcsrev` maps to `strrev`. Other data type mappings are provided in tchar.h for programming convenience, but `_TCHAR` is the most useful.

### Generic-Text Data Type Mappings

|Generic-Text<br /> Data Type Name|_UNICODE &<br /> _MBCS Not Defined|_MBCS<br /> Defined|_UNICODE<br /> Defined|
|--------------------------------------|----------------------------------------|------------------------|---------------------------|
|`_TCHAR`|**`char`**|**`char`**|**`wchar_t`**|
|`_TINT`|**`int`**|**`unsigned int`**|`wint_t`|
|`_TSCHAR`|**`signed char`**|**`signed char`**|**`wchar_t`**|
|`_TUCHAR`|**`unsigned char`**|**`unsigned char`**|**`wchar_t`**|
|`_TXCHAR`|**`char`**|**`unsigned char`**|**`wchar_t`**|
|`_T` or `_TEXT`|No effect (removed by preprocessor)|No effect (removed by preprocessor)|`L` (converts the following character or string to its Unicode counterpart)|

For a list of generic-text mappings of routines, variables, and other objects, see [Generic-Text Mappings](../c-runtime-library/generic-text-mappings.md) in the Run-Time Library Reference.

> [!NOTE]
> Do not use the `str` family of functions with Unicode strings, which are likely to contain embedded null bytes. Similarly, do not use the `wcs` family of functions with MBCS (or SBCS) strings.

The following code fragments illustrate the use of `_TCHAR` and `_tcsrev` for mapping to the MBCS, Unicode, and SBCS models.

```cpp
_TCHAR *RetVal, *szString;
RetVal = _tcsrev(szString);
```

If `_MBCS` has been defined, the preprocessor maps this fragment to this code:

```cpp
char *RetVal, *szString;
RetVal = _mbsrev(szString);
```

If `_UNICODE` has been defined, the preprocessor maps this fragment to this code:

```cpp
wchar_t *RetVal, *szString;
RetVal = _wcsrev(szString);
```

If neither `_MBCS` nor `_UNICODE` have been defined, the preprocessor maps the fragment to single-byte ASCII code, as follows:

```cpp
char *RetVal, *szString;
RetVal = strrev(szString);
```

Therefore, you can write, maintain, and compile a single-source code file to run with routines that are specific to any of the three kinds of character sets.

## See also

[Text and Strings](../text/text-and-strings-in-visual-cpp.md)<br/>
[Using TCHAR.H Data Types with _MBCS Code](../text/using-tchar-h-data-types-with-mbcs-code.md)
