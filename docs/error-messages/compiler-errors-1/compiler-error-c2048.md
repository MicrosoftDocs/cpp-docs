---
title: "Compiler Error C2048"
description: "Learn more about: Compiler Error C2048"
ms.date: 11/04/2016
f1_keywords: ["C2048"]
helpviewer_keywords: ["C2048"]
---
# Compiler Error C2048

> more than one default

## Remarks

A **`switch`** statement contains multiple **`default`** labels. Delete one of the **`default`** labels to resolve the error.

## Example

The following example generates C2048:

```cpp
// C2048.cpp
int main() {
   int a = 1;
   switch (a) {
      case 1:
         a = 0;
      default:
         a = 2;
      default:   // C2048
         a = 3;
   }
}
```

Possible resolution:

```cpp
// C2048b.cpp
int main() {
   int a = 1;
   switch (a) {
      case 1:
         a = 0;
      default:
         a = 2;
   }
}
```
