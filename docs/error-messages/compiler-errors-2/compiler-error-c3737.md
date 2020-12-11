---
description: "Learn more about: Compiler Error C3737"
title: "Compiler Error C3737"
ms.date: "11/04/2016"
f1_keywords: ["C3737"]
helpviewer_keywords: ["C3737"]
ms.assetid: ca2aeb23-2491-4ccb-8838-884abf7065c8
---
# Compiler Error C3737

'delegate': a delegate may not have an explicit calling convention

You cannot specify the [calling convention](../../cpp/calling-conventions.md) for a **`delegate`**.

## Example

The following sample generates C3737:

```cpp
// C3737a.cpp
// compile with: /clr
delegate void __stdcall MyFunc();   // C3737
// Try the following line instead.
// delegate void MyFunc();

int main() {
}
```
