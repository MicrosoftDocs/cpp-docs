---
description: "Learn more about: filter, filteri NMAKE functions"
title: "filter, filteri NMAKE functions"
ms.date: "9/30/2021"
helpviewer_keywords: ["filter NMAKE function", "filteri NMAKE function", "NMAKE function, filter", "NMAKE function, filteri"]
monikerRange: '>=msvc-170'
---
# `filter`, `filteri` NMAKE functions

Evaluates to a list of items that matched at least one pattern.

## Syntax

```makefile
$(filter filters,input)
$(filteri filters,input)
```

### Parameters

*`filters`*\
A [list](using-an-nmake-macro.md#function-list-syntax) of one or more [patterns](using-an-nmake-macro.md#function-pattern-syntax) to filter by.

*`input`*\
The [list](using-an-nmake-macro.md#function-list-syntax) to be filtered.

## Return value

A list of all of the items in *`input`* that match at least one pattern in *`filters`*.

## Remarks

`filteri` is the case-insensitive version of `filter`.

This macro function is available starting in Visual Studio 2022, in NMAKE version 14.30 or later.

## Example

```makefile
$(filter He%,Hello Hey Hi) # Evaluates to "Hello Hey" - "Hi" doesn't match the filter
$(filter %y %i,Hello Hey Hi) # Evaluates to "Hey Hi" - items are kept if they match any filter, "Hello" is dropped as it doesn't match any
$(filter Not%Found,Hello Hey Hi) # Evaluates to "" - none of the items match any filters

$(filter he%,Hello Hey Hi) # Evaluates to "" - filter is case-sensitive
$(filteri he%,Hello Hey Hi) # Evaluates to "Hello Hey" - filteri is case-insensitive

# filteri is commonly used to filter a list of files by their extensions
CPP_SOURCES=$(filteri %.cpp %.cxx,$(SOURCES))
C_SOURCES=$(filteri %.c,$(SOURCES))
```

## See also

[Macros and NMAKE](macros-and-nmake.md)\
[NMAKE functions by category](using-an-nmake-macro.md#functions-by-category)\
[`filterout`, `filterouti`](nmake-function-filterout.md)
