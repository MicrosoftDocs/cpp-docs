---
description: "Learn more about: using declaration"
title: "using declaration"
ms.date: "11/04/2016"
helpviewer_keywords: ["using declaration", "declarations [C++], using-declaration", "namespaces [C++], unqualified names in", "using keyword [C++]"]
ms.assetid: 4184e2b1-3adc-408e-b5f3-0b3f8b554723
---
# using declaration

The **`using`** declaration introduces a name into the declarative region in which the using declaration appears.

## Syntax

```
using [typename] nested-name-specifier unqualified-id ;
using declarator-list ;
```

### Parameters

*nested-name-specifier*
    A sequence of namespace, class, or enumeration names and scope resolution operators (::), terminated by a scope resolution operator. A single scope resolution operator may be used to introduce a name from the global namespace. The keyword **`typename`** is optional and may be used to resolve dependent names when introduced into a class template from a base class.

*unqualified-id*
    An unqualified id-expression, which may be an identifier, an overloaded operator name, a user-defined literal operator or conversion function name, a class destructor name, or a template name and argument list.

*declarator-list*
    A comma-separated list of [**`typename`**] *nested-name-specifier* *unqualified-id* declarators, followed optionally by an ellipsis.

## Remarks

A using declaration introduces an unqualified name as a synonym for an entity declared elsewhere. It allows a single name from a specific namespace to be used without explicit qualification in the declaration region in which it appears. This is in contrast to the [using directive](../cpp/namespaces-cpp.md#using_directives), which allows *all* the names in a namespace to be used without qualification. The **`using`** keyword is also used for [type aliases](../cpp/aliases-and-typedefs-cpp.md).

## Example: `using` declaration in class field

A using declaration can be used in a class definition.

```cpp
// using_declaration1.cpp
#include <stdio.h>
class B {
public:
   void f(char) {
      printf_s("In B::f()\n");
   }

   void g(char) {
      printf_s("In B::g()\n");
   }
};

class D : B {
public:
   using B::f;    // B::f(char) is now visible as D::f(char)
   using B::g;    // B::g(char) is now visible as D::g(char)
   void f(int) {
      printf_s("In D::f()\n");
      f('c');     // Invokes B::f(char) instead of recursing
   }

   void g(int) {
      printf_s("In D::g()\n");
      g('c');     // Invokes B::g(char) instead of recursing
   }
};

int main() {
   D myD;
   myD.f(1);
   myD.g('a');
}
```

```Output
In D::f()
In B::f()
In B::g()
```

## Example: `using` declaration to declare a member

When used to declare a member, a using declaration must refer to a member of a base class.

```cpp
// using_declaration2.cpp
#include <stdio.h>

class B {
public:
   void f(char) {
      printf_s("In B::f()\n");
   }

   void g(char) {
      printf_s("In B::g()\n");
   }
};

class C {
public:
   int g();
};

class D2 : public B {
public:
   using B::f;   // ok: B is a base of D2
   // using C::g;   // error: C isn't a base of D2
};

int main() {
   D2 MyD2;
   MyD2.f('a');
}
```

```Output
In B::f()
```

## Example: `using` declaration with explicit qualification

Members declared by using a using declaration can be referenced by using explicit qualification. The `::` prefix refers to the global namespace.

```cpp
// using_declaration3.cpp
#include <stdio.h>

void f() {
   printf_s("In f\n");
}

namespace A {
   void g() {
      printf_s("In A::g\n");
   }
}

namespace X {
   using ::f;   // global f is also visible as X::f
   using A::g;   // A's g is now visible as X::g
}

void h() {
   printf_s("In h\n");
   X::f();   // calls ::f
   X::g();   // calls A::g
}

int main() {
   h();
}
```

```Output
In h
In f
In A::g
```

## Example: `using` declaration synonyms and aliases

When a using declaration is made, the synonym created by the declaration refers only to definitions that are valid at the point of the using declaration. Definitions added to a namespace after the using declaration are not valid synonyms.

A name defined by a **`using`** declaration is an alias for its original name. It does not affect the type, linkage or other attributes of the original declaration.

```cpp
// post_declaration_namespace_additions.cpp
// compile with: /c
namespace A {
   void f(int) {}
}

using A::f;   // f is a synonym for A::f(int) only

namespace A {
   void f(char) {}
}

void f() {
   f('a');   // refers to A::f(int), even though A::f(char) exists
}

void b() {
   using A::f;   // refers to A::f(int) AND A::f(char)
   f('a');   // calls A::f(char);
}
```

## Example: Local declarations and `using` declarations

With respect to functions in namespaces, if a set of local declarations and using declarations for a single name are given in a declarative region, they must all refer to the same entity, or they must all refer to functions.

```cpp
// functions_in_namespaces1.cpp
// C2874 expected
namespace B {
    int i;
    void f(int);
    void f(double);
}

void g() {
    int i;
    using B::i;   // error: i declared twice
    void f(char);
    using B::f;   // ok: each f is a function
}
```

In the example above, the `using B::i` statement causes a second `int i` to be declared in the `g()` function. The `using B::f` statement does not conflict with the `f(char)` function because the function names introduced by `B::f` have different parameter types.

## Example: Local function declarations and `using` declarations

A local function declaration cannot have the same name and type as a function introduced by using declaration. For example:

```cpp
// functions_in_namespaces2.cpp
// C2668 expected
namespace B {
    void f(int);
    void f(double);
}

namespace C {
    void f(int);
    void f(double);
    void f(char);
}

void h() {
    using B::f;          // introduces B::f(int) and B::f(double)
    using C::f;          // C::f(int), C::f(double), and C::f(char)
    f('h');              // calls C::f(char)
    f(1);                // C2668 ambiguous: B::f(int) or C::f(int)?
    void f(int);         // C2883 conflicts with B::f(int) and C::f(int)
}
```

## Example: `using` declaration and inheritance

With respect to inheritance, when a using declaration introduces a name from a base class into a derived class scope, member functions in the derived class override virtual member functions with the same name and argument types in the base class.

```cpp
// using_declaration_inheritance1.cpp
#include <stdio.h>
struct B {
   virtual void f(int) {
      printf_s("In B::f(int)\n");
   }

   virtual void f(char) {
      printf_s("In B::f(char)\n");
   }

   void g(int) {
      printf_s("In B::g\n");
   }

   void h(int);
};

struct D : B {
   using B::f;
   void f(int) {   // ok: D::f(int) overrides B::f(int)
      printf_s("In D::f(int)\n");
   }

   using B::g;
   void g(char) {   // ok: there is no B::g(char)
      printf_s("In D::g(char)\n");
   }

   using B::h;
   void h(int) {}   // Note: D::h(int) hides non-virtual B::h(int)
};

void f(D* pd) {
   pd->f(1);     // calls D::f(int)
   pd->f('a');   // calls B::f(char)
   pd->g(1);     // calls B::g(int)
   pd->g('a');   // calls D::g(char)
}

int main() {
   D * myd = new D();
   f(myd);
}
```

```Output
In D::f(int)
In B::f(char)
In B::g
In D::g(char)
```

## Example: `using` declaration accessibility

All instances of a name mentioned in a using declaration must be accessible. In particular, if a derived class uses a using declaration to access a member of a base class, the member name must be accessible. If the name is that of an overloaded member function, then all functions named must be accessible.

For more information on accessibility of members, see [Member-Access Control](../cpp/member-access-control-cpp.md).

```cpp
// using_declaration_inheritance2.cpp
// C2876 expected
class A {
private:
   void f(char);
public:
   void f(int);
protected:
   void g();
};

class B : public A {
   using A::f;   // C2876: A::f(char) is inaccessible
public:
   using A::g;   // B::g is a public synonym for A::g
};
```

## See also

[Namespaces](../cpp/namespaces-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
