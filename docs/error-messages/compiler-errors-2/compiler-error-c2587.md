---
title: "Compiler Error C2587"
description: "Learn more about: Compiler Error C2587"
ms.date: 11/04/2016
f1_keywords: ["C2587"]
helpviewer_keywords: ["C2587"]
---
# Compiler Error C2587

> 'identifier' : illegal use of local variable as default parameter

## Remarks

Local variables are not allowed as default parameters.

## Example

The following example generates C2587:

```cpp
// C2587.cpp
// compile with: /c
int i;
void func() {
   int j;
   extern void func2( int k = j );  // C2587 -- local variable
   extern void func3( int k = i );   // OK
}
```
