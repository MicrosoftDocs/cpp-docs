---
title: "Compiler Warning (level 1) C4020"
description: "Learn more about: Compiler Warning (level 1) C4020"
ms.date: 11/04/2016
f1_keywords: ["C4020"]
helpviewer_keywords: ["C4020"]
---
# Compiler Warning (level 1) C4020

> 'function' : too many actual parameters

## Remarks

The number of actual parameters in a function call exceeds the number of formal parameters in the function prototype or definition. The compiler passes the extra actual parameters according to the calling convention of the function.

## Example

The following example generates C4020:

```c
// C4020.c
// compile with: /W1 /c
void f(int);
int main() {
   f(1,2);   // C4020
}
```

Possible resolution:

```c
// C4020b.c
// compile with: /c
void f(int);
int main() {
   f(1);
}
```
