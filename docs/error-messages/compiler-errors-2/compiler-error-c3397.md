---
description: "Learn more about: Compiler Error C3397"
title: "Compiler Error C3397"
ms.date: "11/04/2016"
f1_keywords: ["C3397"]
helpviewer_keywords: ["C3397"]
ms.assetid: a8536e87-79c4-4ed7-bd96-42704d06391f
---
# Compiler Error C3397

Aggregate initialization is not allowed in default arguments

An array was declared incorrectly.  See [Arrays](../../extensions/arrays-cpp-component-extensions.md) for more information.

## Example

The following sample generates C3397.

```cpp
// C3397.cpp
// compile with: /clr
// /clr /c
void Func(array<int> ^p = gcnew array<int> { 1, 2, 3 });   // C3397
void Func2(array<int> ^p = gcnew array<int> (3));   // OK

int main() {
   array<int> ^p = gcnew array<int> { 1, 2, 3};   // OK
}
```
