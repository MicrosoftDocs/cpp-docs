---
title: "Compiler Error C2428"
description: "Learn more about: Compiler Error C2428"
ms.date: 11/04/2016
f1_keywords: ["C2428"]
helpviewer_keywords: ["C2428"]
---
# Compiler Error C2428

> 'operation' : not allowed on operand of type 'bool'

## Remarks

You cannot apply a decrement operator to objects of type **`bool`**.

## Example

The following example generates C2428:

```cpp
// C2428.cpp
void g(bool fFlag) {
   --fFlag;   // C2428
   fFlag--;   // C2428
}
```
