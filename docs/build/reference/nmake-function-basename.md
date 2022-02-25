---
description: "Learn more about: basename NMAKE function"
title: "basename NMAKE function"
ms.date: "9/30/2021"
helpviewer_keywords: ["basename NMAKE function", "NMAKE function, basename"]
monikerRange: '>=msvc-170'
---
# `basename` NMAKE function

Gets the base name for each item in a list.

## Syntax

```makefile
$(basename input)
```

### Parameters

*`input`*\
The [list](using-an-nmake-macro.md#function-list-syntax) of file paths to convert.

## Return value

A [list](using-an-nmake-macro.md#function-list-syntax) with each of the items from *`input`* converted to their base name (that is, with their extensions removed).

## Remarks

`basename` doesn't have any maximum path limitations.

The `basename` function is equivalent to using the [`R` modifier in a filename macro](special-nmake-macros.md#filename-macros).

This macro function is available starting in Visual Studio 2022 version 17.1, in NMAKE version 14.31 or later.

## Example

```makefile
$(basename c:\temp\file.txt) # Evaluates to "c:\temp\file"
$(basename c:\temp\ c:\file) # Evaluates to "c:\temp\ c:\file" - Directories and files without extensions are left as-is
$(basename c:\src\.gitignore) # Evaluates to "c:\src\" - Dot files are considered to be extensions and so are removed
```

## See also

[Macros and NMAKE](macros-and-nmake.md)\
[NMAKE functions by category](using-an-nmake-macro.md#functions-by-category)
