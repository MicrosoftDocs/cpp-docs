---
description: "Learn more about: Fatal Error C1094"
title: "Fatal Error C1094"
ms.date: "11/04/2016"
f1_keywords: ["C1094"]
helpviewer_keywords: ["C1094"]
ms.assetid: 9e1193b2-cb95-44f9-bf6f-019e0d41dd97
---
# Fatal Error C1094

'-Zmval1' : command line option is inconsistent with value used to build precompiled header ('-Zmval2')

The value that is passed to [/Yc](../../build/reference/yc-create-precompiled-header-file.md) must be the same value that is passed to [/Yu](../../build/reference/yu-use-precompiled-header-file.md) (**/Zm** values must be the same in all compilations that use or create the same precompiled header file).

The following sample generates C1094:

```
// C1094.h
int func1();
```

And then,

```cpp
// C1094.cpp
// compile with: /Yc"C1094.h" /Zm200
int u;
int main() {
   int sd = 32;
}
#include "C1094.h"
```

And then,

```cpp
// C1094b.cpp
// compile with: /Yu"C1094.h" /Zm300 /c
#include "C1094.h"   // C1094 compile with /Zm200
void Test() {}
```
