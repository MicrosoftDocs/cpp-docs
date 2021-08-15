---
description: "Learn more about: Type for String Literals"
title: "Type for String Literals"
ms.date: "11/04/2016"
helpviewer_keywords: ["string literals, type", "types [C], string literals"]
ms.assetid: f50a28af-20c1-4440-bdc6-564c86a309c8
---
# Type for String Literals

String literals have type array of **`char`** (that is, **char[ ]**). (Wide-character strings have type array of **`wchar_t`** (that is, **wchar_t[ ]**).) This means that a string is an array with elements of type **`char`**. The number of elements in the array is equal to the number of characters in the string plus one for the terminating null character.

## See also

[C String Literals](../c-language/c-string-literals.md)
