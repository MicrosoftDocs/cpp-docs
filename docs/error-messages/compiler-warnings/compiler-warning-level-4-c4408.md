---
description: "Learn more about: Compiler Warning (level 4) C4408"
title: "Compiler Warning (level 4) C4408"
ms.date: "11/04/2016"
f1_keywords: ["C4408"]
helpviewer_keywords: ["C4408"]
ms.assetid: 8488a186-ed1d-425c-aaeb-c72472c1da68
---
# Compiler Warning (level 4) C4408

anonymousstruct or union did not declare any data members

An anonymous struct or union must have at least one data member.

The following sample generates C4408:

```cpp
// C4408.cpp
// compile with: /W4 /LD
static union
{
   // int i;
};
// a named union can have no data members
// } MyUnion;
```
