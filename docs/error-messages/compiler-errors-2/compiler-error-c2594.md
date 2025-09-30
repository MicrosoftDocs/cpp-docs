---
title: "Compiler Error C2594"
description: "Learn more about: Compiler Error C2594"
ms.date: 11/04/2016
f1_keywords: ["C2594"]
helpviewer_keywords: ["C2594"]
---
# Compiler Error C2594

> 'operator' : ambiguous conversions from 'type1' to 'type2'

## Remarks

No conversion from *type1* to *type2* was more direct than any other. We suggest two possible solutions to converting from *type1* to *type2*. The first option is to define a direct conversion from *type1* to *type2*, and the second option is to specify a sequence of conversions from *type1* to *type2*.

## Example

The following example generates C2594. The suggested resolution to the error is a sequence of conversions:

```cpp
// C2594.cpp
// compile with: /c
struct A{};
struct I1 : A {};
struct I2 : A {};
struct D : I1, I2 {};

A *f (D *p) {
   return (A*) (p);    // C2594

// try the following line instead
// return static_cast<A *>(static_cast<I1 *>(p));
}
```
