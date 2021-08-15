---
description: "Learn more about: Compiler Error C2001"
title: "Compiler Error C2001"
ms.date: "11/04/2016"
f1_keywords: ["C2001"]
helpviewer_keywords: ["C2001"]
ms.assetid: 0c3a7821-d8e5-4398-ab5a-4116d46e8dda
---
# Compiler Error C2001

newline in constant

A string constant cannot be continued on a second line unless you do the following:

- End the first line with a backslash.

- Close the string on the first line with a double quotation mark and open the string on the next line with another double quotation mark.

Ending the first line with \n is not sufficient.

## Examples

The following sample generates C2001:

```cpp
// C2001.cpp
// C2001 expected
#include <stdio.h>

int main()
{
    printf_s("Hello,
             world");
    printf_s("Hello,\n
             world");
}
```

Spaces at the beginning of the next line after a line-continuation character are included in the string constant. None of the examples shown above embed a newline character into the string constant. You can embed a newline character as shown here:

```cpp
// C2001b.cpp
#include <stdio.h>

int main()
{
    printf_s("Hello,\n\
             world");

    printf_s("Hello,\
             \nworld");

    printf_s("Hello,\n"
             "world");

    printf_s("Hello,"
             "\nworld");

    printf_s("Hello,"
             " world");

    printf_s("Hello,\
             world");
}
```
