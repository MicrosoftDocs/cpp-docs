---
description: "Learn more about: filterout, filterouti NMAKE functions"
title: "filterout, filterouti NMAKE functions"
ms.date: "9/30/2021"
helpviewer_keywords: ["filterout NMAKE function", "filterouti NMAKE function", "NMAKE function, filterout", "NMAKE function, filterouti"]
monikerRange: '>=msvc-170'
---
# `filterout`, `filterouti` NMAKE functions

Evaluates to a list of items that don't match any patterns.

## Syntax

```makefile
$(filterout filters,input)
$(filterouti filters,input)
```

### Parameters

*`filters`*\
A [list](using-an-nmake-macro.md#function-list-syntax) of one or more [patterns](using-an-nmake-macro.md#function-pattern-syntax) to filter by.

*`input`*\
The [list](using-an-nmake-macro.md#function-list-syntax) to be filtered.

## Return value

A [list](using-an-nmake-macro.md#function-list-syntax) of all of the items in *`input`* that don't match any patterns in *`filters`*.

## Remarks

`filterouti` is the case-insensitive version of `filterout`.

This macro function is available starting in Visual Studio 2022, in NMAKE version 14.30 or later.

## Example

```makefile
$(filterout He%,Hello Hey Hi) # Evaluates to "Hi" - "Hello" and "Hey" match the filter
$(filterout %y %i,Hello Hey Hi) # Evaluates to "Hello" - items are kept if they don't match any filters, "Hey" and "Hi" each match one filter
$(filterout H%,Hello Hey Hi) # Evaluates to "" - each of the items matched the filter

$(filterout he%,Hello Hey Hi) # Evaluates to "Hello Hey Hi" - filterout is case-sensitive
$(filterouti he%,Hello Hey Hi) # Evaluates to "Hi" - filterouti is case-insensitive
```

## See also

[Macros and NMAKE](macros-and-nmake.md)\
[NMAKE functions by category](using-an-nmake-macro.md#functions-by-category)\
[`filter`, `filteri`](nmake-function-filter.md)
