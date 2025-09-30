---
title: "Compiler Error C2677"
description: "Learn more about: Compiler Error C2677"
ms.date: 11/04/2016
f1_keywords: ["C2677"]
helpviewer_keywords: ["C2677"]
---
# Compiler Error C2677

> binary 'operator' : no global operator found which takes type 'type' (or there is no acceptable conversion)

## Remarks

To use the operator, you must overload it for the specified type or define a conversion to a type for which the operator is defined.

## Example

The following example generates C2677:

```cpp
// C2677.cpp
class C {
public:
   C(){}
} c;

class D {
public:
   D(){}
   operator int(){return 0;}
} d;

int main() {
   int i = 1 >> c;   // C2677
   int j = 1 >> d;   // OK operator int() defined
}
```
