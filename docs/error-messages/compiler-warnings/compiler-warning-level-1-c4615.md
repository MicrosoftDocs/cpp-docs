---
description: "Learn more about: Compiler Warning (level 1) C4615"
title: "Compiler Warning (level 1) C4615"
ms.date: "11/04/2016"
f1_keywords: ["C4615"]
helpviewer_keywords: ["C4615"]
ms.assetid: 7b107c01-0da2-4e01-8b40-93813e30b94c
---
# Compiler Warning (level 1) C4615

\#pragma warning : unknown user warning type

An invalid warning specifier was used with **pragma** [warning](../../preprocessor/warning.md). To resolve the error, use a valid warning specifier.

The following sample generates C4615:

```cpp
// C4615.cpp
// compile with: /W1 /LD
#pragma warning(enable : 4401)   // C4615, 'enable' not valid specifier

// use the code below to resolve the error
// #pragma warning(default : 4401)
```
