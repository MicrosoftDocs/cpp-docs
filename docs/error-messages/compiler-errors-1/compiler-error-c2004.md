---
description: "Learn more about: Compiler Error C2004"
title: "Compiler Error C2004"
ms.date: "11/04/2016"
f1_keywords: ["C2004"]
helpviewer_keywords: ["C2004"]
ms.assetid: d81526dd-3a00-4593-87b0-d910d3d29bca
---
# Compiler Error C2004

expected 'defined(id)'

An identifier must appear in the parentheses following the preprocessor keyword.

This error can also be generated as a result of compiler conformance work that was done for Visual Studio .NET 2003: missing parenthesis in preprocessor directive. If the closing parenthesis is missing from a preprocessor directive, the compiler will generate an error.

## Examples

The following sample generates C2004:

```cpp
// C2004.cpp
// compile with: /DDEBUG
#include <stdio.h>

int main()
{
    #if defined(DEBUG   // C2004
        printf_s("DEBUG defined\n");
    #endif
}
```

Possible resolution:

```cpp
// C2004b.cpp
// compile with: /DDEBUG
#include <stdio.h>

int main()
{
    #if defined(DEBUG)
        printf_s("DEBUG defined\n");
    #endif
}
```
