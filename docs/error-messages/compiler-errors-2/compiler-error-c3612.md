---
description: "Learn more about: Compiler Error C3612"
title: "Compiler Error C3612"
ms.date: "11/04/2016"
f1_keywords: ["C3612"]
helpviewer_keywords: ["C3612"]
ms.assetid: aa6e3a2b-4afa-481c-98c1-1b6d1f82f869
---
# Compiler Error C3612

'type': a sealed class cannot be abstract

Types defined by using `value` are sealed by default, and a class is abstract unless it implements all methods of its base. A sealed abstract class can neither be a base class nor can it be instantiated.

For more information, see [Classes and Structs](../../extensions/classes-and-structs-cpp-component-extensions.md).

## Example

The following sample generates C3612:

```cpp
// C3612.cpp
// compile with: /clr /c
value struct V: public System::ICloneable {};   // C3612

// OK
value struct V2: public System::ICloneable {
   Object^ Clone();
};
```
