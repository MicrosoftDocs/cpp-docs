---
description: "Learn more about: Compiler Error C3285"
title: "Compiler Error C3285"
ms.date: "11/04/2016"
f1_keywords: ["C3285"]
helpviewer_keywords: ["C3285"]
ms.assetid: 04e8f210-d67e-4810-b153-e1efe2986c8f
---
# Compiler Error C3285

for each statement cannot operate on variables of type 'type'

The `for each` statement repeats a group of embedded statements for each element in an array or an object collection.

See [for each, in](../../dotnet/for-each-in.md) for more information.

## Example

The following sample generates C3285.

```cpp
// C3285.cpp
// compile with: /clr
int main() {
   for each (int i in 0) {}   // C3285

   array<int> ^p = { 1, 2, 3 };
   for each (int j in p) {}   // OK
}
```
