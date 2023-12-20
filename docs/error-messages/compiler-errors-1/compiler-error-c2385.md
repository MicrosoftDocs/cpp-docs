---
description: "Learn more about: Compiler Error C2385"
title: "Compiler Error C2385"
ms.date: "12/20/2023"
f1_keywords: ["C2385"]
helpviewer_keywords: ["C2385"]
ms.assetid: 6d3dd1f2-e56d-49d7-865c-6a9acdb17417
---
# Compiler Error C2385

ambiguous access of 'member'

The member can be inherited from more than one base type causing an unqualified access to be ambiguous. To resolve this error:

- Make the member unambiguous by explicitly qualifying it, or providing a cast.

- Rename the ambiguous members in the base classes.

- Bring the desired member into scope.

## Example

The following sample generates C2385:

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
    // using A::func1;
    // using B::func1;
};

int main()
{
    C c;

    c.func1(123); // C2385
    c.func1('a'); // C2385

    c.func2(); // C2385
    c.A::func2(); // OK
    c.B::func2(); // OK
    static_cast<A>(c).func2(); // OK
    static_cast<B>(c).func2(); // OK
}
```

Ambiguous calls to `func1` can be resolved by bringing both overloads into scope. However, doing the same for `func2` does not fix the error, since both `A::func2` and `B::func2` take no arguments and are still ambiguous. If only one is desired, introducing just one into scope does fix the issue. Alternatively, the call can be explicitly qualified with the base type, or the object can be casted before the function is called.
