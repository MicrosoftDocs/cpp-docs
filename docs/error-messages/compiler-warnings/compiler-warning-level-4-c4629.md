---
description: "Learn more about: Compiler Warning (level 4) C4629"
title: "Compiler Warning (level 4) C4629"
ms.date: "11/04/2016"
f1_keywords: ["C4629"]
helpviewer_keywords: ["C4629"]
ms.assetid: 158cde12-bae5-4d43-b575-b52b35aaa0b9
---
# Compiler Warning (level 4) C4629

digraph used, character sequence 'digraph' interpreted as token 'char' (insert a space between the two characters if this is not what you intended)

Under [/Za](../../build/reference/za-ze-disable-language-extensions.md), the compiler warns when it detects a digraph.

The following sample generates C4629:

```cpp
// C4629.cpp
// compile with: /Za /W4
int main()
<%   // C4629 <% digraph for {
}
```
