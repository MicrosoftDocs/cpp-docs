---
description: "Learn more about: Compiler Error C3914"
title: "Compiler Error C3914"
ms.date: "11/04/2016"
f1_keywords: ["C3914"]
helpviewer_keywords: ["C3914"]
ms.assetid: 8f3190e6-ee50-4916-9ecc-3b8748b2e1e7
---
# Compiler Error C3914

a default property cannot be static

A default property was declared incorrectly.  For more information, see [How to: Use Properties in C++/CLI](../../dotnet/how-to-use-properties-in-cpp-cli.md).

## Example

The following sample generates C3914 and shows how to fix it.

```cpp
// C3914.cpp
// compile with: /clr /c
ref struct X {
   static property int default[int] {   // C3914
   // try the following line instead
   // property int default[int] {
      int get(int) { return 0; }
      void set(int, int) {}
   }
};
```
