---
description: "Learn more about: Compiler Warning (level 4) C4457"
title: "Compiler Warning (level 4) C4457"
ms.date: "11/04/2016"
f1_keywords: ["C4457"]
helpviewer_keywords: ["C4457"]
ms.assetid: 02fd149a-917d-4f67-97a6-eb714572271f
---
# Compiler Warning (level 4) C4457

> declaration of '*identifier*' hides function parameter

The declaration of *identifier* in the local scope hides the declaration of the identically-named function parameter. This warning lets you know that references to *identifier* in the local scope resolve to the locally declared version, not the parameter, which may or may not be your intent. To fix this issue, we recommend you give local variables names that do not conflict with parameter names.

## Example

The following sample generates C4457 because the parameter `x` and the local variable `x` in `member_fn` have the same names. To fix this issue, use different names for the parameters and local variables.

```cpp
// C4457_hide.cpp
// compile with: cl /W4 /c C4457_hide.cpp

struct S {
    void member_fn(unsigned x) {
        double a = 0;
        for (int x = 0; x < 10; ++x) {  // C4457
            a += x; // uses local x
        }
        a += x; // uses parameter x
    }
} s;
```
