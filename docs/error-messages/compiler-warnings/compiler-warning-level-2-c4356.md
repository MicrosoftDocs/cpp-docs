---
title: "Compiler Warning (level 2) C4356"
description: "Learn more about: Compiler Warning (level 2) C4356"
ms.date: 11/04/2016
f1_keywords: ["C4356"]
helpviewer_keywords: ["C4356"]
---
# Compiler Warning (level 2) C4356

> 'member' : static data member cannot be initialized via derived class

## Remarks

The initialization of a static data member was ill formed. The compiler accepted the initialization. To avoid the warning, initialize the member through the base class.

Use the [warning](../../preprocessor/warning.md) pragma to suppress this warning.

## Example

The following example generates C4356:

```cpp
// C4356.cpp
// compile with: /W2 /EHsc
#include <iostream>

template <class T>
class C {
   static int n;
};

class D : C<int> {};

int D::n = 0; // C4356
// try the following line instead
// int C<int>::n = 0;

class A {
public:
   static int n;
};

class B : public A {};

int B::n = 10;   // C4356
// try the following line instead
// int A::n = 99;

int main() {
   using namespace std;
   cout << B::n << endl;
}
```
