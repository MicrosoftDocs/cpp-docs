---
description: "Learn more about: Compiler Error C2162"
title: "Compiler Error C2162"
ms.date: "11/04/2016"
f1_keywords: ["C2162"]
helpviewer_keywords: ["C2162"]
ms.assetid: 34923628-d35e-48ab-9072-b95e3b5f6b45
---
# Compiler Error C2162

expected macro formal parameter

The token following a stringizing operator (#) is not a formal parameter name.

## Example

The following sample generates C2162:

```cpp
// C2162.cpp
// compile with: /c
#include <stdio.h>

#define print(a) printf_s(b)   // OK
#define print(a) printf_s(#b)    // C2162
```
