---
description: "Learn more about: Compiler Warning (level 4) C4516"
title: "Compiler Warning (level 4) C4516"
ms.date: "11/04/2016"
f1_keywords: ["C4516"]
helpviewer_keywords: ["C4516"]
ms.assetid: 6677bb1f-d26e-4ab9-8644-6b5a2a8f4ff8
---
# Compiler Warning (level 4) C4516

'class::symbol' : access-declarations are deprecated; member using-declarations provide a better alternative

The ANSI C++ committee has declared access declarations (changing the access of a member in a derived class without the [using](../../cpp/using-declaration.md) keyword) to be outdated. Access declarations may not be supported by future versions of C++.

The following sample generates C4516:

```cpp
// C4516.cpp
// compile with: /W4
class A
{
public:
   void x(char);
};

class B : protected A
{
public:
   A::x;  // C4516 on access-declaration
   // use the following line instead
   // using A::x; // using-declaration, ok
};

int main()
{
}
```
