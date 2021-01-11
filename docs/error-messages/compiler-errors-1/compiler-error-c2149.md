---
description: "Learn more about: Compiler Error C2149"
title: "Compiler Error C2149"
ms.date: "11/04/2016"
f1_keywords: ["C2149"]
helpviewer_keywords: ["C2149"]
ms.assetid: 7a106dab-d79f-41b9-85be-f36e86e4d2ab
---
# Compiler Error C2149

'identifier' : named bit field cannot have zero width

Bit fields can have zero width only if unnamed.

The following sample generates C2149:

```cpp
// C2149.cpp
// compile with: /c
struct C {
   int i : 0;   // C2149
   int j : 2;   // OK
};
```
