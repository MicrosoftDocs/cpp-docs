---
description: "Learn more about: Compiler Error C2652"
title: "Compiler Error C2652"
ms.date: "11/04/2016"
f1_keywords: ["C2652"]
helpviewer_keywords: ["C2652"]
ms.assetid: 6e3d1a90-a989-4088-8afd-dc82f6a2d66f
---
# Compiler Error C2652

'identifier' : illegal copy constructor: first parameter must not be an 'identifier'

The first parameter in the copy constructor has the same type as the class, structure, or union for which it is defined. The first parameter can be a reference to the type but not the type itself.

The following sample generates C2651:

```cpp
// C2652.cpp
// compile with: /c
class A {
   A( A );   // C2652 takes an A
};
class B {
   B( B& );   // OK, reference to B
};
```
