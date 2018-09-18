---
title: "Compiler Error C2139 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2139"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2139"]
ms.assetid: 31e047c0-5bf9-46c2-b6de-b627ea6a5768
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2139

'type' : an undefined class is not allowed as an argument to compiler intrinsic type trait 'trait'

An invalid argument was passed to a type trait.

For more information, see [Compiler Support for Type Traits](../../windows/compiler-support-for-type-traits-cpp-component-extensions.md).

## Example

The following sample generates C2139.

```
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