---
description: "Learn more about: Compiler Warning (level 3) C4538"
title: "Compiler Warning (level 3) C4538"
ms.date: "11/04/2016"
f1_keywords: ["C4538"]
helpviewer_keywords: ["C4538"]
ms.assetid: 747e3d51-b6d0-41c1-a726-7af3253b59d7
---
# Compiler Warning (level 3) C4538

'type' : const/volatile qualifiers on this type are not supported

A qualifier keyword was applied to an array incorrectly. For more information, see [array](../../extensions/arrays-cpp-component-extensions.md).

The following sample generates C4538:

```cpp
// C4538.cpp
// compile with: /clr /W3 /LD
const array<int> ^f1();   // C4538
array<const int> ^f2();   // OK
```
