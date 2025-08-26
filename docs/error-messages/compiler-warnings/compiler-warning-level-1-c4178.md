---
description: "Learn more about: Compiler Warning (level 1) C4178"
title: "Compiler Warning (level 1) C4178"
ms.date: "03/06/2024"
f1_keywords: ["C4178"]
helpviewer_keywords: ["C4178"]
---
# Compiler Warning (level 1) C4178

> case constant 'constant' too big for the type of the switch expression

A case constant in a **`switch`** expression does not fit in the type to which it is assigned.

## Example

```cpp
// C4178.cpp
// compile with: /W1 /permissive
int main()
{
    unsigned int u = 1;
    switch (u)
    {
    case 4294967295:   // OK, maximum value for type unsigned int
        break;
    case 4294967296:   // C4178, exceeded maximum value
        break;
    }
}
```
