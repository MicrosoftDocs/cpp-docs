---
description: "Learn more about: Compiler Error C2075"
title: "Compiler Error C2075"
ms.date: "11/04/2016"
f1_keywords: ["C2075"]
helpviewer_keywords: ["C2075"]
ms.assetid: 8b1865d2-540b-4117-b982-e7a58a0b6cf7
---
# Compiler Error C2075

'identifier' : array initialization needs curly braces

There were no curly braces around the specified array initializer.

The following sample generates C2075:

```c
// C2075.c
int main() {
   int i[] = 1, 2, 3 };   // C2075
}
```

Possible resolution:

```c
// C2075b.c
int main() {
   int j[] = { 1, 2, 3 };
}
```
