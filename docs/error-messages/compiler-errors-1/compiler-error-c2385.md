---
title: "Compiler Error C2385"
description: "Learn more about: Compiler Error C2385"
ms.date: 1/19/2024
f1_keywords: ["C2385"]
helpviewer_keywords: ["C2385"]
---
# Compiler Error C2385

> ambiguous access of 'member'

## Remarks

A member is inherited from more than one base type, making unqualified access to that member ambiguous. To resolve this error:

- Explicitly qualify access to the member.
- Cast the object to the base class containing the member before accessing the member.
- Rename the ambiguous member in the base class.
- Bring the member into scope.

## Example

The following example generates C2385:

```cpp
// C2385.cpp
struct A
{
    void func1(int i) {}
    void func2() {}
};

struct B
{
    void func1(char c) {}
    void func2() {}
};

struct C : A, B
{
    // Uncomment the following lines to resolve the first 2 errors
    // The error below for the call to c.func2() will remain
    // using A::func1;
    // using B::func1;
};

int main()
{
    C c;

    c.func1(123); // C2385
    c.func1('a'); // C2385
    c.func2(); // C2385

    c.A::func2(); // OK because explicitly qualified
    c.B::func2(); // OK because explicitly qualified
    static_cast<A>(c).func2(); // OK because of the cast
    static_cast<B>(c).func2(); // OK because of the cast
}
```

You can resolve the ambiguous calls to `func1` by bringing both overloads into scope. However, this doesn't work for `func2` because `A::func2` and `B::func2` don't take arguments, so calling them can't be differentiated by their parameters. You can resolve the issue by:
- Introduce the one you want to use into scope
- Explicitly qualify the call with the base type
- Cast the object before calling the function.
