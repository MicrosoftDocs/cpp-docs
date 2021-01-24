---
description: "Learn more about: Compiler Error C2186"
title: "Compiler Error C2186"
ms.date: "11/04/2016"
f1_keywords: ["C2186"]
helpviewer_keywords: ["C2186"]
ms.assetid: 284bfb7e-ab85-4fcb-9864-1ddf7f6c94ae
---
# Compiler Error C2186

'operator' : illegal operand of type 'void'

The operator has a **`void`** operand.

The following sample generates C2186:

```cpp
// C2186.cpp
// compile with: /c
void func1( void );
int  func2( void );
int i = 2 + func1();   // C2186 func1() is type void
int j = 2 + func2();   // OK both operands are type int
```
