---
description: "Learn more about: Compiler Warning (level 1) C4218"
title: "Compiler Warning (level 1) C4218"
ms.date: "11/04/2016"
f1_keywords: ["C4218"]
helpviewer_keywords: ["C4218"]
ms.assetid: d6c3cd90-4518-49e9-ae86-4ba9e2761d98
---
# Compiler Warning (level 1) C4218

nonstandard extension used : must specify at least a storage class or a type

With the default Microsoft extensions (/Ze), you can declare a variable without specifying a type or storage class. The default type is **`int`**.

## Example

```cpp
// C4218.c
// compile with: /W4
i;  // C4218

int main()
{
}
```

Such declarations are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
