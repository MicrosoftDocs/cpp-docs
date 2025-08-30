---
title: "Compiler Warning (level 4) C4516"
description: "Learn more about: Compiler Warning (level 4) C4516"
ms.date: 11/04/2016
f1_keywords: ["C4516"]
helpviewer_keywords: ["C4516"]
---
# Compiler Warning (level 4) C4516

> 'class::symbol' : access-declarations are deprecated; member using-declarations provide a better alternative

## Remarks

The ANSI C++ committee has declared access declarations (changing the access of a member in a derived class without the [using](../../cpp/using-declaration.md) keyword) to be outdated. Access declarations may not be supported by future versions of C++.

## Example

The following example generates C4516:

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
