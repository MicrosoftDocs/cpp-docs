---
title: "Compiler Error C2452"
description: "Learn more about: Compiler Error C2452"
ms.date: 11/04/2016
f1_keywords: ["C2452"]
helpviewer_keywords: ["C2452"]
---
# Compiler Error C2452

> 'type' : invalid source type for safe_cast

## Remarks

The source type for [safe_cast](../../extensions/safe-cast-cpp-component-extensions.md) was not valid.  For example, all types in a `safe_cast` operation must be CLR types.

## Example

The following example generates C2452:

```cpp
// C2452.cpp
// compile with: /clr

struct A {};
struct B : public A {};

ref struct C {};
ref struct D : public C{};

int main() {
   A a;
   safe_cast<B*>(&a);   // C2452

   // OK
   C ^ c = gcnew C;
   safe_cast<D^>(c);
}
```
