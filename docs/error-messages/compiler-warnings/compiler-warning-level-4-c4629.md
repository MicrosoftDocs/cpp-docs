---
title: "Compiler Warning (level 4) C4629"
description: "Learn more about: Compiler Warning (level 4) C4629"
ms.date: 11/04/2016
f1_keywords: ["C4629"]
helpviewer_keywords: ["C4629"]
---
# Compiler Warning (level 4) C4629

> digraph used, character sequence 'digraph' interpreted as token 'char' (insert a space between the two characters if this is not what you intended)

## Remarks

Under [/Za](../../build/reference/za-ze-disable-language-extensions.md), the compiler warns when it detects a digraph.

## Example

The following example generates C4629:

```cpp
// C4629.cpp
// compile with: /Za /W4
int main()
<%   // C4629 <% digraph for {
}
```
