---
description: "Learn more about: Compiler Error C2009"
title: "Compiler Error C2009"
ms.date: "11/04/2016"
f1_keywords: ["C2009"]
helpviewer_keywords: ["C2009"]
ms.assetid: fe9d94ed-20a5-4d83-b9c4-60ee69d2f30a
---
# Compiler Error C2009

reuse of macro formal 'identifier'

The formal parameter list of a macro definition uses the identifier more than once. Identifiers in the macro's parameter list must be unique.

## Examples

The following sample generates C2009:

```cpp
// C2009.cpp
#include <stdio.h>

#define macro1(a,a) (a*a)   // C2009

int main()
{
    printf_s("%d\n", macro1(2));
}
```

Possible resolution:

```cpp
// C2009b.cpp
#include <stdio.h>

#define macro2(a)   (a*a)
#define macro3(a,b) (a*b)

int main()
{
    printf_s("%d\n", macro2(2));
    printf_s("%d\n", macro3(2,4));
}
```
