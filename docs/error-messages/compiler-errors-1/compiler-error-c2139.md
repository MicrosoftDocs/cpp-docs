---
title: "Compiler Error C2139"
description: "Learn more about: Compiler Error C2139"
ms.date: 05/03/2021
f1_keywords: ["C2139"]
helpviewer_keywords: ["C2139"]
---
# Compiler Error C2139

> '*type*' : an undefined class is not allowed as an argument to compiler intrinsic type trait '*trait*'

## Remarks

An invalid argument was passed to a type trait.

For more information, see [Compiler Support for Type Traits](../../extensions/compiler-support-for-type-traits-cpp-component-extensions.md).

## Example

The following example generates C2139.

```cpp
// C2139.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

template <class T>
struct is_polymorphic {
   static const bool value = __is_polymorphic(T);
};

class C;
class D {};

class E {
public:
   virtual void Test() {}
};

int main() {
   cout << is_polymorphic<C>::value << endl;   // C2139
   cout << is_polymorphic<D>::value << endl;   // OK
   cout << is_polymorphic<E>::value << endl;   // OK
}
```
