---
description: "Learn more about: Compiler Error C3896"
title: "Compiler Error C3896"
ms.date: "11/04/2016"
f1_keywords: ["C3896"]
helpviewer_keywords: ["C3896"]
ms.assetid: eb8be0f6-5b4e-4d71-8285-8a2a94f8ba29
---
# Compiler Error C3896

'member' : improper initializer: this literal data member can only be initialized with 'nullptr'

A [literal](../../extensions/literal-cpp-component-extensions.md) data member was initialized incorrectly.  See [nullptr](../../extensions/nullptr-cpp-component-extensions.md) for more information.

The following sample generates C3896:

```cpp
// C3896.cpp
// compile with: /clr /c
ref class R{};

value class V {
   literal R ^ r = "test";   // C3896
   literal R ^ r2 = nullptr;   // OK
};
```
