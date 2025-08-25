---
title: "Compiler Warning (level 1) C4080"
description: "Learn more about: Compiler Warning (level 1) C4080"
ms.date: 11/04/2016
f1_keywords: ["C4080"]
helpviewer_keywords: ["C4080"]
---
# Compiler Warning (level 1) C4080

> expected identifier for segment name; found 'symbol'

## Remarks

The name of the segment in [#pragma alloc_text](../../preprocessor/alloc-text.md) must be a string or an identifier. The compiler ignores the pragma if a valid identifier is not found.

## Example

The following example generates C4080:

```cpp
// C4080.cpp
// compile with: /W1
extern "C" void func(void);

#pragma alloc_text()   // C4080

// try this line to resolve the warning
// #pragma alloc_text("mysection", func)

int main() {
}

void func(void) {
}
```
