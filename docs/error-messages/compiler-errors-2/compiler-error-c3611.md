---
description: "Learn more about: Compiler Error C3611"
title: "Compiler Error C3611"
ms.date: "11/04/2016"
f1_keywords: ["C3611"]
helpviewer_keywords: ["C3611"]
ms.assetid: 42f3e320-41de-420a-bd05-8924cab765aa
---
# Compiler Error C3611

'function': a sealed function cannot have a pure-specifier

A sealed function was declared incorrectly.  For more information, see [sealed](../../extensions/sealed-cpp-component-extensions.md).

## Example

The following sample generates C3611.

```cpp
// C3611.cpp
// compile with: /clr /c

ref struct V {
   virtual void Test() sealed = 0;   // C3611
   virtual void Test2() sealed;   // OK
   virtual void Test3() = 0;   // OK
};
```
