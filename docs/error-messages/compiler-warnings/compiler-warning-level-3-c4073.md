---
title: "Compiler Warning (level 3) C4073"
description: "Learn more about: Compiler Warning (level 3) C4073"
ms.date: 11/04/2016
f1_keywords: ["C4073"]
helpviewer_keywords: ["C4073"]
---
# Compiler Warning (level 3) C4073

> initializers put in library initialization area

## Remarks

Only third-party library developers should use the library initialization area, which is specified by [#pragma init_seg](../../preprocessor/init-seg.md).

## Example

The following example generates C4073:

```cpp
// C4073.cpp
// compile with: /W3
#pragma init_seg(lib)   // C4073

// try this line to resolve the warning
// #pragma init_seg(user)

int main() {
}
```
