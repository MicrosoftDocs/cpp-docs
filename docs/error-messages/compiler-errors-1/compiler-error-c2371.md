---
title: "Compiler Error C2371"
description: "Learn more about: Compiler Error C2371"
ms.date: 11/04/2016
f1_keywords: ["C2371"]
helpviewer_keywords: ["C2371"]
---
# Compiler Error C2371

> 'identifier' : redefinition; different basic types

## Remarks

The identifier is already declared.

## Example

The following example generates C2371:

```cpp
// C2371.cpp
int main() {
   int i;
   float i;   // C2371, redefinition
   float f;   // OK
}
```
