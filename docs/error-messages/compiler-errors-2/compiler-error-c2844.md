---
title: "Compiler Error C2844"
description: "Learn more about: Compiler Error C2844"
ms.date: 11/04/2016
f1_keywords: ["C2844"]
helpviewer_keywords: ["C2844"]
---
# Compiler Error C2844

> 'member' : cannot be a member of interface 'interface'

## Remarks

An [interface class](../../extensions/interface-class-cpp-component-extensions.md) cannot contain a data member unless it is also a property.

Anything other than a property or member function is not allowed in an interface. Furthermore, constructors, destructors, and operators are not allowed.

## Example

The following example generates C2844:

```cpp
// C2844a.cpp
// compile with: /clr /c
public interface class IFace {
   int i;   // C2844
   // try the following line instead
   // property int Size;
};
```
