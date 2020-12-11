---
description: "Learn more about: Compiler Error C2070"
title: "Compiler Error C2070"
ms.date: "11/04/2016"
f1_keywords: ["C2070"]
helpviewer_keywords: ["C2070"]
ms.assetid: 4c8dea63-1227-4aba-be26-2462537f86fb
---
# Compiler Error C2070

'type': illegal sizeof operand

The [sizeof](../../cpp/sizeof-operator.md) operator requires an expression or type name.

The following sample generates C2070:

```cpp
// C2070.cpp
void func() {}
int main() {
   int a;
   a = sizeof(func);   // C2070
}
```

Possible resolution:

```cpp
// C2070b.cpp
void func() {}
int main() {
   int a;
   a = sizeof(a);
}
```
