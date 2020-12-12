---
description: "Learn more about: Name Resolution for Locally Declared Names"
title: "Name Resolution for Locally Declared Names"
ms.date: "11/04/2016"
ms.assetid: 743b88f3-de11-48f4-ae83-931449ea3886
---
# Name Resolution for Locally Declared Names

The template's name itself can be referred to with or without the template arguments. In the scope of a class template, the name itself refers to the template. In the scope of a template specialization or partial specialization, the name alone refers to the specialization or partial specialization. Other specializations or partial specializations of the template can also be referenced, with the appropriate template arguments.

## Example: Specialization versus partial specialization

The following code shows that the class template's name A is interpreted differently in the scope of a specialization or partial specialization.

```cpp
// template_name_resolution3.cpp
// compile with: /c
template <class T> class A {
   A* a1;   // A refers to A<T>
   A<int>* a2;  // A<int> refers to a specialization of A.
   A<T*>* a3;   // A<T*> refers to the partial specialization A<T*>.
};

template <class T> class A<T*> {
   A* a4; // A refers to A<T*>.
};

template<> class A<int> {
   A* a5; // A refers to A<int>.
};
```

## Example: Name conflict between template parameter and object

In the case of a name conflict between a template parameter and another object, the template parameter can or cannot be hidden. The following rules will help determine precedence.

The template parameter is in scope from the point where it first appears until the end of the class or function template. If the name appears again in the template argument list or in the list of base classes, it refers to the same type. In standard C++, no other name that is identical to the template parameter can be declared in the same scope. A Microsoft extension allows the template parameter to be redefined in the scope of the template. The following example shows using the template parameter in the base specification of a class template.

```cpp
// template_name_resolution4.cpp
// compile with: /EHsc
template <class T>
class Base1 {};

template <class T>
class Derived1 : Base1<T> {};

int main() {
   // Derived1<int> d;
}
```

## Example: Define member function outside class template

When defining a template's member functions outside the class template, a different template parameter name can be used. If the template member function definition uses a different name for the template parameter than the declaration does, and the name used in the definition conflicts with another member of the declaration, the member in the template declaration takes precedence.

```cpp
// template_name_resolution5.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

template <class T> class C {
public:
   struct Z {
      Z() { cout << "Z::Z()" << endl; }
   };
   void f();
};

template <class Z>
void C<Z>::f() {
   // Z refers to the struct Z, not to the template arg;
   // Therefore, the constructor for struct Z will be called.
   Z z;
}

int main() {
   C<int> c;
   c.f();
}
```

```Output
Z::Z()
```

## Example: Define template or member function outside namespace

When defining a template function or member function outside the namespace in which the template was declared, the template argument takes precedence over the names of other members of the namespace.

```cpp
// template_name_resolution6.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

namespace NS {
   void g() { cout << "NS::g" << endl; }

   template <class T> struct C {
      void f();
      void g() { cout << "C<T>::g" << endl; }
   };
};

template <class T>
void NS::C<T>::f() {
   g(); // C<T>::g, not NS::g
};

int main() {
   NS::C<int> c;
   c.f();
}
```

```Output
C<T>::g
```

## Example: Base class or member name hides template argument

In definitions that are outside of the template class declaration, if a template class has a base class that does not depend on a template argument and if the base class or one of its members has the same name as a template argument, then the base class or member name hides the template argument.

```cpp
// template_name_resolution7.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

struct B {
   int i;
   void print() { cout << "Base" << endl; }
};

template <class T, int i> struct C : public B {
   void f();
};

template <class B, int i>
void C<B, i>::f() {
   B b;   // Base class b, not template argument.
   b.print();
   i = 1; // Set base class's i to 1.
}

int main() {
   C<int, 1> c;
   c.f();
   cout << c.i << endl;
}
```

```Output
Base
1
```

## See also

[Name Resolution](../cpp/templates-and-name-resolution.md)
