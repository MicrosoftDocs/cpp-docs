---
title: "Compiler Error C2775"
description: "Learn more about: Compiler Error C2775"
ms.date: 11/04/2016
f1_keywords: ["C2775"]
helpviewer_keywords: ["C2775"]
---
# Compiler Error C2775

> 'identifier' : no 'get' method is associated with this property

## Remarks

A data member declared with the [property](../../cpp/property-cpp.md) extended attribute does not have a `get` function specified, but an expression tries to retrieve its value.

## Example

The following example generates C2775:

```cpp
// C2775.cpp
struct A {
   __declspec(property(put=PutProp2, get=GetProp2)) int prop2;
   int GetProp2(){return 0;}
   void PutProp2(int){}

   __declspec(property(put=PutProp)) int prop;
   int PutProp(void){}

};

int main() {
   A* pa = new A;
   int x;
   x = pa->prop;   // C2775
   x = pa->prop2;
}
```
