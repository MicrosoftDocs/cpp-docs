---
title: "Compiler warning (level 1 and level 4) C4436"
description: "Learn more about: Compiler Warning (level 1 and level 4) C4436"
ms.date: 1/22/2025
f1_keywords: ["C4436"]
helpviewer_keywords: ["C4436"]
---
# Compiler warning (level 1) C4436

> `dynamic_cast` from virtual base '*base_class*' to '*derived_class*' in constructor or destructor could fail with partially-constructed object

## Remarks

A `dynamic_cast` operation is used when:

- The cast is from a base class pointer to a derived class pointer.
- The derived class virtually inherits the base class.
- The derived class doesn't have a `vtordisp` field for the virtual base.
- The cast is found in a constructor or destructor of the derived class, or a class that inherits from the derived class.

This warning indicates that the `dynamic_cast` might not perform correctly if it is applied to a partially constructed object. Which happens if the derived constructor/destructor is operating on a subobject of some further derived object. If the derived class named in the warning isn't further derived, you can ignore the warning.

## Example

The following example generates C4436 and demonstrates the code generation issue due to the missing `vtordisp` field:

```cpp
// C4436.cpp
// To see the warning and runtime assert, compile with: /W1
// To eliminate the warning and assert, compile with: /W1 /vd2 
//       or compile with: /W1 /DFIX
#include <cassert>

struct A
{
public:
    virtual ~A() {}
};

#if defined(FIX)
#pragma vtordisp(push, 2)
#endif
struct B : virtual A
{
    B()
    {
        A* a = static_cast<A*>(this);
        B* b = dynamic_cast<B*>(a);     // C4436
        assert(this == b);              // asserts unless compiled with /vd2
    }
};
#if defined(FIX)
#pragma vtordisp(pop)
#endif

struct C : B
{
    int i;
};

int main()
{
    C c;
}
```

## See also

[`dynamic_cast` Operator](../../cpp/dynamic-cast-operator.md)\
[`vtordisp`](../../preprocessor/vtordisp.md)\
[Compiler Warning (level 1 and level 4, off) C4437](compiler-warning-level-4-c4437.md)
