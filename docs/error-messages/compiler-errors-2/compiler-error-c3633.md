---
description: "Learn more about: Compiler Error C3633"
title: "Compiler Error C3633"
ms.date: "11/04/2016"
f1_keywords: ["C3633"]
helpviewer_keywords: ["C3633"]
ms.assetid: 7d65babf-2191-4d67-a69f-f5c4c2ddf946
---
# Compiler Error C3633

cannot define 'member' as a member of managed 'type'

CLR reference class data members cannot be of a non-POD C++ type.  You can only instantiate a POD native type in a CLR type.  For example, a POD type cannot contain a copy constructor or an assignment operator.

## Example

The following sample generates C3633.

```cpp
// C3633.cpp
// compile with: /clr /c
#pragma warning( disable : 4368 )

class A1 {
public:
   A1() { II = 0; }
   int II;
};

ref class B {
public:
   A1 a1;   // C3633
   A1 * a2;   // OK
   B() : a2( new A1 ) {}
    ~B() { delete a2; }
};
```
