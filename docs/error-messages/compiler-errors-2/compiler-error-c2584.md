---
description: "Learn more about: Compiler Error C2584"
title: "Compiler Error C2584"
ms.date: "11/04/2016"
f1_keywords: ["C2584"]
helpviewer_keywords: ["C2584"]
ms.assetid: 836e2c0a-86c0-4742-b432-beb0191ad20e
---
# Compiler Error C2584

'Class' : direct base 'Base2' is inaccessible; already a base of 'Base1'

`Class` already derives directly from `Base1`. `Base2` also derives from `Base1`. `Class` cannot derive from `Base2` because that would mean inheriting (indirectly) from `Base1` again, which is not legal because `Base1` is already a direct base class.

## Example

The following sample generates C2584.

```cpp
// C2584.cpp
// compile with: /c
struct A1 {
   virtual int MyFunction();
};

struct A2 {
    virtual int MyFunction();
};

struct B1: public virtual A1, virtual A2 {
    virtual int MyFunction();
};

struct B2: public virtual A2, virtual A1 {
    virtual int MyFunction();
};

struct C: virtual B1, B2 {
    virtual int MyFunction();
};

struct Z : virtual B2, virtual C {   // C2584
// try the following line insted
// struct Z : virtual C {
    virtual int MyFunction();
};
```
