---
description: "Learn more about: Compiler Warning (level 1) C4229"
title: "Compiler Warning (level 1) C4229"
ms.date: "11/04/2016"
f1_keywords: ["C4229"]
helpviewer_keywords: ["C4229"]
ms.assetid: aadfc83b-1e5f-4229-bd0a-9c10a5d13182
---
# Compiler Warning (level 1) C4229

anachronism used : modifiers on data are ignored

Using a Microsoft modifier such as **`__cdecl`** on a data declaration is an outdated practice.

## Example

```cpp
// C4229.cpp
// compile with: /W1 /LD
int __cdecl counter;   // C4229 cdecl ignored
```
