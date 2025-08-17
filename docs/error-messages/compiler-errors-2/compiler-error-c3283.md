---
title: "Compiler Error C3283"
description: "Learn more about: Compiler Error C3283"
ms.date: 11/04/2016
f1_keywords: ["C3283"]
helpviewer_keywords: ["C3283"]
---
# Compiler Error C3283

> 'type' : an interface cannot have an instance constructor

## Remarks

A CLR [interface](../../extensions/interface-class-cpp-component-extensions.md) cannot have an instance constructor.  A static constructor is allowed.

## Example

The following example generates C3283:

```cpp
// C3283.cpp
// compile with: /clr
interface class I {
   I();   // C3283
};
```

Possible resolution:

```cpp
// C3283b.cpp
// compile with: /clr /c
interface class I {
   static I(){}
};
```
