---
title: "Compiler Error C2309"
description: "Learn more about: Compiler Error C2309"
ms.date: 11/04/2016
f1_keywords: ["C2309"]
helpviewer_keywords: ["C2309"]
---
# Compiler Error C2309

> catch handler expected a parenthesized exception declaration

## Remarks

A catch handler has no parenthesized type.

## Example

The following example generates C2309:

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
