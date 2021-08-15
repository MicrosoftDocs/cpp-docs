---
description: "Learn more about: Compiler Error C2440"
title: "Compiler Error C2440"
ms.date: "03/28/2017"
f1_keywords: ["C2440"]
helpviewer_keywords: ["C2440"]
ms.assetid: 36e6676c-f04f-4715-8ba1-f096c4bf3b44
---
# Compiler Error C2440

'conversion' : cannot convert from 'type1' to 'type2'

The compiler cannot cast from `type1` to `type2`.

C2440 can be caused if you attempt to initialize a non-const **`char*`** (or `wchar_t*`) by using a string literal in C++ code, when the compiler conformance option [/Zc:strictStrings](../../build/reference/zc-strictstrings-disable-string-literal-type-conversion.md) is set. In C, the type of a string literal is array of **`char`**, but in C++, it is array of `const char`.

## Examples

This sample generates C2440:

```cpp
// C2440s.cpp
// Build: cl /Zc:strictStrings /W3 C2440s.cpp
// When built, the compiler emits:
// error C2440: 'initializing' : cannot convert from 'const char [5]'
// to 'char *'
//        Conversion from string literal loses const qualifier (see
// /Zc:strictStrings)

int main() {
   char* s1 = "test"; // C2440
   const char* s2 = "tests"; // OK
}
```

C2440 can also be caused if you attempt to convert a pointer to member to void*. The next sample generates C2440:

```cpp
// C2440.cpp
class B {
public:
   void  f(){;}

   typedef void (B::*pf)();

   void f2(pf pf) {
       (this->*pf)();
       void* pp = (void*)pf;   // C2440
   }

   void f3() {
      f2(f);
   }
};
```

C2440 can also be caused if you attempt to cast from a type that is only forward declared but not defined. This sample generates C2440:

```cpp
// c2440a.cpp
struct Base { }; // Defined

struct Derived; // Forward declaration, not defined

Base * func(Derived * d) {
    return static_cast<Base *>(d); // error C2440: 'static_cast' : cannot convert from 'Derived *' to 'Base *'
}
```

The C2440 errors on lines 15 and 16 of the next sample are qualified with the `Incompatible calling conventions for UDT return value` message. A *UDT* is a user-defined type, such as a class, struct, or union. These kinds of incompatibility errors are caused when the calling convention of a UDT specified in the return type of a forward declaration conflicts with the actual calling convention of the UDT and when a function pointer is involved.

In the example, first there are forward declarations for a struct and for a function that returns the struct; the compiler assumes that the struct uses the C++ calling convention. Next is the struct definition, which, by default, uses the C calling convention. Because the compiler does not know the calling convention of the struct until it finishes reading the entire struct, the calling convention for the struct in the return type of `get_c2` is also assumed to be C++.

The struct is followed by another function declaration that returns the struct, but at this point, the compiler knows that the struct's calling convention is C++. Similarly, the function pointer, which returns the struct, is defined after the struct definition so that the compiler knows that the struct uses the C++ calling convention.

To resolve C2440 that occurs because of incompatible calling conventions, declare functions that return a UDT after the UDT definition.

```cpp
// C2440b.cpp
struct MyStruct;

MyStruct get_c1();

struct MyStruct {
   int i;
   static MyStruct get_C2();
};

MyStruct get_C3();

typedef MyStruct (*FC)();

FC fc1 = &get_c1;   // C2440, line 15
FC fc2 = &MyStruct::get_C2;   // C2440, line 16
FC fc3 = &get_C3;

class CMyClass {
public:
   explicit CMyClass( int iBar)
      throw()   {
   }

   static CMyClass get_c2();
};

int main() {
   CMyClass myclass = 2;   // C2440
   // try one of the following
   // CMyClass myclass{2};
   // CMyClass myclass(2);

   int *i;
   float j;
   j = (float)i;   // C2440, cannot cast from pointer to int to float
}
```

C2440 can also occur if you assign zero to an interior pointer:

```cpp
// C2440c.cpp
// compile with: /clr
int main() {
   array<int>^ arr = gcnew array<int>(100);
   interior_ptr<int> ipi = &arr[0];
   ipi = 0;   // C2440
   ipi = nullptr;   // OK
}
```

C2440 can also occur for an incorrect use of a user-defined conversion. For example, when a conversion operator has been defined as **`explicit`**, the compiler can't use it in an implicit conversion. For more information about user-defined conversions, see [User-Defined Conversions (C++/CLI)](../../dotnet/user-defined-conversions-cpp-cli.md)). This sample generates C2440:

```cpp
// C2440d.cpp
// compile with: /clr
value struct MyDouble {
   double d;
   // convert MyDouble to Int32
   static explicit operator System::Int32 ( MyDouble val ) {
      return (int)val.d;
   }
};

int main() {
   MyDouble d;
   int i;
   i = d;   // C2440
   // Uncomment the following line to resolve.
   // i = static_cast<int>(d);
}
```

C2440 can also occur if you try to create an instance of a Visual C++ array whose type is a <xref:System.Array>.  For more information, see [Arrays](../../extensions/arrays-cpp-component-extensions.md).  The next sample generates C2440:

```cpp
// C2440e.cpp
// compile with: /clr
using namespace System;
int main() {
   array<int>^ intArray = Array::CreateInstance(__typeof(int), 1);   // C2440
   // try the following line instead
   // array<int>^ intArray = safe_cast<array<int> ^>(Array::CreateInstance(__typeof(int), 1));
}
```

C2440 can also occur because of changes in the attributes feature.  The following sample generates C2440.

```cpp
// c2440f.cpp
// compile with: /LD
[ module(name="PropDemoLib", version=1.0) ];   // C2440
// try the following line instead
// [ module(name="PropDemoLib", version="1.0") ];
```

The Microsoft C++ compiler no longer allows the [const_cast Operator](../../cpp/const-cast-operator.md) to down cast when source code that uses **/clr** programming is compiled.

To resolve this C2440, use the correct cast operator. For more information, see [Casting Operators](../../cpp/casting-operators.md).

This sample generates C2440:

```cpp
// c2440g.cpp
// compile with: /clr
ref class Base {};
ref class Derived : public Base {};
int main() {
   Derived ^d = gcnew Derived;
   Base ^b = d;
   d = const_cast<Derived^>(b);   // C2440
   d = dynamic_cast<Derived^>(b);   // OK
}
```

C2440 can occur because of conformance changes to the compiler in Visual Studio 2015 Update 3. Previously, the compiler incorrectly treated certain distinct expressions as the same type when identifying a template match for a **`static_cast`** operation. Now the compiler distinguishes the types correctly, and code that relied on the previous **`static_cast`** behavior is broken. To fix this issue, change the template argument to match the template parameter type, or use a **`reinterpret_cast`** or C-style cast.

This sample generates C2440:

```cpp
// c2440h.cpp

template<int *a>
struct S1 {};

int g;
struct S2 : S1<&g> {
};

int main()
{
    S2 s;
    static_cast<S1<&*&g>>(s); // C2440 in VS 2015 Update 3
    // This compiles correctly:
    // static_cast<S1<&g>>(s);
}

This error can appear in ATL code that uses the SINK_ENTRY_INFO macro defined in <atlcom.h>.
```

### Copy-list-initialization

Visual Studio 2017 and later correctly raise compiler errors related to object creation using initializer lists that were not caught in Visual Studio 2015 and could lead to crashes or undefined runtime behavior. In C++17 copy-list-initialization, the compiler is required to consider an explicit constructor for overload resolution, but must raise an error if that overload is actually chosen.

The following example compiles in Visual Studio 2015 but not in Visual Studio 2017.

```cpp
// C2440j.cpp
struct A
{
    explicit A(int) {}
    A(double) {}
};

int main()
{
    const A& a2 = { 1 }; // error C2440: 'initializing': cannot
                         // convert from 'int' to 'const A &'
}
```

To correct the error, use direct initialization:

```cpp
// C2440k.cpp
struct A
{
    explicit A(int) {}
    A(double) {}
};

int main()
{
    const A& a2{ 1 };
}
```

### cv-qualifiers in class construction

In Visual Studio 2015, the compiler sometimes incorrectly ignores the cv-qualifier when generating a class object via a constructor call. This can potentially cause a crash or unexpected runtime behavior. The following example compiles in Visual Studio 2015 but raises a compiler error in Visual Studio 2017 and later:

```cpp
struct S
{
    S(int);
    operator int();
};

int i = (const S)0; // error C2440
```

To correct the error, declare operator int() as const.
