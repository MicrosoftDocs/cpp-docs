---
title: "Compiler Error C2750"
description: "Learn more about: Compiler Error C2750"
ms.date: 11/04/2016
f1_keywords: ["C2750"]
helpviewer_keywords: ["C2750"]
---
# Compiler Error C2750

> 'type' : cannot use 'new' on the reference type; use 'gcnew' instead

## Remarks

To create an instance of a CLR type, which causes the instance to be placed on the garbage-collected heap, you must use [gcnew](../../extensions/ref-new-gcnew-cpp-component-extensions.md).

## Example

The following example generates C2750:

```cpp
// C2750.cpp
// compile with: /clr
ref struct Y1 {};

int main() {
   Y1 ^ x = new Y1;   // C2750

   // try the following line instead
   Y1 ^ x2 = gcnew Y1;
}
```
