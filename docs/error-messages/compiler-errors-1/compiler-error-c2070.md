---
title: "Compiler Error C2070"
description: "Learn more about: Compiler Error C2070"
ms.date: 11/04/2016
f1_keywords: ["C2070"]
helpviewer_keywords: ["C2070"]
---
# Compiler Error C2070

> 'type': illegal sizeof operand

## Remarks

The [sizeof](../../cpp/sizeof-operator.md) operator requires an expression or type name.

## Example

The following example generates C2070:

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
