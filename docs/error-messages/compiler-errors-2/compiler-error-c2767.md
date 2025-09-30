---
title: "Compiler Error C2767"
description: "Learn more about: Compiler Error C2767"
ms.date: 11/04/2016
f1_keywords: ["C2767"]
helpviewer_keywords: ["C2767"]
---
# Compiler Error C2767

> managed or WinRTarray dimension mismatch : expected N argument(s) - M provided

## Remarks

A managed or WinRT array declaration was ill formed. For more information, see [array](../../extensions/arrays-cpp-component-extensions.md).

## Example

The following example generates C2767 and shows how to fix it:

```cpp
// C2767.cpp
// compile with: /clr
int main() {
   array<int> ^p1 = new array<int>(2,3); // C2767
   array<int> ^p2 = new array<int>(2);   // OK
}
```
