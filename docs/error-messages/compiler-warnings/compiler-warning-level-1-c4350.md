---
description: "Learn more about: Compiler Warning (level 1) C4350"
title: "Compiler Warning (level 1) C4350"
ms.date: "11/04/2016"
f1_keywords: ["C4350"]
helpviewer_keywords: ["C4350"]
ms.assetid: 4cc8ed67-64c4-4da5-a7a5-a639232baa23
---
# Compiler Warning (level 1) C4350

behavior change: 'member1' called instead of 'member2'

An rvalue cannot be bound to a non-const reference. In versions of Visual C++ before Visual Studio 2003, it was possible to bind an rvalue to a non-const reference in a direct initialization. This code now gives a warning.

For backward compatibility, it is still possible to bind rvalues to non-const references, but standard conversions are preferred wherever possible.

This warning represents a change of behavior from the Visual C++ .NET 2002 compiler. If enabled, this warning could possibly be given for correct code. For example, it could be given when using the **std::auto_ptr** class template.

If you get this warning, examine your code to see if it depends on binding rvalues to non-const references. Adding a const to the reference or providing a additional const-reference overload may solve the problem.

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

The following sample generates C4350:

```cpp
// C4350.cpp
// compile with: /W1
#pragma warning (default : 4350)
class A {};

class B
{
public:
   B(B&){}
   // try the following instead:
   // B(const B&){}

   B(A){}
   operator A(){ return A();}
};

B source() { return A(); }

int main()
{
   B ap(source());   // C4350
}
```
