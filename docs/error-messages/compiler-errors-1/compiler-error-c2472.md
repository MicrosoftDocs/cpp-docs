---
description: "Learn more about: Compiler Error C2472"
title: "Compiler Error C2472"
ms.date: "11/04/2016"
f1_keywords: ["C2472"]
helpviewer_keywords: ["C2472"]
ms.assetid: 3b36bcdc-2ba5-4357-ab88-7545ba0551cd
---
# Compiler Error C2472

> '*function*' cannot be generated in managed code: '*message*'; compile with /clr to generate a mixed image

## Remarks

This error will occur when types not supported by managed code are used within a pure common language runtime (CLR) environment. Compile with **/clr** to resolve the error.

The **/clr:pure** and **/clr:safe** compiler options are deprecated in Visual Studio 2015 and unsupported in Visual Studio 2017.

## Example

The following sample generates C2472.

```cpp
// C2472.cpp
// compile with: /clr:pure
// C2472 expected

#include <cstdlib>

int main()
{
   int * __ptr32 p32;
   int * __ptr64 p64;

   p32 = (int * __ptr32)malloc(4);
   p64 = p32;
}
```

## See also

- [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)
