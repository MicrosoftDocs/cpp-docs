---
title: "Compiler Error C2206"
description: "Learn more about: Compiler Error C2206"
ms.date: 11/04/2016
f1_keywords: ["C2206"]
helpviewer_keywords: ["C2206"]
---
# Compiler Error C2206

> 'function' : typedef cannot be used for function definition

## Remarks

A **`typedef`** is used to define a function type.

## Example

The following example generates C2206:

```cpp
// C2206.cpp
typedef int functyp();
typedef int MyInt;
functyp func1 {};   // C2206
int main() {
   MyInt i = 0;   // OK
}
```
