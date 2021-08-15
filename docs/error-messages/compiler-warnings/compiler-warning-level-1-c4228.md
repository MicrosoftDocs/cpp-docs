---
description: "Learn more about: Compiler Warning (level 1) C4228"
title: "Compiler Warning (level 1) C4228"
ms.date: "11/04/2016"
f1_keywords: ["C4228"]
helpviewer_keywords: ["C4228"]
ms.assetid: 9301d660-d601-464e-83f5-7ed844a3c6dc
---
# Compiler Warning (level 1) C4228

nonstandard extension used : qualifiers after comma in declarator list are ignored

Use of qualifiers like **`const`** or **`volatile`** after a comma when declaring variables is a Microsoft extension ([/Ze](../../build/reference/za-ze-disable-language-extensions.md)).

## Example

```cpp
// C4228.cpp
// compile with: /W1
int j, const i = 0;  // C4228
int k;
int const m = 0;  // ok
int main()
{
}
```
