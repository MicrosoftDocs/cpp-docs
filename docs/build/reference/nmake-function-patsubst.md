---
description: "Learn more about: patsubst, patsubsti NMAKE functions"
title: "patsubst, patsubsti NMAKE functions"
ms.date: "9/30/2021"
helpviewer_keywords: ["patsubst NMAKE function", "patsubsti NMAKE function", "NMAKE function, patsubst", "NMAKE function, patsubsti"]
monikerRange: '>=msvc-170'
---
# `patsubst`, `patsubsti` NMAKE functions

Evaluates to a list of items with each item that matches a pattern replaced by a substitution, and items that don't match kept as-is.

## Syntax

```makefile
$(patsubst pattern,replacement,input)
$(patsubsti pattern,replacement,input)
```

### Parameters

*`pattern`*\
The [pattern](using-an-nmake-macro.md#function-pattern-syntax) to search for.

*`replacement`*\
The [pattern](using-an-nmake-macro.md#function-pattern-syntax) to replace *`pattern`* with. If a wildcard is present in *`replacement`*, then it will be replaced with the text that the wildcard in *`pattern`* matched.

*`input`*\
The [list](using-an-nmake-macro.md#function-list-syntax) of items to be replaced or kept.

## Return value

Returns *`input`*, but each item that matches *`pattern`* is replaced by *`replacement`*. Items that don't match *`pattern`* are kept as-is.

## Remarks

`patsubsti` is the case-insensitive version of `patsubst`.

This macro function is available starting in Visual Studio 2022 version 17.1, in NMAKE version 14.31 or later.

## Example

```makefile
$(patsubst He%,_%_,Hello Hey Hi) # Evaluates to "_llo_ _y_ Hi"
# "He" matches "Hello" and "Hey", and so "llo" and "y" are matched by the wildcard
# and used to substitute the wildcard in the replacement. "Hi" is not matched and so is kept as-is

$(patsubst Hi,Bye,Hello Hey Hi) # Evaluates to "Hello Hey Bye" - No wildcard is required
$(patsubst %lo,Bye,Hello Hey Hi) # Evaluates to "Bye Hey Hi"
# A wildcard can be used in the pattern without a wildcard in the replacement

$(patsubst he%,_%_,Hello Hey Hi) # Evaluates to "Hello Hey Hi" - patsubst is case-sensitive, so no substitutions performed
$(patsubsti he%,_%_,Hello Hey Hi) # Evaluates to "_llo_ _y_ Hi" - patsubsti is case-insensitive

# patsubsti is commonly used to change the file extensions of a list of files
OBJ_FILES=$(patsubst %.c,%.obj,$(C_SOURCES)) $(patsubst %.cpp,%.obj,$(patsubst %.cxx,%.obj,$(CPP_SOURCES)))
```

## See also

[Macros and NMAKE](macros-and-nmake.md)\
[NMAKE functions by category](using-an-nmake-macro.md#functions-by-category)
