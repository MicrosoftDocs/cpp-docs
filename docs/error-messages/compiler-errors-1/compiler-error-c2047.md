---
title: "Compiler Error C2047"
description: "Learn more about: Compiler Error C2047"
ms.date: 11/04/2016
f1_keywords: ["C2047"]
helpviewer_keywords: ["C2047"]
---
# Compiler Error C2047

> illegal default

## Remarks

The keyword **`default`** can appear only in a **`switch`** statement.

## Example

The following example generates C2047:

```cpp
// C2047.cpp
int main() {
   int i = 0;
   default:   // C2047
   switch(i) {
      case 0:
      break;
   }
}
```

Possible resolution:

```cpp
// C2047b.cpp
int main() {
   int i = 0;
   switch(i) {
      case 0:
      break;
      default:
      break;
   }
}
```
