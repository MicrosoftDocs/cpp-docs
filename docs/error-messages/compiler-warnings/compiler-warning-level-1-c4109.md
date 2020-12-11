---
description: "Learn more about: Compiler Warning (level 1) C4109"
title: "Compiler Warning (level 1) C4109"
ms.date: "11/04/2016"
f1_keywords: ["C4109"]
helpviewer_keywords: ["C4109"]
ms.assetid: 9e8d95c6-e05d-47e0-bd87-78974b3cc06c
---
# Compiler Warning (level 1) C4109

unexpected identifier 'identifier'

The pragma containing the unexpected identifier is ignored.

## Example

```cpp
// C4109.cpp
// compile with: /W1 /LD
#pragma init_seg( abc ) // C4109
```
