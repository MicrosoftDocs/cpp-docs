---
title: "Compiler Error C2774"
description: "Learn more about: Compiler Error C2774"
ms.date: 11/04/2016
f1_keywords: ["C2774"]
helpviewer_keywords: ["C2774"]
---
# Compiler Error C2774

> 'identifier' : no 'put' method is associated with this property

## Remarks

A data member declared with [property](../../cpp/property-cpp.md) has no `put` function, but an expression tries to set its value.

## Example

The following example generates C2774:

```cpp
// C2774.cpp
struct A {
   __declspec(property(get=GetProp)) int prop;
   int GetProp(void);

   __declspec(property(get=GetProp2, put=PutProp2)) int prop2;
   int GetProp2(void);
   void PutProp2(int);
};

int main() {
   A* pa = new A;
   int val = 0;
   pa->prop = val;   // C2774
   pa->prop++;   // C2774
}
```
