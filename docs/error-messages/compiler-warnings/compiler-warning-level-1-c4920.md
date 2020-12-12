---
description: "Learn more about: Compiler Warning (level 1) C4920"
title: "Compiler Warning (level 1) C4920"
ms.date: "11/04/2016"
f1_keywords: ["C4920"]
helpviewer_keywords: ["C4920"]
ms.assetid: 1e501f2e-93c1-4d27-a4fa-54fc86271ae7
---
# Compiler Warning (level 1) C4920

enum enum member member=value already seen in enum enum as member=value

If a .tlb that you pass to #import has the same symbol defined in two or more enums, this warning indicates that subsequent identical symbols are ignored and will be commented out in the .tlh file.

Assuming a .tlb that contains:

```
library MyLib
{
    typedef enum {
        enumMember = 512
    } AProblem;

    typedef enum {
        enumMember = 1024
    } BProblem;
};
```

the following samples generates C4920,

```cpp
// C4920.cpp
// compile with: /W1
#import "t4920.tlb"   // C4920

int main() {
}
```
