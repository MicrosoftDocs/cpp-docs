---
description: "Learn more about: Compiler Warning (level 1) C4216"
title: "Compiler Warning (level 1) C4216"
ms.date: "11/04/2016"
f1_keywords: ["C4216"]
helpviewer_keywords: ["C4216"]
ms.assetid: 211079dc-59d0-42a7-801c-2ddab21d7232
---
# Compiler Warning (level 1) C4216

nonstandard extension used : float long

The default Microsoft extensions (/Ze) treat **float long** as **`double`**. ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) does not. Use **`double`** to maintain compatibility. The following sample generates C4216:

```cpp
// C4216.cpp
// compile with: /W1
float long a;   // C4216

// use the line below to resolve the warning
// double a;

int main() {
}
```
