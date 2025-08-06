---
description: "Learn more about: Compiler Error C2751"
title: "Compiler Error C2751"
ms.date: "03/11/2024"
f1_keywords: ["C2751"]
helpviewer_keywords: ["C2751"]
---
# Compiler Error C2751

> 'parameter' : the name of a function parameter cannot be qualified

You cannot use a qualified name as a function parameter.

The following sample generates C2751:

```cpp
// C2751.cpp
// compile with: /c
namespace NS
{
    class C {};
}

void func(int NS::C) {}   // C2751
```
