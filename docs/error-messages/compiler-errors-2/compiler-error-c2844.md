---
description: "Learn more about: Compiler Error C2844"
title: "Compiler Error C2844"
ms.date: "11/04/2016"
f1_keywords: ["C2844"]
helpviewer_keywords: ["C2844"]
ms.assetid: dcaf4cd2-21b0-4280-ae42-0a706c524d83
---
# Compiler Error C2844

'member' : cannot be a member of interface 'interface'

An [interface class](../../extensions/interface-class-cpp-component-extensions.md) cannot contain a data member unless it is also a property.

Anything other than a property or member function is not allowed in an interface. Furthermore, constructors, destructors, and operators are not allowed.

The following sample generates C2844:

```cpp
// C2844a.cpp
// compile with: /clr /c
public interface class IFace {
   int i;   // C2844
   // try the following line instead
   // property int Size;
};
```
