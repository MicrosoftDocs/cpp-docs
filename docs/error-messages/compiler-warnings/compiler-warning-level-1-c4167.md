---
title: "Compiler Warning (level 1) C4167"
description: "Learn more about: Compiler Warning (level 1) C4167"
ms.date: 11/04/2016
f1_keywords: ["C4167"]
helpviewer_keywords: ["C4167"]
---
# Compiler Warning (level 1) C4167

> function : only available as an intrinsic function

## Remarks

The **#pragma function** tries to force the compiler to use a conventional call to a function that must be used in intrinsic form. The pragma is ignored.

To avoid this warning, remove the **#pragma function**.

## Example

The following example generates C4167:

```cpp
// C4167.cpp
// compile with: /W1
#include <malloc.h>
#pragma function(_alloca )   // C4167: _alloca() is intrinsic only
int main(){}
```
