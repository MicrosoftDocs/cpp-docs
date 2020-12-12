---
description: "Learn more about: Compiler Error C2094"
title: "Compiler Error C2094"
ms.date: "11/04/2016"
f1_keywords: ["C2094"]
helpviewer_keywords: ["C2094"]
ms.assetid: 9e4f8f88-f189-46e7-91c9-481bacc7af87
---
# Compiler Error C2094

label 'identifier' was undefined

The label used by a [goto](../../cpp/goto-statement-cpp.md) statement does not exist in the function.

## Example

The following sample generates C2094:

```cpp
// C2094.c
int main() {
   goto test;
}   // C2094
```

Possible resolution:

```cpp
// C2094b.c
int main() {
   goto test;
   test:
   {
   }
}
```
