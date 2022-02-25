---
description: "Learn more about: lowercase NMAKE function"
title: "lowercase NMAKE function"
ms.date: "2/23/2022"
helpviewer_keywords: ["lowercase NMAKE function", "NMAKE function, lowercase"]
monikerRange: '>=msvc-170'
---
# `lowercase` NMAKE function

Evaluates to a string where all characters have been converted to their lowercase equivalent.

## Syntax

```makefile
$(lowercase input)
```

### Parameters

*`input`*\
The string to convert.

## Return value

Returns *`input`*, but all characters have been converted to their lowercase equivalent.

## Remarks

This macro function is available starting in Visual Studio 2022 version 17.2, in NMAKE version 14.32 or later.

## Example

```makefile
$(lowercase Hello World!) # Evaluates to "hello world!"
```

## See also

[Macros and NMAKE](macros-and-nmake.md)\
[NMAKE functions by category](using-an-nmake-macro.md#functions-by-category)
