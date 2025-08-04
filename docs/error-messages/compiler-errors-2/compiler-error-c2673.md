---
title: "Compiler Error C2673"
description: "Learn more about: Compiler Error C2673"
ms.date: 11/04/2016
f1_keywords: ["C2673"]
helpviewer_keywords: ["C2673"]
---
# Compiler Error C2673

> 'function' : global functions do not have 'this' pointers

## Remarks

A global function tried to access **`this`**.

## Example

The following example generates C2673:

```cpp
// C2673.cpp
int main() {
   this = 0;   // C2673
}
```
