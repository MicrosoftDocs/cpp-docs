---
description: "Learn more about: Name Resolution for Dependent Types"
title: "Name Resolution for Dependent Types"
ms.date: "11/04/2016"
ms.assetid: 34066bb4-0c79-4fd8-bda7-539a60a277ab
---
# Name Resolution for Dependent Types

Use **`typename`** for qualified names in template definitions to tell the compiler that the given qualified name identifies a type. For more information, see [typename](../cpp/typename.md).

```cpp
// template_name_resolution1.cpp
#include <stdio.h>
template <class T> class X
{
public:
   void f(typename T::myType* mt) {}
};

class Yarg
{
public:
   struct myType { };
};

int main()
{
   X<Yarg> x;
   x.f(new Yarg::myType());
   printf("Name resolved by using typename keyword.");
}
```

```Output
Name resolved by using typename keyword.
```

Name lookup for dependent names examines names from both the context of the template definition—in the following example, this context would find `myFunction(char)`—and the context of the template instantiation.In the following example, the template is instantiated in main; therefore, the `MyNamespace::myFunction` is visible from the point of instantiation and is picked as the better match. If `MyNamespace::myFunction` were renamed, `myFunction(char)` would be called instead.

All names are resolved as if they were dependent names. Nevertheless, we recommend that you use fully qualified names if there is any possible conflict.

```cpp
// template_name_resolution2.cpp
// compile with: /EHsc
#include <iostream>
using namespace std;

void myFunction(char)
{
   cout << "Char myFunction" << endl;
}

template <class T> class Class1
{
public:
   Class1(T i)
   {
      // If replaced with myFunction(1), myFunction(char)
      // will be called
      myFunction(i);
}
};

namespace MyNamespace
{
   void myFunction(int)
   {
      cout << "Int MyNamespace::myFunction" << endl;
   }
};

using namespace MyNamespace;

int main()
{
   Class1<int>* c1 = new Class1<int>(100);
}
```

### Output

```Output
Int MyNamespace::myFunction
```

### Template Disambiguation

Visual Studio 2012 enforces the C++98/03/11 standard rules for disambiguation with the "template" keyword. In the following example, Visual Studio 2010 would accept both the nonconforming lines and the conforming lines.  Visual Studio 2012 accepts only the conforming lines.

```cpp
#include <iostream>
#include <ostream>
#include <typeinfo>
using namespace std;

template <typename T> struct Allocator {
    template <typename U> struct Rebind {
        typedef Allocator<U> Other;
    };
};

template <typename X, typename AY> struct Container {
    #if defined(NONCONFORMANT)
        typedef typename AY::Rebind<X>::Other AX; // nonconformant
    #elif defined(CONFORMANT)
        typedef typename AY::template Rebind<X>::Other AX; // conformant
    #else
        #error Define NONCONFORMANT or CONFORMANT.
    #endif
};

int main() {
    cout << typeid(Container<int, Allocator<float>>::AX).name() << endl;
}
```

Conformance with the disambiguation rules is required because, by default, C++ assumes that `AY::Rebind` isn't a template, and so the compiler interprets the following "`<`" as a less-than. It has to know that `Rebind` is a template so that it can correctly parse "`<`" as an angle bracket.

## See also

[Name Resolution](../cpp/templates-and-name-resolution.md)
