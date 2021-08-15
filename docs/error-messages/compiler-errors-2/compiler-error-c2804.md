---
description: "Learn more about: Compiler Error C2804"
title: "Compiler Error C2804"
ms.date: "11/04/2016"
f1_keywords: ["C2804"]
helpviewer_keywords: ["C2804"]
ms.assetid: b066e563-cca4-450c-8ba7-3b0d7a89f3ea
---
# Compiler Error C2804

binary 'operator operator' has too many parameters

The overloaded binary operator member function is declared with more than one parameter. The first operand parameter of a binary operator member function, whose type is the operator's enclosing type, is implied.

## Examples

The following sample generates C2804 and shows how to fix it.

```cpp
// C2804.cpp
// compile by using: cl /c /W4 C2804.cpp
class X {
public:
   X& operator+= (const X &left, const X &right);   // C2804
   X& operator+= (const X &right);   // OK - left operand implicitly *this
};

int main() {
   X x, y;
   x += y;   // equivalent to x.operator+=(y)
}
```

The following sample generates C2804 and shows how to fix it.

```cpp
// C2804_2.cpp
// compile with: /clr /c
ref struct Y {
   Y^ operator +(Y^ hY, int i);   // C2804
   static Y^ operator +(Y^ hY, int i);   // OK
   Y^ operator +(int i);   // OK
};
```
