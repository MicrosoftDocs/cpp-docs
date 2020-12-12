---
description: "Learn more about: Compiler Warning (level 4) C4515"
title: "Compiler Warning (level 4) C4515"
ms.date: "11/04/2016"
f1_keywords: ["C4515"]
helpviewer_keywords: ["C4515"]
ms.assetid: 167b5177-3f89-418b-b6c8-7de634f6b28f
---
# Compiler Warning (level 4) C4515

'namespace' : namespace uses itself

A namespace is used recursively.

The following sample generates C4515:

```cpp
// C4515.cpp
// compile with: /W4
namespace A
{
   using namespace A; // C4515
}

int main()
{
}
```
