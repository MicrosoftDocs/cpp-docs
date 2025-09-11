---
title: "Compiler Error C2627"
description: "Learn more about: Compiler Error C2627"
ms.date: 11/04/2016
f1_keywords: ["C2627"]
helpviewer_keywords: ["C2627"]
---
# Compiler Error C2627

> 'function' : member function not allowed in anonymous union

## Remarks

An [anonymous union](../../cpp/unions.md#anonymous_unions) cannot have member functions.

## Example

The following example generates C2627:

```cpp
// C2627.cpp
int main() {
   union { void f(){} };   // C2627
   union X { void f(){} };
}
```
