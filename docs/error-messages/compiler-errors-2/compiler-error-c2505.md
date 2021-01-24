---
description: "Learn more about: Compiler Error C2505"
title: "Compiler Error C2505"
ms.date: "11/04/2016"
f1_keywords: ["C2505"]
helpviewer_keywords: ["C2505"]
ms.assetid: b19f5c53-399d-425e-90db-fe3ca9b40858
---
# Compiler Error C2505

'symbol' : '__declspec(modifer)' can only be applied to declarations or definitions of global objects or static data members

A **`__declspec`** modifier that is designed to only be used at global scope was used in a function.

For more information, see [appdomain](../../cpp/appdomain.md) and [process](../../cpp/process.md).

The following sample generates C2505:

```cpp
// C2505.cpp
// compile with: /clr

// OK
__declspec(process) int ii;
__declspec(appdomain) int jj;

int main() {
   __declspec(process) int i;   // C2505
   __declspec(appdomain) int j;   // C2505
}
```
