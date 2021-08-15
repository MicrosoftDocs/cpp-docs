---
description: "Learn more about: Compiler Error C2524"
title: "Compiler Error C2524"
ms.date: "11/04/2016"
f1_keywords: ["C2524"]
helpviewer_keywords: ["C2524"]
ms.assetid: e71d17f5-2fc2-416b-8dbd-e9bed85eb33a
---
# Compiler Error C2524

'destructor' : a destructor/finalizer must have a 'void' parameter list

The destructor or finalizer had a parameter list that is not [void](../../cpp/void-cpp.md). Other parameter types are not allowed.

## Examples

The following code reproduces C2524.

```cpp
// C2524.cpp
// compile with: /c
class A {
   A() {}
   ~A(int i) {}    // C2524
   // try the following line instead
   // ~A() {}
};
```

The following code reproduces C2524.

```cpp
// C2524_b.cpp
// compile with: /clr /c
ref struct I1 {
protected:
   !I1(int i);   // C2524
   // try the following line instead
   // !I1();
};
```
