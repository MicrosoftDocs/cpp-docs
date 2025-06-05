---
title: "Compiler Error C2574"
description: "Learn more about: Compiler Error C2574"
ms.date: 06/04/2025
f1_keywords: ["C2574"]
helpviewer_keywords: ["C2574"]
---
# Compiler Error C2574

> '*function*': cannot be declared static

## Remarks

Neither [constructors](../../cpp/constructors-cpp.md) nor [destructors](../../cpp/destructors-cpp.md) can be declared **`static`**.

## Example

The following example generates C2574:

```cpp
// C2574.cpp
// compile with: /c
struct S
{
    static S() {}   // C2574

    // Try the following line instead:
    // S() {}
};
```
