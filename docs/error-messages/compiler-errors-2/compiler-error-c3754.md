---
title: "Compiler Error C3754"
description: "Learn more about: Compiler Error C3754"
ms.date: 11/04/2016
f1_keywords: ["C3754"]
helpviewer_keywords: ["C3754"]
---
# Compiler Error C3754

> delegate constructor: member function 'function' cannot be called on an instance of type 'type'

## Remarks

A call was made to a function through a pointer to a type that does not contain the function.

## Example

The following example generates C3754:

```cpp
// C3754a.cpp
// compile with: /clr
using namespace System;

delegate void MyDel();

interface class MyInterface {};

ref struct MyClass : MyInterface {
   void f() {}
};

int main() {
   MyInterface^ p = gcnew MyClass;
   MyDel^ q = gcnew MyDel(p, &MyClass::f);   // C3754
   // try the following line instead
//   MyDel^ q = gcnew MyDel(safe_cast<MyClass^>(p), &MyClass::f);
}
```
