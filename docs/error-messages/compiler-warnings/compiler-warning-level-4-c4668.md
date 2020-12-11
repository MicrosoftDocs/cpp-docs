---
description: "Learn more about: Compiler Warning (level 4) C4668"
title: "Compiler Warning (level 4) C4668"
ms.date: "11/04/2016"
f1_keywords: ["C4668"]
helpviewer_keywords: ["C4668"]
ms.assetid: c6585460-bc4a-4a15-9242-4cbfce53c961
---
# Compiler Warning (level 4) C4668

'symbol' is not defined as a preprocessor macro, replacing with '0' for 'directives'

A symbol that was not defined was used with a preprocessor directive. The symbol will evaluate to false. To define a symbol, you can use either the [#define directive](../../preprocessor/hash-define-directive-c-cpp.md) or [/D](../../build/reference/d-preprocessor-definitions.md) compiler option.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

## Example

The following sample generates C4668:

```cpp
// C4668.cpp
// compile with: /W4
#include <stdio.h>

#pragma warning (default : 4668)   // turn warning on

int main()
{
    #if q   // C4668, q is not defined
        printf_s("defined");
    #else
        printf_s("undefined");
    #endif
}
```
