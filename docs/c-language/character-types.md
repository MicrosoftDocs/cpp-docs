---
description: "Learn more about: Character Types"
title: "Character Types"
ms.date: "11/04/2016"
helpviewer_keywords: ["character data types [C]", "types [C], character"]
ms.assetid: d3ca8cda-c0d7-43af-9472-697e8ef015ce
---
# Character Types

An integer character constant not preceded by the letter **L** has type **`int`**. The value of an integer character constant containing a single character is the numerical value of the character interpreted as an integer. For example, the numerical value of the character `a` is 97 in decimal and 61 in hexadecimal.

Syntactically, a "wide-character constant" is a character constant prefixed by the letter **L**. A wide-character constant has type **`wchar_t`**, an integer type defined in the STDDEF.H header file. For example:

```
char    schar =  'x';   /* A character constant          */
wchar_t wchar = L'x';   /* A wide-character constant for
                            the same character           */
```

Wide-character constants are 16 bits wide and specify members of the extended execution character set. They allow you to express characters in alphabets that are too large to be represented by type **`char`**. See [Multibyte and Wide Characters](../c-language/multibyte-and-wide-characters.md) for more information about wide characters.

## See also

[C Character Constants](../c-language/c-character-constants.md)
