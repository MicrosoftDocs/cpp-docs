---
title: "Compiler Error C3286"
description: "Learn more about: Compiler Error C3286"
ms.date: 11/04/2016
f1_keywords: ["C3286"]
helpviewer_keywords: ["C3286"]
---
# Compiler Error C3286

> '*specifier*': an iteration variable cannot have any storage-class specifiers

## Remarks

A storage class can't be specified on an iteration variable. For more information, see [Storage classes (C++)](../../cpp/storage-classes-cpp.md) and [for each, in](../../dotnet/for-each-in.md).

## Example

The following example generates C3286, and also shows correct usage.

```cpp
// C3286.cpp
// compile with: /clr
int main() {
   array<int> ^p = { 1, 2, 3 };
   for each (static int i in p) {}   // C3286
   for each (int j in p) {}   // OK
}
```
