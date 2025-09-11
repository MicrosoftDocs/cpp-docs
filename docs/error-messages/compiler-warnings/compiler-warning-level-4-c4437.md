---
title: "Compiler warning (level 1 and level 4, off) C4437"
description: "Learn more about: Compiler Warning (level 1 and level 4, off) C4437"
ms.date: 1/22/2025
f1_keywords: ["C4437"]
helpviewer_keywords: ["C4437"]
---
# Compiler warning (level 1 and level 4, off) C4437

> `dynamic_cast` from virtual base '*base_class*' to '*derived_class*' could fail in some contexts

## Remarks

This warning is off by default. For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).

A `dynamic_cast` operation is used when:

- The cast is from a base class pointer to a derived class pointer.
- The derived class virtually inherits the base class.
- The derived class doesn't have a `vtordisp` field for the virtual base.
- The cast is found in a constructor or destructor of the derived class, or a class that inherits from the derived class. Otherwise, compiler warning [C4436](compiler-warning-level-1-c4436.md) is emitted issued of C4435.

This warning indicates that the `dynamic_cast` might not perform correctly when applied to a partially constructed object. This situation occurs when the enclosing function is called from a constructor or destructor of a class that inherits from *derived_class*. You can ignore the error if *derived_class* is never further derived, or the enclosing function isn't called during object construction or destruction.

## Example

The following example generates C4437 and demonstrates the code generation issue that arises from the missing `vtordisp` field:

```cpp
// C4437.cpp
// To see the warning and runtime assert, compile with: /W4
// To eliminate the warning and assert, compile with: /W4 /vd2
//       or compile with: /W4 /DFIX
#pragma warning(default : 4437)
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
        func();
    }

    void func()
    {
        A* a = static_cast<A*>(this);
        B* b = dynamic_cast<B*>(a);     // C4437
        assert(this == b);              // assert unless compiled with /vd2
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
[Compiler Warning (level 1) C4436](compiler-warning-level-1-c4436.md)
