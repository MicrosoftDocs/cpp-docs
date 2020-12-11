---
description: "Learn more about: Compiler Error C3120"
title: "Compiler Error C3120"
ms.date: "11/04/2016"
f1_keywords: ["C3120"]
helpviewer_keywords: ["C3120"]
ms.assetid: 9b6b210f-9948-4517-a4cc-b4aaadebde68
---
# Compiler Error C3120

'method_name' : interface methods cannot take a variable argument list

An interface method cannot take a variable argument list. For example, the following interface definition generates C3120:

```cpp
// C3120.cpp
__interface A {
int X(int i, ...);    // C3120
};

int main(void) { return(0); }
```
