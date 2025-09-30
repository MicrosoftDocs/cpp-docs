---
title: "Compiler Error C2870"
description: "Learn more about: Compiler Error C2870"
ms.date: 11/04/2016
f1_keywords: ["C2870"]
helpviewer_keywords: ["C2870"]
---
# Compiler Error C2870

> 'name' : a namespace definition must appear either at file scope or immediately within another namespace definition

## Remarks

You defined namespace `name` incorrectly. Namespaces must be defined at file scope (outside all blocks and classes) or immediately within another namespace.

## Example

The following example generates C2870:

```cpp
// C2870.cpp
// compile with: /c
int main() {
   namespace A { int i; };   // C2870
}
```
