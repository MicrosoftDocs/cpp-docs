---
title: "Compiler Error C2053"
description: "Learn more about: Compiler Error C2053"
ms.date: 11/04/2016
f1_keywords: ["C2053"]
helpviewer_keywords: ["C2053"]
---
# Compiler Error C2053

> 'identifier' : wide string mismatch

## Remarks

The wide string is assigned to an incompatible type.

## Example

The following example generates C2053:

```c
// C2053.c
int main() {
   char array[] = L"Rika";   // C2053
}
```
