---
description: "Learn more about: Compiler Warning (level 1) C4141"
title: "Compiler Warning (level 1) C4141"
ms.date: "11/04/2016"
f1_keywords: ["C4141"]
helpviewer_keywords: ["C4141"]
ms.assetid: 6ce8c058-7f4c-41cf-93e7-90a466744656
---
# Compiler Warning (level 1) C4141

'modifier' : used more than once

## Example

```cpp
// C4141.cpp
// compile with: /W1 /LD
inline inline void func ();   // C4141
```
