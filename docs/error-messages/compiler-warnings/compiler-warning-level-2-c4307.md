---
title: "Compiler Warning (level 2) C4307"
description: "Learn more about: Compiler Warning (level 2) C4307"
ms.date: 11/04/2016
f1_keywords: ["C4307"]
helpviewer_keywords: ["C4307"]
---
# Compiler Warning (level 2) C4307

> 'operator' : signed integral constant overflow

## Remarks

The operator is used in an expression that results in an integer constant overflowing the space allocated for it. You may need to use a larger type for the constant. A **`signed int`** holds a smaller value than an **`unsigned int`** because the **`signed int`** uses one bit to represent the sign.

## Example

The following example generates C4307:

```cpp
// C4307.cpp
// compile with: /W2
int i = 2000000000 + 2000000000;   // C4307
int j = (unsigned)2000000000 + 2000000000;   // OK

int main()
{
}
```
