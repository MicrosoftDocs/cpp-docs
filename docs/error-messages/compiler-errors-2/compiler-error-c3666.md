---
description: "Learn more about: Compiler Error C3666"
title: "Compiler Error C3666"
ms.date: "11/04/2016"
f1_keywords: ["C3666"]
helpviewer_keywords: ["C3666"]
ms.assetid: 459e51dd-cefb-4346-99b3-644f2d8b65b2
---
# Compiler Error C3666

'constructor' : override specifier 'keyword' not allowed on a constructor

An override specifier was used on a constructor, and that is not allowed. For more information, see [Override Specifiers](../../extensions/override-specifiers-cpp-component-extensions.md).

## Example

The following sample generates C3666.

```cpp
// C3666.cpp
// compile with: /clr /c
ref struct R {
   R() new {}   // C3666
   R(int i) {}   // OK
};
```
