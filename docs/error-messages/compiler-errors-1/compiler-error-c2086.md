---
description: "Learn more about: Compiler Error C2086"
title: "Compiler Error C2086"
ms.date: "11/04/2016"
f1_keywords: ["C2086"]
helpviewer_keywords: ["C2086"]
ms.assetid: 4329bf72-90c8-444c-8524-4ef75e6b2139
---
# Compiler Error C2086

'identifier' : redefinition

The identifier is defined more than once, or a subsequent declaration differs from a previous one.

C2086 can also be the result of incremental building for a referenced C# assembly. Rebuild the C# assembly to resolve this error.

The following sample generates C2086:

```cpp
// C2086.cpp
main() {
  int a;
  int a;   // C2086 not an error in ANSI C
}
```
