---
description: "Learn more about: Compiler Warning (level 1) C4600"
title: "Compiler Warning (level 1) C4600"
ms.date: "11/04/2016"
f1_keywords: ["C4600"]
helpviewer_keywords: ["C4600"]
ms.assetid: f023a2a1-7fc4-463f-a434-dc93fcd3f4e9
---
# Compiler Warning (level 1) C4600

\#pragma 'macro name' : expected a valid non-empty string

You cannot specify an empty string when you push or pop a macro name with either the [pop_macro](../../preprocessor/pop-macro.md) or [push_macro](../../preprocessor/push-macro.md).

The following sample generates C4600:

```cpp
// C4600.cpp
// compile with: /W1
int main()
{
   #pragma push_macro("")   // C4600 passing an empty string
}
```
