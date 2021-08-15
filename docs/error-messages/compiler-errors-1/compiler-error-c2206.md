---
description: "Learn more about: Compiler Error C2206"
title: "Compiler Error C2206"
ms.date: "11/04/2016"
f1_keywords: ["C2206"]
helpviewer_keywords: ["C2206"]
ms.assetid: d7fba68b-aa28-4885-a9a0-27107358f066
---
# Compiler Error C2206

'function' : typedef cannot be used for function definition

A **`typedef`** is used to define a function type.

The following sample generates C2206:

```cpp
// C2206.cpp
typedef int functyp();
typedef int MyInt;
functyp func1 {};   // C2206
int main() {
   MyInt i = 0;   // OK
}
```
