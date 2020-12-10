---
description: "Learn more about: Compiler Warning (level 3) C4633"
title: "Compiler Warning (level 3) C4633"
ms.date: "11/04/2016"
f1_keywords: ["C4633"]
helpviewer_keywords: ["C4633"]
ms.assetid: 6d76f268-ba8c-448b-8e83-b903a18b583b
---
# Compiler Warning (level 3) C4633

XML document comment target: error:  reason

A name passed to the [\<param>](../../build/reference/param-visual-cpp.md) tag was not found by the compiler.

The following sample generates C4633:

```cpp
// C4633.cpp
// compile with: /clr /doc /LD /W3

/// Text for class MyClass.
public ref class MyClass {
   // C4633 remove line for Int3
   /// <param name="Int1">Used to indicate status.</param>
   /// <param name="Int3">Used to indicate status.</param>
   void MyMethod(int Int1) {
      Int1 = 0;
      Int1++;
   }
};
```
