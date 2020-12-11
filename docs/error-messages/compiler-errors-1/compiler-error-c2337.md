---
description: "Learn more about: Compiler Error C2337"
title: "Compiler Error C2337"
ms.date: "09/19/2019"
f1_keywords: ["C2337"]
helpviewer_keywords: ["C2337"]
ms.assetid: eccc9178-a15e-42cd-bbd0-3cea7cf2d55b
---
# Compiler Error C2337

> '*attribute-name*' : attribute not found

Your code uses an attribute that isn't supported in this context. Or, the attribute isn't available in this version of the compiler. To resolve this issue, remove the unsupported attribute.

The following sample generates C2337:

```cpp
// C2337.cpp
// compile with: /c
[emitidl];
[module(name="x")];
[grasshopper]   // C2337, not a supported attribute
class a{};
```
