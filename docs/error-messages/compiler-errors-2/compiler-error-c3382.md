---
description: "Learn more about: Compiler Error C3382"
title: "Compiler Error C3382"
ms.date: "11/04/2016"
f1_keywords: ["C3382"]
helpviewer_keywords: ["C3382"]
ms.assetid: a7603abd-ac4e-4ae6-a02b-3bdc6d1908a6
---
# Compiler Error C3382

'sizeof' is not supported with /clr:safe

The output file of a **/clr:safe** compilation is a file that is verifiably type safe, and sizeof is not supported because the return value of the sizeof operator is size_t, whose size varies depending on the operating system.

For more information, see,

- [sizeof Operator](../../cpp/sizeof-operator.md)

- [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md)

- [Common Visual C++ 64-bit Migration Issues](../../build/common-visual-cpp-64-bit-migration-issues.md)

## Example

The following sample generates C3382.

```cpp
// C3382.cpp
// compile with: /clr:safe
int main() {
   sizeof( char );   // C3382
}
```
