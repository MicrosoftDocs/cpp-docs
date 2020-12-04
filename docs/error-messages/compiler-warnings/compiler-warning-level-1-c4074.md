---
description: "Learn more about: Compiler Warning (level 1) C4074"
title: "Compiler Warning (level 1) C4074"
ms.date: "11/04/2016"
f1_keywords: ["C4074"]
helpviewer_keywords: ["C4074"]
ms.assetid: cd510e66-c338-4a86-a4d7-bfa1df9b16c3
---
# Compiler Warning (level 1) C4074

initializers put in compiler reserved initialization area

The compiler initialization area, which is specified by [#pragma init_seg](../../preprocessor/init-seg.md), is reserved by Microsoft. Code in this area may be executed before initialization of the C run-time library.

The following sample generates C4074:

```cpp
// C4074.cpp
// compile with: /W1
#pragma init_seg( compiler )   // C4074

// try this line to resolve the warning
// #pragma init_seg(user)

int main() {
}
```
