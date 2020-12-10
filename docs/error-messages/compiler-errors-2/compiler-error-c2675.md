---
description: "Learn more about: Compiler Error C2675"
title: "Compiler Error C2675"
ms.date: "11/04/2016"
f1_keywords: ["C2675"]
helpviewer_keywords: ["C2675"]
ms.assetid: 4b92a12b-bff8-4dd5-a109-620065fc146c
---
# Compiler Error C2675

unary 'operator' : 'type' does not define this operator or a conversion to a type acceptable to the predefined operator

C2675 can also occur when using a unary operator, and the type does not define the operator or a conversion to a type acceptable to the predefined operator. To use the operator, you must overload it for the specified type or define a conversion to a type for which the operator is defined.

## Example

The following sample generates C2675.

```cpp
// C2675.cpp
struct C {
   C(){}
} c;

struct D {
   D(){}
   void operator-(){}
} d;

int main() {
   -c;   // C2675
   -d;   // OK
}
```
