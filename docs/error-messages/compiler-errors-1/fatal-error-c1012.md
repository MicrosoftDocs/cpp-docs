---
title: "Fatal Error C1012"
description: "Learn more about: Fatal Error C1012"
ms.date: "02/20/2025"
f1_keywords: ["C1012"]
helpviewer_keywords: ["C1012"]
---
# Fatal Error C1012

unmatched parenthesis: missing 'character'

The parentheses in a preprocessor directive do not match.

The following sample generates C1012:

```cpp
// C1012.cpp
// compile with: /c
#if (0   // C1012
#endif
```
