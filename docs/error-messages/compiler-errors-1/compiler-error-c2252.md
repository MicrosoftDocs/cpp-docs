---
title: "Compiler Error C2252"
description: "Learn more about: Compiler Error C2252"
ms.date: 11/04/2016
f1_keywords: ["C2252"]
helpviewer_keywords: ["C2252"]
---
# Compiler Error C2252

> cannot explicitly instantiate template in current scope

## Remarks

The compiler detected a problem with an explicit instantiation of a template.  For example, you cannot explicitly instantiate a template in a function.

## Example

The following example generates C2252:

```cpp
// C2252.cpp
class A {
public:
   template <class T>
   int getit(int i , T * it ) {
      return i;
   }
   template int A::getit<double>(int i, double * it);   // C2252
   // try the following line instead
   // template <> int A::getit<double>(int i, double * it);

};

int main() {
   // cannot explicitly instantiate in function
   template int A::getit<long>(int i, long * it);   // C2252
}
```
