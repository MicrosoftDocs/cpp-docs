---
title: "Compiler Warning (level 1, Error) C4141"
description: "Learn more about: Compiler Warning (level 1, Error) C4141"
ms.date: 11/04/2016
f1_keywords: ["C4141"]
helpviewer_keywords: ["C4141"]
---
# Compiler Warning (level 1, Error) C4141

> '*modifier*': used more than once

## Example

```cpp
// C4141.cpp
// compile with: /W1 /LD
inline inline void func ();   // C4141
```
