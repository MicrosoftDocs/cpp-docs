---
description: "Learn more about: Compiler Error C2050"
title: "Compiler Error C2050"
ms.date: "11/04/2016"
f1_keywords: ["C2050"]
helpviewer_keywords: ["C2050"]
ms.assetid: 66aaed7d-00db-4ce1-a9d6-4447c1cf07ce
---
# Compiler Error C2050

switch expression not integral

The **`switch`** expression evaluates to a noninteger value. To resolve the error, use only integral values in switch statements.

The following sample generates C2050:

```cpp
// C2050.cpp
int main() {
   int a = 1;
   switch ("a") {   // C2050
      case 1:
         a = 0;
      default:
         a = 2;
   }
}
```

Possible resolution:

```cpp
// C2050b.cpp
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
