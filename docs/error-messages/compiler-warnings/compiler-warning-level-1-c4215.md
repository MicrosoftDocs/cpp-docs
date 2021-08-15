---
description: "Learn more about: Compiler Warning (level 1) C4215"
title: "Compiler Warning (level 1) C4215"
ms.date: "11/04/2016"
f1_keywords: ["C4215"]
helpviewer_keywords: ["C4215"]
ms.assetid: f2aab64d-1bab-4f75-95ee-89e1263047b1
---
# Compiler Warning (level 1) C4215

nonstandard extension used : long float

The default Microsoft extensions (/Ze) treat **long float** as **`double`**. ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) does not. Use **`double`** to maintain compatibility.

The following sample generates C4215:

```cpp
// C4215.cpp
// compile with: /W1 /LD
long float a;   // C4215

// use the line below to resolve the warning
// double a;
```
