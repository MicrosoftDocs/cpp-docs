---
title: "Compiler Error C2171"
description: "Learn more about: Compiler Error C2171"
ms.date: 11/04/2016
f1_keywords: ["C2171"]
helpviewer_keywords: ["C2171"]
---
# Compiler Error C2171

> 'operator' : illegal on operands of type 'type'

## Remarks

A unary operator is used with an invalid operand type.

## Examples

The following example generates C2171.

```cpp
// C2171.cpp
int main() {
   double d, d1;
   d = ~d1;   // C2171

   // OK
   int d2 = 0, d3 = 0;
   d2 = ~d3;
}
```

The following example generates C2171.

```cpp
// C2171_b.cpp
// compile with: /c
class A {
public:
   A() { STF( &A::D ); }

   void D() {}
   void DTF() {
      (*TF)();   // C2171
      (this->*TF)();   // OK
   }

   void STF(void (A::*fnc)()) {
      TF = fnc;
   }

private:
   void (A::*TF)();
};
```
