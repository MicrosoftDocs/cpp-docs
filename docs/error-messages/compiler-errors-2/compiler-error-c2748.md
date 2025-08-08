---
title: "Compiler Error C2748"
description: "Learn more about: Compiler Error C2748"
ms.date: 11/04/2016
f1_keywords: ["C2748"]
helpviewer_keywords: ["C2748"]
---
# Compiler Error C2748

> managed or WinRT array creation must have array size or array initializer

## Remarks

A managed or WinRT array was ill formed. For more information, see [array](../../extensions/arrays-cpp-component-extensions.md).

## Example

The following example generates C2748 and shows how to fix it:

```cpp
// C2748.cpp
// compile with: /clr
int main() {
   array<int> ^p1 = new array<int>();   // C2748
   // try the following line instead
   array<int> ^p2 = new array<int>(2);
}
```
