---
description: "Learn more about: Compiler Error C3887"
title: "Compiler Error C3887"
ms.date: "11/04/2016"
f1_keywords: ["C3887"]
helpviewer_keywords: ["C3887"]
ms.assetid: a7e82426-ef99-437b-9562-2822004e18fe
---
# Compiler Error C3887

'var' : the initializer for a literal data member must be a constant expression

A [literal](../../extensions/literal-cpp-component-extensions.md) data member can only be initialized with a constant expresion.

The following sample generates C3887:

```cpp
// C3887.cpp
// compile with: /clr
ref struct Y1 {
   static int i = 9;
   literal
   int staticConst = i;   // C3887
};
```

Possible resolution:

```cpp
// C3887b.cpp
// compile with: /clr /c
ref struct Y1 {
   literal
   int staticConst = 9;
};
```
