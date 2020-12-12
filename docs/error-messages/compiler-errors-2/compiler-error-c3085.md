---
description: "Learn more about: Compiler Error C3085"
title: "Compiler Error C3085"
ms.date: "11/04/2016"
f1_keywords: ["C3085"]
helpviewer_keywords: ["C3085"]
ms.assetid: 1ac40bf2-f63e-439e-8921-47e6dadc8354
---
# Compiler Error C3085

'constructor': a constructor cannot be 'keyword'

A constructor was declared incorrectly. See [Override Specifiers](../../extensions/override-specifiers-cpp-component-extensions.md) for more information.

## Example

The following sample generates C3085.

```cpp
// C3085.cpp
// compile with: /c /clr
ref struct S {
   S() abstract;   // C3085
   S(S%) abstract;   // C3085
};

ref struct T {
   T() sealed {}   // C3085
   T(T%) sealed {}   // C3085
};
```
