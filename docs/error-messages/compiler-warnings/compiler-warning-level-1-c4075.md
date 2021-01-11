---
description: "Learn more about: Compiler Warning (level 1) C4075"
title: "Compiler Warning (level 1) C4075"
ms.date: "11/04/2016"
f1_keywords: ["C4075"]
helpviewer_keywords: ["C4075"]
ms.assetid: 19a700b6-f210-4b9d-a2f2-76cfe39ab178
---
# Compiler Warning (level 1) C4075

initializers put in unrecognized initialization area

A [#pragma init_seg](../../preprocessor/init-seg.md) uses an unrecognized section name. The compiler ignores the **pragma** command.

The following sample generates C4075:

```cpp
// C4075.cpp
// compile with: /W1
#pragma init_seg("mysegg")   // C4075

// try..
// #pragma init_seg(user)

int main() {
}
```
