---
description: "Learn more about: subst, substi NMAKE functions"
title: "subst, substi NMAKE functions"
ms.date: "9/30/2021"
helpviewer_keywords: ["subst NMAKE function", "substi NMAKE function", "NMAKE function, subst", "NMAKE function, substi"]
monikerRange: '>=msvc-170'
---
# `subst`, `substi` NMAKE functions

Evaluates to a string where all instances of one string have been replaced with another.

## Syntax

```makefile
$(subst oldString,newString,input)
$(substi oldString,newString,input)
```

### Parameters

*`oldString`*\
The string to replace.

*`newString`*\
The string that replaces *`oldString`*. This argument can be null.

*`input`*\
The string to search.

## Return value

Returns *`input`*, but all instances of *`oldString`* are replaced by *`newString`*. If *`newString`* is null, then all instances of *`oldString`* are removed.

## Remarks

`substi` is the case-insensitive version of `subst`.

This macro function is available starting in Visual Studio 2022, in NMAKE version 14.30 or later.

## Example

```makefile
$(subst Hello,Hey,Hello World!) # Evaluates to "Hey World!"
$(subst ed,ing,red ring mended) # Evaluates to "ring ring mending"
$(subst Hello ,,Hello World!) # Evaluates to "World!"

$(subst hello,Hey,Hello World!) # Evaluates to "Hello World!" - subst is case-sensitive, so no substitution performed
$(substi hello,Hey,Hello World!) # Evaluates to "Hey World!" - substi is case-insensitive
```

## See also

[Macros and NMAKE](macros-and-nmake.md)\
[NMAKE functions by category](using-an-nmake-macro.md#functions-by-category)
