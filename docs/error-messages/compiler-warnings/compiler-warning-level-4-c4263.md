---
description: "Learn more about: Compiler Warning (level 4) C4263"
title: "Compiler Warning (level 4) C4263"
ms.date: "11/04/2016"
f1_keywords: ["C4263"]
helpviewer_keywords: ["C4263"]
ms.assetid: daabb05d-ab56-460f-ab6c-c74d222ef649
---
# Compiler Warning (level 4) C4263

'function' : member function does not override any base class virtual member function

A class function definition has the same name as a virtual function in a base class but not the same number or type of arguments. This effectively hides the virtual function in the base class.

This warning is off by default. See [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md) for more information.

The following sample generates C4263:

```cpp
// C4263.cpp
// compile with: /W4
#pragma warning(default:4263)
#pragma warning(default:4264)
class B {
public:
   virtual void func();
};

class D : public B {
   void func(int);   // C4263
};

int main() {
}
```
