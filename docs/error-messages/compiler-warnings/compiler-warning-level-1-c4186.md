---
description: "Learn more about: Compiler Warning (level 1) C4186"
title: "Compiler Warning (level 1) C4186"
ms.date: "11/04/2016"
f1_keywords: ["C4186"]
helpviewer_keywords: ["C4186"]
ms.assetid: caf3f7d8-f305-426b-8d4e-2b96f5c269ea
---
# Compiler Warning (level 1) C4186

\#import attribute 'attribute' requires count arguments; ignored

A `#import` attribute has the wrong number of arguments.

## Example

```cpp
// C4186.cpp
// compile with: /W1 /c
#import "stdole2.tlb" no_namespace("abc") rename("a","b","c")  // C4186
```

The `no_namespace` attribute takes no arguments. The **rename** attribute takes only two arguments.
