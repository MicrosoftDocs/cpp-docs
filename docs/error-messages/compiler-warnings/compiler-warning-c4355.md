---
title: "Compiler Warning (level 1 and level 4, off) C4355"
description: "Learn more about: Compiler Warning (level 1 and level 4, off) C4355"
ms.date: 11/04/2016
f1_keywords: ["C4355"]
helpviewer_keywords: ["C4355"]
---
# Compiler Warning (level 1 and level 4, off) C4355

> '`this`': used in base member initializer list

## Remarks

The `this` pointer is valid only within nonstatic member functions. It can't be used in the initializer list for a base class.

The base-class constructors and class member constructors are called before `this` constructor. This pattern is the same as passing a pointer to an unconstructed object to another constructor. If those other constructors access any members or call member functions on `this`, the result is undefined. You shouldn't use the `this` pointer until all construction is complete.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

## Example

The following example generates C4355:

```cpp
// C4355.cpp
// compile with: /w14355 /c
#include <tchar.h>

class CDerived;
class CBase {
public:
   CBase(CDerived *derived): m_pDerived(derived) {}
   ~CBase();
   virtual void function() = 0;

   CDerived * m_pDerived;
};

class CDerived : public CBase {
public:
   CDerived() : CBase(this) {}   // C4355 "this" used in derived c'tor
   virtual void function() {}
};

CBase::~CBase() {
   m_pDerived -> function();
}

int main() {
   CDerived myDerived;
}
```
