---
description: "Learn more about: Compiler Warning (level 1) C4237"
title: "Compiler Warning (level 1) C4237"
ms.date: "11/04/2016"
f1_keywords: ["C4237"]
helpviewer_keywords: ["C4237"]
ms.assetid: f2e86c4b-80d8-460e-9429-83c5f3f5d7ca
---
# Compiler Warning (level 1) C4237

'keyword' keyword is not yet supported, but reserved for future use

A keyword in the C++ specification is not implemented in the Microsoft C++ compiler, but the keyword is not available as a user-defined symbol.

The following sample generates C4237:

```cpp
// C4237.cpp
// compile with: /W1 /c
int export;   // C4237
```
