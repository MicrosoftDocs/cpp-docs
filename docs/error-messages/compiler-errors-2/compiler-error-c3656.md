---
description: "Learn more about: Compiler Error C3656"
title: "Compiler Error C3656"
ms.date: "11/04/2016"
f1_keywords: ["C3656"]
helpviewer_keywords: ["C3656"]
ms.assetid: 88965d85-73b0-4b35-8020-0650c9c94cd8
---
# Compiler Error C3656

'override' : override specifier cannot be repeated

An explicit override keyword can only be specified once. For more information, see [Explicit Overrides](../../extensions/explicit-overrides-cpp-component-extensions.md).

The following sample generates C3656:

```cpp
// C3656.cpp
// compile with: /clr /c
public interface struct O {
   int f();
};

public ref struct V : O {
   int f() override override { return 0; }   // C3656
   // try the following line instead
   // int f() override { return 0; }
};
```
