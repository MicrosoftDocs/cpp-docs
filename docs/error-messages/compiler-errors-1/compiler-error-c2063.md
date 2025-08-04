---
title: "Compiler Error C2063"
description: "Learn more about: Compiler Error C2063"
ms.date: 11/04/2016
f1_keywords: ["C2063"]
helpviewer_keywords: ["C2063"]
---
# Compiler Error C2063

> 'identifier' : not a function

## Remarks

The identifier is used as a function but not declared as a function.

## Example

The following example generates C2063:

```c
// C2063.c
int main() {
   int i, j;
   j = i();    // C2063, i is not a function
}
```

Possible resolution:

```c
// C2063b.c
int i() { return 0;}
int main() {
   int j;
   j = i();
}
```
