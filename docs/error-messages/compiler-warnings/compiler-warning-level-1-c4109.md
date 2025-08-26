---
title: "Compiler Warning (level 1) C4109"
description: "Learn more about: Compiler Warning (level 1) C4109"
ms.date: 11/04/2016
f1_keywords: ["C4109"]
helpviewer_keywords: ["C4109"]
---
# Compiler Warning (level 1) C4109

> unexpected identifier 'identifier'

## Remarks

The pragma containing the unexpected identifier is ignored.

## Example

```cpp
// C4109.cpp
// compile with: /W1 /LD
#pragma init_seg( abc ) // C4109
```
