---
description: "Learn more about: Compiler Warning (level 4) C4214"
title: "Compiler Warning (level 4) C4214"
ms.date: "11/04/2016"
f1_keywords: ["C4214"]
helpviewer_keywords: ["C4214"]
ms.assetid: 9b8db279-1f12-4a6b-a923-2db22acd1947
---
# Compiler Warning (level 4) C4214

nonstandard extension used : bit field types other than int

With the default Microsoft extensions (/Ze), bitfield structure members can be of any integer type.

## Example

```c
// C4214.c
// compile with: /W4
struct bitfields
{
   unsigned short j:4;  // C4214
};

int main()
{
}
```

Such bit fields are invalid under ANSI compatibility ([/Za](../../build/reference/za-ze-disable-language-extensions.md)).
