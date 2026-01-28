---
title: "Compiler Warning (level 1) C4185"
description: "Learn more about: Compiler Warning (level 1) C4185"
ms.date: 11/04/2016
f1_keywords: ["C4185"]
helpviewer_keywords: ["C4185"]
---
# Compiler Warning (level 1) C4185

> ignoring unknown #import attribute 'attribute'

## Remarks

The attribute is not a valid attribute of `#import`. It is ignored.

## Example

The following example generates C4185:

```cpp
// C4185.cpp
// compile with: /W1 /c
#import "stdole2.tlb" no_such_attribute   // C4185
```
