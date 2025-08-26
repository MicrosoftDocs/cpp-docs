---
title: "Compiler Warning (level 1) C4145"
description: "Learn more about: Compiler Warning (level 1) C4145"
ms.date: 11/04/2016
f1_keywords: ["C4145"]
helpviewer_keywords: ["C4145"]
---
# Compiler Warning (level 1) C4145

> 'expression1' : relational expression as switch expression; possible confusion with 'expression2'

## Remarks

A **`switch`** statement uses a relational expression as its control expression, which results in a Boolean value for the **`case`** statements. Did you mean *expression2*?

## Example

The following example generates C4145:

```cpp
// C4145.cpp
// compile with: /W1
int main() {
   int i = 0;
   switch(i == 1) {   // C4145, use i instead of i == 1 to resolve
      case 1:
         break;
      default:
         break;
   }
}
```
