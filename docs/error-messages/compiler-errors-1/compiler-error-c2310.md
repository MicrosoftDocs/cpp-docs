---
title: "Compiler Error C2310"
description: "Learn more about: Compiler Error C2310"
ms.date: 11/04/2016
f1_keywords: ["C2310"]
helpviewer_keywords: ["C2310"]
---
# Compiler Error C2310

> catch handlers must specify one type

## Remarks

A catch handler specified no type or multiple types.

## Example

The following example generates C2310:

```cpp
// C2310.cpp
// compile with: /EHsc
#include <eh.h>
int main() {
   try {
      throw "Out of memory!";
   }
   catch( int ,int) {}   // C2310 two types
   // try the following line instead
   // catch( int)  {}
}
```
