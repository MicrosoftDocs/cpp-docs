---
description: "Learn more about: Compiler Warning (level 1) C4272"
title: "Compiler Warning (level 1) C4272"
ms.date: "11/04/2016"
f1_keywords: ["C4272"]
helpviewer_keywords: ["C4272"]
ms.assetid: 0d6c1de4-2eef-42c4-b861-c221f8b495ef
---
# Compiler Warning (level 1) C4272

'function' : is marked __declspec(dllimport); must specify native calling convention when importing a function.

It is an error to export a function marked with the [__clrcall](../../cpp/clrcall.md) calling convention, and the compiler issues this warning if you attempt to import a function marked `__clrcall`.

The following sample generates C4272:

```cpp
// C4272.cpp
// compile with: /c /W1 /clr
__declspec(dllimport) void __clrcall Test();   // C4272
__declspec(dllimport) void Test2();   // OK
```
