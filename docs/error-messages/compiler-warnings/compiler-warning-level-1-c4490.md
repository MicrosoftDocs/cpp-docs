---
description: "Learn more about: Compiler Warning (level 1) C4490"
title: "Compiler Warning (level 1) C4490"
ms.date: "11/04/2016"
f1_keywords: ["C4490"]
helpviewer_keywords: ["C4490"]
ms.assetid: f9b03ecf-41a1-4f4d-a74c-2c1e88234ccc
---
# Compiler Warning (level 1) C4490

'override' : incorrect use of override specifier; 'function' does not match a base ref class method

An override specifier was used incorrectly. For example, you do not override an interface function, you implement it.

For more information, see [Override Specifiers](../../extensions/override-specifiers-cpp-component-extensions.md).

## Example

The following sample generates C4490.

```cpp
// C4490.cpp
// compile with: /clr /c /W1

interface struct IFace {
   void Test();
};

ref struct Class1 : public IFace {
   virtual void Test() override {}   // C4490
   // try the following line instead
   // virtual void Test() {}
};
```
