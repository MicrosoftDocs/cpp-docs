---
title: "Compiler Error C3120"
description: "Learn more about: Compiler Error C3120"
ms.date: 11/04/2016
f1_keywords: ["C3120"]
helpviewer_keywords: ["C3120"]
---
# Compiler Error C3120

> 'method_name' : interface methods cannot take a variable argument list

## Remarks

An interface method cannot take a variable argument list.

## Example

For example, the following interface definition generates C3120:

```cpp
// C3120.cpp
__interface A {
int X(int i, ...);    // C3120
};

int main(void) { return(0); }
```
