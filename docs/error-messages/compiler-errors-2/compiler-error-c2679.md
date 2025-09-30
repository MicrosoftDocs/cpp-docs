---
title: "Compiler Error C2679"
description: "Learn more about: Compiler Error C2679"
ms.date: 11/04/2016
f1_keywords: ["C2679"]
helpviewer_keywords: ["C2679"]
---
# Compiler Error C2679

> binary 'operator' : no operator found which takes a right-hand operand of type 'type' (or there is no acceptable conversion)

## Remarks

To use the operator, you must overload it for the specified type or define a conversion to a type for which the operator is defined.

## Example

The following example generates C2679:

```cpp
// C2679.cpp
class C {
public:
   C();   // no constructor with an int argument
} c;

class D {
public:
   D(int) {}
   D(){}
} d;

int main() {
   c = 10;   // C2679
   d = 10;   // OK
}
```
