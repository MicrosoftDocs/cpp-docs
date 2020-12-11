---
description: "Learn more about: Compiler Error C3399"
title: "Compiler Error C3399"
ms.date: "11/04/2016"
f1_keywords: ["C3399"]
helpviewer_keywords: ["C3399"]
ms.assetid: 306ad199-d150-4f6c-bcf1-24a7948b93be
---
# Compiler Error C3399

'type' : cannot provide arguments when creating an instance of a generic parameter

When you specify the `gcnew()` constraint, you specify that the constraint type will have a parameterless constructor. Therefore, it is an error to attempt to instantiate that type and pass a parameter.

See [Constraints on Generic Type Parameters (C++/CLI)](../../extensions/constraints-on-generic-type-parameters-cpp-cli.md) for more information.

## Example

The following sample generates C3399.

```cpp
// C3399.cpp
// compile with: /clr /c
generic <class T>
where T : gcnew()
void f() {
   T t = gcnew T(1);   // C3399
   T t2 = gcnew T();   // OK
}
```
