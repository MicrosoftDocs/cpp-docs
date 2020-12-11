---
description: "Learn more about: Compiler Warning (level 1) C4006"
title: "Compiler Warning (level 1) C4006"
ms.date: "11/04/2016"
f1_keywords: ["C4006"]
helpviewer_keywords: ["C4006"]
ms.assetid: f1a59819-0fd2-4361-8e3a-99e4b514b8e1
---
# Compiler Warning (level 1) C4006

\#undef expected an identifier

The `#undef` directive did not specify an identifier to undefine. The directive is ignored. To resolve the warning, be sure to specify an identifier. The following sample generates C4006:

```cpp
// C4006.cpp
// compile with: /W1
#undef   // C4006

// try..
// #undef TEST

int main() {
}
```
