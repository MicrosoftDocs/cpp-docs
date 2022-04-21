---
description: "Learn more about: abspath NMAKE function"
title: "abspath NMAKE function"
ms.date: "9/30/2021"
helpviewer_keywords: ["abspath NMAKE function", "NMAKE function, abspath"]
monikerRange: '>=msvc-170'
---
# `abspath` NMAKE function

Gets the absolute path for each item in a list.

## Syntax

```makefile
$(abspath input)
```

### Parameters

*`input`*\
The [list](using-an-nmake-macro.md#function-list-syntax) of file paths to convert.

## Return value

A [list](using-an-nmake-macro.md#function-list-syntax) with each of the items from *`input`* converted to their absolute form.

## Remarks

`abspath` supports extended-length paths, either by using the `\\?\` prefix, or when long paths are enabled. For more information about long paths, see [Maximum Path Length Limitation](/windows/win32/fileio/maximum-file-path-limitation).

This macro function is available starting in Visual Studio 2022 version 17.1, in NMAKE version 14.31 or later.

## Example

```makefile
$(abspath relative\path\file.c) # If run from "c:\temp", evaluates to "c:\temp\relative\path\file.c"
$(abspath c:\temp\..\file1.cpp c:\\temp\/dir//) # Evaluates to "c:\file1.cpp c:\temp\dir\". Follows path traversals and normalizes directory separators.

# abspath can be combined with filter to find which items exist within a directory tree
TEMP_SOURCES=$(filteri c:\temp\\%,$(abspath $(SOURCES)))
```

## See also

[Macros and NMAKE](macros-and-nmake.md)\
[NMAKE functions by category](using-an-nmake-macro.md#functions-by-category)
