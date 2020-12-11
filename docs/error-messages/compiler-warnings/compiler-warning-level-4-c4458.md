---
description: "Learn more about: Compiler Warning (level 4) C4458"
title: "Compiler Warning (level 4) C4458"
ms.date: "11/04/2016"
f1_keywords: ["C4458"]
helpviewer_keywords: ["C4458"]
ms.assetid: 7bdaa1b1-0caf-4d68-98c4-6bdd441c23fb
---
# Compiler Warning (level 4) C4458

> declaration of '*identifier*' hides class member

The declaration of *identifier* in the local scope hides the declaration of the identically-named *identifier* at class scope. This warning lets you know that references to *identifier* in this scope resolve to the locally declared version, not the class member version, which may or may not be your intent. To fix this issue, we recommend you give local variables names that do not conflict with class member names.

## Example

The following sample generates C4458 because the parameter `x` and the local variable `y` in `member_fn` have the same names as data members in the class. To fix this issue, use different names for the parameters and local variables.

```cpp
// C4458_hide.cpp
// compile with: cl /W4 /c C4458_hide.cpp

struct S {
    int x;
    float y;
    void member_fn(long x) {   // C4458
        double y;  // C4458
        y = x;
        // To fix this issue, change the parameter name x
        // and local name y to something that does not
        // conflict with the data member names.
    }
} s;
```
