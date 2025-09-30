---
title: "Compiler Error C2052"
description: "Learn more about: Compiler Error C2052"
ms.date: 11/04/2016
f1_keywords: ["C2052"]
helpviewer_keywords: ["C2052"]
---
# Compiler Error C2052

> 'type' : illegal type for case expression

## Remarks

Case expressions must be integer constants.

## Example

The following example generates C2052:

```cpp
// C2052.cpp
int main() {
   int index = 0;
   switch (index) {
      case 1:
         return 24;
      case 1.0:   // C2052
      // try the following line instead
      // case 2:
         return 23;
   }
}
```
