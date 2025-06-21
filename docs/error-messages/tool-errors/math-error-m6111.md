---
title: "Math Error M6111"
description: "Learn more about: Math Error M6111"
ms.date: 11/04/2016
f1_keywords: ["M6111"]
helpviewer_keywords: ["M6111"]
---
# Math Error M6111

stack underflow

A floating-point operation resulted in a stack underflow on the 8087/287/387 coprocessor or the emulator.

This error is often caused by a call to a **`long double`** function that does not return a value. For example, the following generates this error when compiled and run:

```c
long double ld() {};
int main ()
{
  ld();
}
```

Program terminates with exit code 139.
