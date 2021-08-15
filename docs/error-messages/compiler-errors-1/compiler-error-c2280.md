---
description: "Learn more about: Compiler Error C2280"
title: "Compiler Error C2280"
ms.date: "04/25/2017"
f1_keywords: ["C2280"]
helpviewer_keywords: ["C2280"]
ms.assetid: e6c5b1fb-2b9b-4554-8ff9-775eeb37161b
---
# Compiler Error C2280

'*declaration*': attempting to reference a deleted function

The compiler detected an attempt to reference a `deleted` function. This error can be caused by a call to a member function that has been explicitly marked as `= deleted` in the source code. This error can also be caused by a call to an implicit special member function of a struct or class that is automatically declared and marked as `deleted` by the compiler. For more information about when the compiler automatically generates **`default`** or `deleted` special member functions, see [Special member functions](../../cpp/special-member-functions.md).

## Example: Explicitly deleted functions

A call to an explicitly `deleted` function causes this error. An explicitly `deleted` member function implies that the class or struct is intentionally designed to prevent its use, so to fix this issue, you should change your code to avoid it.

```cpp
// C2280_explicit.cpp
// compile with: cl /c /W4 C2280_explicit.cpp
struct A {
    A();
    A(int) = delete;
};

struct B {
    A a1;
    A a2 = A(3); // C2280, calls deleted A::A(int)
    // To fix, remove the call to A(int)
};

void f() {
    B b;    // calls implicit B::B(void)
}
```

## Example: Uninitialized data members

An uninitialized reference type data member or **`const`** data member causes the compiler to implicitly declare a `deleted` default constructor. To fix this issue, initialize the data member when it is declared.

```cpp
// C2280_uninit.cpp
// compile with: cl /c C2280_uninit.cpp
struct A {
    const int i; // uninitialized const-qualified data
    // members or reference type data members cause
    // the implicit default constructor to be deleted.
    // To fix, initialize the value in the declaration:
    // const int i = 42;
} a;    // C2280
```

## Example: Reference and const data members

A **`const`** or reference type data member causes the compiler to declare a `deleted` copy assignment operator. Once initialized, these members can't be assigned to, so a simple copy or move can't work. To fix this issue, we recommend you change your logic to remove the assignment operations that cause the error.

```cpp
// C2280_ref.cpp
// compile with: cl /c C2280_ref.cpp
extern int k;
struct A {
    A();
    int& ri = k; // a const or reference data member causes
    // implicit copy assignment operator to be deleted.
};

void f() {
    A a1, a2;
    // To fix, consider removing this assignment.
    a2 = a1;    // C2280
}
```

## Example: Movable deletes implicit copy

If a class declares a move constructor or move assignment operator, but does not explicitly declare a copy constructor, the compiler implicitly declares a copy constructor and defines it as `deleted`. Similarly, if a class declares a move constructor or move assignment operator, but does not explicitly declare a copy assignment operator, the compiler implicitly declares a copy assignment operator and defines it as `deleted`. To fix this issue, you must explicitly declare these members.

When you see error C2280 in connection with a `unique_ptr`, it is almost certainly because you are attempting to invoke its copy constructor, which is a `deleted` function. By design, a `unique_ptr` cannot be copied. Use a move constructor to transfer ownership instead.

```cpp
// C2280_move.cpp
// compile with: cl /c C2280_move.cpp
class base
{
public:
    base();
    ~base();
    base(base&&);
    // Move constructor causes copy constructor to be
    // implicitly declared as deleted. To fix this
    // issue, you can explicitly declare a copy constructor:
    // base(base&);
    // If you want the compiler default version, do this:
    // base(base&) = default;
};

void copy(base *p)
{
    base b{*p};  // C2280
}
```

## Example: Variant and volatile members

Versions of the compiler before Visual Studio 2015 Update 2 were non-conforming and generated default constructors and destructors for anonymous unions. These are now implicitly declared as `deleted`. Those versions also allowed non-conforming implicit definition of **`default`** copy and move constructors and **`default`** copy and move assignment operators in classes and structs that have **`volatile`** member variables. The compiler now considers these to have non-trivial constructors and assignment operators, and doesn't generate **`default`** implementations. When such a class is a member of a union, or an anonymous union inside of a class, the copy and move constructors and copy and move assignment operators of the union or class are implicitly defined as `deleted`. To fix this issue, you must explicitly declare the required special member functions.

```cpp
// C2280_variant.cpp
// compile with: cl /c C2280_variant.cpp
struct A {
    A() = default;
    A(const A&);
};

struct B {
    union {
        A a;
        int i;
    };
    // To fix this issue, declare the required
    // special member functions:
    // B();
    // B(const B& b);
};

int main() {
    B b1;
    B b2(b1);  // C2280
}
```

## Example: Indirect base members deleted

Versions of the compiler before Visual Studio 2015 Update 2 were non-conforming and allowed a derived class to call special member functions of indirectly-derived `private virtual` base classes. The compiler now issues compiler error C2280 when such a call is made.

In this example, class `top` indirectly derives from private virtual `base`. In conforming code, this makes the members of `base` inaccessible to `top`; an object of type `top` can't be default constructed or destroyed. To fix this issue in code that relied on the old compiler behavior, change the intermediate class to use `protected virtual` derivation, or change the `top` class to use direct derivation:

```cpp
// C2280_indirect.cpp
// compile with: cl /c C2280_indirect.cpp
class base
{
protected:
    base();
    ~base();
};

class middle : private virtual base {};
// Possible fix: Replace line above with:
// class middle : protected virtual base {};
class top : public virtual middle {};    // C4594, C4624
// Another possible fix: use direct derivation:
// class top : public virtual middle, private virtual base {};

void destroy(top *p)
{
    delete p;  // C2280
}
```
