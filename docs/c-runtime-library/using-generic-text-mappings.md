---
title: "Using Generic-Text Mappings"
description: "An introduction to Microsoft-specific mappings for data types, routines, and other objects in the C runtime."
ms.topic: "conceptual"
ms.date: "11/04/2016"
f1_keywords: ["_UNICODE"]
helpviewer_keywords: ["_TXCHAR type", "TINT type", "_TCHAR type", "TSCHAR type", "TEXT type", "TCHAR type", "TCHAR.H data types, mappings defined in", "generic-text data types", "_TINT type", "TUCHAR type", "_UNICODE constant", "TXCHAR type", "generic-text mappings", "_TSCHAR type", "T type", "mappings, generic-text", "_TUCHAR type", "MBCS data type", "_MBCS data type", "_TEXT type", "UNICODE constant", "_T type"]
ms.assetid: 2848121c-e51f-4b9b-a2e6-833ece4b0cb3
---
# Using generic-text mappings

**Microsoft Specific**

To simplify code development for various international markets, the Microsoft run-time library provides Microsoft-specific "generic-text" mappings for many data types, routines, and other objects. These mappings are defined in TCHAR.H. You can use these name mappings to write generic code that can be compiled for any of the three kinds of character sets: ASCII (SBCS), MBCS, or Unicode, depending on a manifest constant you define using a `#define` statement. Generic-text mappings are Microsoft extensions that aren't ANSI compatible.

### Preprocessor directives for generic-text mappings

| `#define` | Compiled version | Example |
|---|---|---|
| `_UNICODE` | Unicode (wide-character) | `_tcsrev` maps to `_wcsrev` |
| `_MBCS` | Multibyte-character | `_tcsrev` maps to `_mbsrev` |
| None (the default: both `_UNICODE` and `_MBCS` not defined) | SBCS (ASCII) | `_tcsrev` maps to `strrev` |

For example, the generic-text function `_tcsrev`, defined in TCHAR.H, maps to `mbsrev` if `MBCS` has been defined in your program, or to `_wcsrev` if `_UNICODE` has been defined. Otherwise `_tcsrev` maps to `strrev`.

The generic-text data type `_TCHAR`, also defined in TCHAR.H, maps to type **`char`** if `_MBCS` is defined, to type **`wchar_t`** if `_UNICODE` is defined, and to type **`char`** if neither constant is defined. Other data type mappings are provided in TCHAR.H for programming convenience, but `_TCHAR` is the type that is most useful.

### Generic-Text Data Type Mappings

| Generic-text data type name | SBCS (_UNICODE, _MBCS not defined) | _MBCS defined | _UNICODE defined |
|---|---|---|---|
| `_TCHAR` | **`char`** | **`char`** | **`wchar_t`** |
| `_TINT` | **`int`** | **`int`** | `wint_t` |
| `_TSCHAR` | **`signed char`** | **`signed char`** | **`wchar_t`** |
| `_TUCHAR` | **`unsigned char`** | **`unsigned char`** | **`wchar_t`** |
| `_TXCHAR` | **`char`** | **`unsigned char`** | **`wchar_t`** |
| `_T` or `_TEXT` | No effect (removed by preprocessor) | No effect (removed by preprocessor) | `L` (converts following character or string to its Unicode counterpart) |

For a complete list of generic-text mappings of routines, variables, and other objects, see [Generic-text mappings](./generic-text-mappings.md).

The following code fragments illustrate the use of `_TCHAR` and `_tcsrev` for mapping to the MBCS, Unicode, and SBCS models.

```C
_TCHAR *RetVal, *szString;
RetVal = _tcsrev(szString);
```

If `MBCS` has been defined, the preprocessor maps the preceding fragment to the following code:

```C
char *RetVal, *szString;
RetVal = _mbsrev(szString);
```

If `_UNICODE` has been defined, the preprocessor maps the same fragment to the following code:

```C
wchar_t *RetVal, *szString;
RetVal = _wcsrev(szString);
```

If both `_MBCS` and `_UNICODE` haven't been defined, the preprocessor maps the fragment to single-byte ASCII code, as follows:

```C
char *RetVal, *szString;
RetVal = strrev(szString);
```

These macros let you write, maintain, and compile a single source code file using routines specific to all three kinds of character sets.

**END Microsoft Specific**

## See also

[Generic-text mappings](./generic-text-mappings.md)\
[Data type mappings](./data-type-mappings.md)\
[Constant and global variable mappings](./constant-and-global-variable-mappings.md)\
[Routine mappings](./routine-mappings.md)\
[A sample generic-text program](./a-sample-generic-text-program.md)
