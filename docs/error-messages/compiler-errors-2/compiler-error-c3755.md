---
title: "Compiler Error C3755"
description: "Learn more about: Compiler Error C3755"
ms.date: 11/04/2016
f1_keywords: ["C3755"]
helpviewer_keywords: ["C3755"]
---
# Compiler Error C3755

> 'delegate': a delegate may not be defined

## Remarks

A [delegate  (C++ Component Extensions)](../../extensions/delegate-cpp-component-extensions.md) can be declared but not defined.

## Examples

The following example generates C3755.

```cpp
// C3755.cpp
// compile with: /clr /c
delegate void MyDel() {};   // C3755
```

C3755 can also occur if you attempt to create a delegate template. The following example generates C3755.

```cpp
// C3755_b.cpp
// compile with: /clr /c
ref struct R {
   template<class T>
   delegate void D(int) {}   // C3755
};
```
