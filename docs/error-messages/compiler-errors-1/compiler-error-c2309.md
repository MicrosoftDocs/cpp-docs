---
description: "Learn more about: Compiler Error C2309"
title: "Compiler Error C2309"
ms.date: "11/04/2016"
f1_keywords: ["C2309"]
helpviewer_keywords: ["C2309"]
ms.assetid: 6303d5b5-72cf-42b8-92ce-b1eb48e80d48
---
# Compiler Error C2309

catch handler expected a parenthesized exception declaration

A catch handler has no parenthesized type.

The following sample generates C2309:

```cpp
// C2309.cpp
// compile with: /EHsc
#include <eh.h>
class C {};
int main() {
   try {
      throw "ooops!";
   }
   catch C {}   // C2309
   // try the following line instead
   // catch( C ) {}
}
```
