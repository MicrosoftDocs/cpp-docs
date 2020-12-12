---
description: "Learn more about: Compiler Warning (level 1) C4163"
title: "Compiler Warning (level 1) C4163"
ms.date: "11/04/2016"
f1_keywords: ["C4163"]
helpviewer_keywords: ["C4163"]
ms.assetid: b08413fd-03fc-4f41-9167-a98976ac12f2
---
# Compiler Warning (level 1) C4163

'identifier' : not available as an intrinsic function

The specified function cannot be used as an [intrinsic](../../preprocessor/intrinsic.md) function. The compiler ignores the invalid function name.

The following sample generates C4163:

```cpp
// C4163.cpp
// compile with: /W1 /LD
#include <math.h>
#pragma intrinsic(mysin)   // C4163
// try the following line instead
// #pragma intrinsic(sin)
```
