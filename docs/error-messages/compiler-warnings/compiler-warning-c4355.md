---
description: "Learn more about: Compiler Warning C4355"
title: "Compiler Warning C4355"
ms.date: "11/04/2016"
f1_keywords: ["C4355"]
helpviewer_keywords: ["C4355"]
ms.assetid: b819ecab-8a07-42d7-8fa4-1180d51626c0
---
# Compiler Warning C4355

'this' : used in base member initializer list

The **`this`** pointer is valid only within nonstatic member functions. It cannot be used in the initializer list for a base class.

The base-class constructors and class member constructors are called before **`this`** constructor. In effect, you've passed a pointer to an unconstructed object to another constructor. If those other constructors access any members or call member functions on this, the result will be undefined. You should not use the **`this`** pointer until all construction has completed.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4355:

```cpp
// C4355.cpp
// compile with: /w14355 /c
#include <tchar.h>

class CDerived;
class CBase {
public:
   CBase(CDerived *derived): m_pDerived(derived) {};
   ~CBase();
   virtual void function() = 0;

   CDerived * m_pDerived;
};

class CDerived : public CBase {
public:
   CDerived() : CBase(this) {};   // C4355 "this" used in derived c'tor
   virtual void function() {};
};

CBase::~CBase() {
   m_pDerived -> function();
}

int main() {
   CDerived myDerived;
}
```
