---
title: "Compiler Error C3737"
description: "Learn more about: Compiler Error C3737"
ms.date: 11/04/2016
f1_keywords: ["C3737"]
helpviewer_keywords: ["C3737"]
---
# Compiler Error C3737

> 'delegate': a delegate may not have an explicit calling convention

## Remarks

You cannot specify the [calling convention](../../cpp/calling-conventions.md) for a **`delegate`**.

## Example

The following example generates C3737:

```cpp
// C3737a.cpp
// compile with: /clr
delegate void __stdcall MyFunc();   // C3737
// Try the following line instead.
// delegate void MyFunc();

int main() {
}
```
