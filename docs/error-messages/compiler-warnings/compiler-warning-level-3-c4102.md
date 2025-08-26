---
title: "Compiler Warning (level 3) C4102"
description: "Learn more about: Compiler Warning (level 3) C4102"
ms.date: 11/04/2016
f1_keywords: ["C4102"]
helpviewer_keywords: ["C4102"]
---
# Compiler Warning (level 3) C4102

> 'label' : unreferenced label

## Remarks

The label is defined but never referenced. The compiler ignores the label.

## Example

The following example generates C4102:

```cpp
// C4102.cpp
// compile with: /W3
int main() {
   int a;

   test:   // C4102, remove the unreferenced label to resolve

   a = 1;
}
```
