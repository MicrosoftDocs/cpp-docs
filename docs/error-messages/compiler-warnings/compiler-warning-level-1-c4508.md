---
description: "Learn more about: Compiler Warning (level 1) C4508"
title: "Compiler Warning (level 1) C4508"
ms.date: "11/04/2016"
f1_keywords: ["C4508"]
helpviewer_keywords: ["C4508"]
ms.assetid: c05f113b-b789-4df0-a4ef-78bce4767021
---
# Compiler Warning (level 1) C4508

'function' : function should return a value; 'void' return type assumed

The function has no return type specified. In this case, C4430 should also fire and the compiler implements the fix reported by C4430 (default value is int).

To resolve this warning, explicitly declare the return type of functions.

The following sample generates C4508:

```cpp
// C4508.cpp
// compile with: /W1 /c
#pragma warning (disable : 4430)
func() {}   // C4508
void func2() {}   // OK
```
