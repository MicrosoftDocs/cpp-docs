---
description: "Learn more about: Compiler Warning (level 1) C4068"
title: "Compiler Warning (level 1) C4068"
ms.date: "11/04/2016"
f1_keywords: ["C4068"]
helpviewer_keywords: ["C4068"]
ms.assetid: 96a7397a-4eab-44ab-b3bb-36747503f7e5
---
# Compiler Warning (level 1) C4068

unknown pragma

The compiler ignored an unrecognized [pragma](../../preprocessor/pragma-directives-and-the-pragma-keyword.md). Be sure the **pragma** is allowed by the compiler you are using. The following sample generates C4068:

```cpp
// C4068.cpp
// compile with: /W1
#pragma NotAValidPragmaName   // C4068, use valid name to resolve
int main()
{
}
```
