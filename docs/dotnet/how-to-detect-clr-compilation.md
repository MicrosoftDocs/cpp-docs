---
description: "Learn more about: How to: Detect /clr Compilation"
title: "How to: Detect -clr Compilation"
ms.custom: "get-started-article"
ms.date: "11/04/2016"
helpviewer_keywords: ["compilation, detecting /clr", "/clr compiler option [C++], detecting use of"]
ms.assetid: a9310045-4810-4637-a64a-0b31a08791c1
---
# How to: Detect /clr Compilation

Use the `_MANAGED` or `_M_CEE` macro to see if a module is compiled with **/clr**. For more information, see [/clr (Common Language Runtime Compilation)](../build/reference/clr-common-language-runtime-compilation.md).

For more information about macros, see [Predefined Macros](../preprocessor/predefined-macros.md).

## Example

```cpp
// detect_CLR_compilation.cpp
// compile with: /clr
#include <stdio.h>

int main() {
   #if (_MANAGED == 1) || (_M_CEE == 1)
      printf_s("compiling with /clr\n");
   #else
      printf_s("compiling without /clr\n");
   #endif
}
```

## See also

[Using C++ Interop (Implicit PInvoke)](../dotnet/using-cpp-interop-implicit-pinvoke.md)
