---
title: "Compiler Error C2462"
description: "Learn more about: Compiler Error C2462"
ms.date: 11/04/2016
f1_keywords: ["C2462"]
helpviewer_keywords: ["C2462"]
---
# Compiler Error C2462

> 'identifier' : cannot define a type in a 'new-expression'

## Remarks

You cannot define a type in the operand field of the **`new`** operator. Put the type definition in a separate statement.

## Example

The following example generates C2462:

```cpp
// C2462.cpp
int main()
{
   new struct S { int i; };   // C2462
}
```
