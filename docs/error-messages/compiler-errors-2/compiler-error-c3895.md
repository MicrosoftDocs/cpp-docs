---
description: "Learn more about: Compiler Error C3895"
title: "Compiler Error C3895"
ms.date: "11/04/2016"
f1_keywords: ["C3895"]
helpviewer_keywords: ["C3895"]
ms.assetid: 771b9fe5-d6d4-4297-bf57-e2f857722155
---
# Compiler Error C3895

'var' : type data members cannot be 'volatile'

Certain kinds of data members, for example [literal](../../extensions/literal-cpp-component-extensions.md) or [initonly](../../dotnet/initonly-cpp-cli.md), cannot be [volatile](../../cpp/volatile-cpp.md).

The following sample generates C3895:

```cpp
// C3895.cpp
// compile with: /clr
ref struct Y1 {
   initonly
   volatile int data_var2;   // C3895
};
```
