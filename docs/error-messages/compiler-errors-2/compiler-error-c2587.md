---
description: "Learn more about: Compiler Error C2587"
title: "Compiler Error C2587"
ms.date: "11/04/2016"
f1_keywords: ["C2587"]
helpviewer_keywords: ["C2587"]
ms.assetid: 7637a2c7-35d4-4b5a-a8f2-515a7bda98fd
---
# Compiler Error C2587

'identifier' : illegal use of local variable as default parameter

Local variables are not allowed as default parameters.

The following sample generates C2587:

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
