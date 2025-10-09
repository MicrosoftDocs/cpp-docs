---
title: "Compiler Error C2267"
description: "Learn more about: Compiler Error C2267"
ms.date: 11/04/2016
f1_keywords: ["C2267"]
helpviewer_keywords: ["C2267"]
---
# Compiler Error C2267

> 'function' : static functions with block scope are illegal

## Remarks

A local function is declared **`static`**. Static functions must have global scope.

## Example

The following example generates C2267:

```cpp
// C2267.cpp
static int func2();   // OK
int main() {
    static int func1();   // C2267
}
```
