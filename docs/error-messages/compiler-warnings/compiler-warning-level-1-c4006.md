---
title: "Compiler Warning (level 1) C4006"
description: "Learn more about: Compiler Warning (level 1) C4006"
ms.date: 11/04/2016
f1_keywords: ["C4006"]
helpviewer_keywords: ["C4006"]
---
# Compiler Warning (level 1) C4006

> #undef expected an identifier

## Remarks

The `#undef` directive did not specify an identifier to undefine. The directive is ignored. To resolve the warning, be sure to specify an identifier.

## Example

The following example generates C4006:

```cpp
// C4006.cpp
// compile with: /W1
#undef   // C4006

// try..
// #undef TEST

int main() {
}
```
