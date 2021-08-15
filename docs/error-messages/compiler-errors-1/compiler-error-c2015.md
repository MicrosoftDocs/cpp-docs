---
description: "Learn more about: Compiler Error C2015"
title: "Compiler Error C2015"
ms.date: "11/04/2016"
f1_keywords: ["C2015"]
helpviewer_keywords: ["C2015"]
ms.assetid: 8f40af0a-3a5a-4d6a-8ed7-125966e6bfed
---
# Compiler Error C2015

too many characters in constant

A character constant contains more than two characters. The limit is one character for standard character constants and two characters for long character constants.

An escape sequence, such as \t, is converted to a single character.

## Examples

The following sample generates C2015:

```cpp
// C2015.cpp
// compile with: /c

char test1 = 'error';   // C2015
char test2 = 'e';   // OK
```

C2015 can also occur when using a Microsoft extension, character constants converted to integers.  The following sample generates C2015:

```cpp
// C2015b.cpp
#include <stdio.h>

int main()
{
    int a = 'abcde';   // C2015

    int b = 'a';   // 'a' = ascii 0x61
    printf_s("%x\n", b);
}
```
