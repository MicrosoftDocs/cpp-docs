---
description: "Learn more about: Compiler Error C3886"
title: "Compiler Error C3886"
ms.date: "11/04/2016"
f1_keywords: ["C3886"]
helpviewer_keywords: ["C3886"]
ms.assetid: 485f6c12-cc1b-4146-9034-409a0a5e615e
---
# Compiler Error C3886

'var' : a literal data member must be initialized

A [literal](../../extensions/literal-cpp-component-extensions.md) variable must be initialized when it is declaraed.

The following sample generates C3886:

```cpp
// C3886.cpp
// compile with: /clr /c
ref struct Y1 {
   literal int staticConst;   // C3886
   literal int staticConst2 = 0;   // OK
};
```
