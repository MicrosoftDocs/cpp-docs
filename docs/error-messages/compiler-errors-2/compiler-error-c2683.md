---
title: "Compiler Error C2683"
description: "Learn more about: Compiler Error C2683"
ms.date: 11/04/2016
f1_keywords: ["C2683"]
helpviewer_keywords: ["C2683"]
---
# Compiler Error C2683

> 'cast' : 'type' is not a polymorphic type

## Remarks

You cannot use [dynamic_cast](../../cpp/dynamic-cast-operator.md) to convert from a non-polymorphic class (a class with no virtual functions).

You can use [static_cast](../../cpp/static-cast-operator.md) to perform conversions of non-polymorphic types. However, **`static_cast`** does not perform a run-time check.

## Example

The following example generates C2683:

```cpp
// C2683.cpp
// compile with: /c
class B { };
class D : public B { };

void f(B* pb) {
   D* pd1 = dynamic_cast<D*>(pb);  // C2683
   D* pd1 = static_cast<D*>(pb);   // OK
}
```
