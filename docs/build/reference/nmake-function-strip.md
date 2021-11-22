---
description: "Learn more about: strip NMAKE function"
title: "strip NMAKE function"
ms.date: "9/30/2021"
helpviewer_keywords: ["strip NMAKE function", "NMAKE function, strip"]
monikerRange: '>=msvc-170'
---
# `strip` NMAKE function

Cleans up whitespace in and around a list of items.

## Syntax

```makefile
$(strip input)
```

### Parameters

*`input`*\
The [list](using-an-nmake-macro.md#function-list-syntax) to be cleaned.

## Return value

A [list](using-an-nmake-macro.md#function-list-syntax) of the exact same items as *`input`*.

## Remarks

NMAKE outputs a [list](using-an-nmake-macro.md#function-list-syntax) that has a single space between each item and no leading or trailing whitespace. `strip` doesn't change any item within a list, but it does ensure that the returned list is in this canonical form. The canonical form can be useful for later operations that operate on strings instead of lists.

This macro function is available starting in Visual Studio 2022, in NMAKE version 14.30 or later.

## Example

```makefile
$(strip a   b   c d    ) # Evaluates to "a b c d"

# strip is useful to get a canonical form of a list, which can then be transformed into a different format
SINGLESPACE=$(subst ',,' ') # Use "subst" since a normal assignment trims trailing whitespace.
INCLUDE_PATH=$(subst $(SINGLESPACE),;,$(strip $(INCLUDES)))
```

## See also

[Macros and NMAKE](macros-and-nmake.md)\
[NMAKE functions by category](using-an-nmake-macro.md#functions-by-category)
