---
description: "Learn more about: Compiler Warning (level 1) C4085"
title: "Compiler Warning (level 1) C4085"
ms.date: "11/04/2016"
f1_keywords: ["C4085"]
helpviewer_keywords: ["C4085"]
ms.assetid: 2bc6eb25-058f-4597-b351-fd69587b5170
---
# Compiler Warning (level 1) C4085

expected pragma parameter to be 'on' or 'off'

The pragma requires an **on** or **off** parameter. The pragma is ignored.

The following sample generates C4085:

```cpp
// C4085.cpp
// compile with: /W1 /LD
#pragma optimize( "t", maybe )  // C4085
```
