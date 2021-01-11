---
description: "Learn more about: Compiler Error C2473"
title: "Compiler Error C2473"
ms.date: "11/04/2016"
f1_keywords: ["C2473"]
helpviewer_keywords: ["C2473"]
ms.assetid: 6bb7dbf5-b198-490f-860e-fd64d0c2a284
---
# Compiler Error C2473

'identifier' : looks like a function definition, but there is no parameter list.

The compiler detected what looked like a function, without the parameter list.

## Example

The following sample generates C2473.

```cpp
// C2473.cpp
// compile with: /clr /c
class A {
   int i {}   // C2473
};

class B {
   int i() {}   // OK
};
```
