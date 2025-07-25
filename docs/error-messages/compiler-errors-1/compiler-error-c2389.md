---
title: "Compiler Error C2389"
description: "Learn more about: Compiler Error C2389"
ms.date: 11/04/2016
f1_keywords: ["C2389"]
helpviewer_keywords: ["C2389"]
---
# Compiler Error C2389

> 'operator' : illegal operand 'nullptr'

## Remarks

**`nullptr`** cannot be an operand.

## Example

The following example generates C2389:

```cpp
// C2389.cpp
// compile with: /clr
int main() {
   throw nullptr;   // C2389
}
```
