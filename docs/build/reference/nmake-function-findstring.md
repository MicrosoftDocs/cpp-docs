---
description: "Learn more about: findstring, findstringi NMAKE functions"
title: "findstring, findstringi NMAKE functions"
ms.date: "9/30/2021"
helpviewer_keywords: ["findstring NMAKE function", "findstringi NMAKE function", "NMAKE function, findstring", "NMAKE function, findstringi"]
monikerRange: '>=msvc-170'
---
# `findstring`, `findstringi` NMAKE functions

Evaluates to the searched-for string if it's found within another string.

## Syntax

```makefile
$(findstring searchFor,input)
$(findstringi searchFor,input)
```

### Parameters

*`searchFor`*\
The string to search for.

*`input`*\
The string to search in.

## Return value

If *`searchFor`* is found within *`input`*, then the function returns *`searchFor`*, otherwise it returns null.

## Remarks

`findstringi` is the case-insensitive version of `findstring`.

This macro function is available starting in Visual Studio 2022, in NMAKE version 14.30 or later.

## Example

```makefile
$(findstring Hello,Hello World!) # Evaluates to "Hello"
$(findstring Hey,Hello World!) # Evaluates to ""

$(findstring hello,Hello World!) # Evaluates to "" - findstring is case-sensitive
$(findstringi hello,Hello World!) # Evaluates to "hello" - findstringi is case-insensitive
```

## See also

[Macros and NMAKE](macros-and-nmake.md)\
[NMAKE functions by category](using-an-nmake-macro.md#functions-by-category)
