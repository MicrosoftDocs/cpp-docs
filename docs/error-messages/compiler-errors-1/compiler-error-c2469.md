---
description: "Learn more about: Compiler Error C2469"
title: "Compiler Error C2469"
ms.date: "11/04/2016"
f1_keywords: ["C2469"]
helpviewer_keywords: ["C2469"]
ms.assetid: 3814bdff-581a-4d3e-8b47-8de6887cea69
---
# Compiler Error C2469

'operator': cannot allocate 'type' object

An operator was passed an invalid type.

The following sample generates C2469:

```cpp
// C2469.cpp
int main() {
   int *i = new void;   // C2469
   int *i = new int;   // OK
}
```
