---
title: "Compiler Error C2647"
description: "Learn more about: Compiler Error C2647"
ms.date: 11/04/2016
f1_keywords: ["C2647"]
helpviewer_keywords: ["C2647"]
---
# Compiler Error C2647

> 'operator': cannot dereference a 'type1' on a 'type2'

## Remarks

The left operand of a pointer-to-member operator (`->*` or `.*`) cannot be implicitly converted to a type related to the right operator.

## Example

The following example generates C2647:

```cpp
// C2647.cpp
class C {};
class D {};

int main() {
   D d, *pd;
   C c, *pc = 0;
   int C::*pmc = 0;
   pd->*pmc = 0;   // C2647
   d.*pmc = 0;   // C2647

   // OK
   pc->*pmc = 0;
   c.*pmc = 0;
}
```
