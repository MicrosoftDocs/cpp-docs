---
description: "Learn more about: Nonstandard Behavior"
title: "Nonstandard Behavior"
ms.date: "05/06/2019"
helpviewer_keywords: ["compatibility and compliance, nonstandard behavior", "Microsoft-specific, compiler behavior", "nonstandard behavior, compliance and compatibility"]
ms.assetid: a57dea27-dc79-4f64-8a83-017e84841773
---
# Nonstandard Behavior

The following sections list some of the places where the Microsoft implementation of C++ does not comply with the C++ standard. The section numbers given below refer to the section numbers in the C++ 11 standard (ISO/IEC 14882:2011(E)).

The list of compiler limits that differ from those defined in the C++ standard is given in [Compiler Limits](../cpp/compiler-limits.md).

## Covariant Return Types

Virtual base classes are not supported as covariant return types when the virtual function has a variable number of arguments. This does not comply with section 10.3, paragraph 7 of the C++ ISO specification. The following sample does not compile, giving compiler error [C2688](../error-messages/compiler-errors-2/compiler-error-c2688.md)

```cpp
// CovariantReturn.cpp
class A
{
   virtual A* f(int c, ...);   // remove ...
};

class B : virtual A
{
   B* f(int c, ...);   // C2688 remove ...
};
```

## Binding Nondependent Names in Templates

The Microsoft C++ compiler does not currently support binding nondependent names when initially parsing a template. This does not comply with section 14.6.3 of the C++ ISO specification. This can cause overloads declared after the template (but before the template is instantiated) to be seen.

```cpp
#include <iostream>
using namespace std;

namespace N {
   void f(int) { cout << "f(int)" << endl;}
}

template <class T> void g(T) {
    N::f('a');   // calls f(char), should call f(int)
}

namespace N {
    void f(char) { cout << "f(char)" << endl;}
}

int main() {
    g('c');
}
// Output: f(char)
```

## Function Exception Specifiers

Function exception specifiers other than `throw()` are parsed but not used. This does not comply with section 15.4 of the ISO C++ specification. For example:

```cpp
void f() throw(int); // parsed but not used
void g() throw();    // parsed and used
```

For more information on exception specifications, see [Exception Specifications](../cpp/exception-specifications-throw-cpp.md).

## char_traits::eof()

The C++ standard states that [char_traits::eof](../standard-library/char-traits-struct.md#eof) must not correspond to a valid `char_type` value. The Microsoft C++ compiler enforces this constraint for type **`char`**, but not for type **`wchar_t`**. This does not comply with the requirement in Table 62 in section 12.1.1 of the C++ ISO specification. The example below demonstrates this.

```cpp
#include <iostream>

int main()
{
    using namespace std;

    char_traits<char>::int_type int2 = char_traits<char>::eof();
    cout << "The eof marker for char_traits<char> is: " << int2 << endl;

    char_traits<wchar_t>::int_type int3 = char_traits<wchar_t>::eof();
    cout << "The eof marker for char_traits<wchar_t> is: " << int3 << endl;
}
```

## Storage Location of Objects

The C++ standard (section 1.8 paragraph 6) requires complete C++ objects to have unique storage locations. However with Microsoft C++, there are cases where types without data members will share a storage location with other types for the lifetime of the object.
