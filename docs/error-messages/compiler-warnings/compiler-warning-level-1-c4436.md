---
description: "Learn more about: Compiler Warning (level 1) C4436"
title: "Compiler Warning (level 1) C4436"
ms.date: "11/04/2016"
f1_keywords: ["C4436"]
helpviewer_keywords: ["C4436"]
ms.assetid: 2b54a1fc-c9c6-4cc9-90be-faa44fc715d5
---
# Compiler Warning (level 1) C4436

dynamic_cast from virtual base 'class1' to 'class2' in constructor or destructor could fail with partially-constructed object        Compile with /vd2 or define 'class2' with #pragma vtordisp(2) in effect

The compiler has encountered a **`dynamic_cast`** operation with the following characteristics.

- The cast is from a base class pointer to a derived class pointer.

- The derived class virtually inherits the base class.

- The derived class does not have a `vtordisp` field for the virtual base.

- The cast is found in a constructor or destructor of the derived class, or some class which further inherits from the derived class.

The warning indicates the **`dynamic_cast`** might not perform correctly, if it is operating on a partially-constructed object.  That happens if the derived constructor/destructor is operating on a sub-object of some further derived object.  If the derived class named in the warning is never further derived, the warning can be ignored.

## Example

The following sample generates C4436 and demonstrates the code generation issue that arises from the missing `vtordisp` field.

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

[dynamic_cast Operator](../../cpp/dynamic-cast-operator.md)<br/>
[vtordisp](../../preprocessor/vtordisp.md)<br/>
[Compiler Warning (level 4) C4437](../../error-messages/compiler-warnings/compiler-warning-level-4-c4437.md)
