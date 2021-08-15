---
description: "Learn more about: Compiler Error C2052"
title: "Compiler Error C2052"
ms.date: "11/04/2016"
f1_keywords: ["C2052"]
helpviewer_keywords: ["C2052"]
ms.assetid: 922ca43b-b64b-4ef7-9611-c7313be3fd79
---
# Compiler Error C2052

'type' : illegal type for case expression

Case expressions must be integer constants.

The following sample generates C2052:

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
