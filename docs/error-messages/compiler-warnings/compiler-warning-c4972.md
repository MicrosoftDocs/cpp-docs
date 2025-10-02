---
title: "Compiler Warning C4972"
description: "Learn more about: Compiler Warning C4972"
ms.date: 11/04/2016
f1_keywords: ["C4972"]
helpviewer_keywords: ["C4972"]
---
# Compiler Warning C4972

> Directly modifying or treating the result of an unbox operation as an lvalue is unverifiable

## Remarks

Dereferencing a handle to a value type, also known as unboxing, and then assigning to it is not verifiable.

For more information, see [Boxing](../../extensions/boxing-cpp-component-extensions.md).

## Example

The following example generates C4972.

```cpp
// C4972.cpp
// compile with: /clr:safe
using namespace System;
ref struct R {
   int ^ p;   // a value type
};

int main() {
   R ^ r = gcnew R;
   *(r->p) = 10;   // C4972

   // OK
   r->p = 10;
   Console::WriteLine( r->p );
   Console::WriteLine( *(r->p) );
}
```
