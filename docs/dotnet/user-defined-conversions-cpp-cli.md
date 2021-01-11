---
description: "Learn more about: User-Defined Conversions (C++/CLI)"
title: "User-Defined Conversions (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["user-defined conversions [C++]"]
ms.assetid: 8010fd59-2775-4e9a-a6ed-58055032d66f
---
# User-Defined Conversions (C++/CLI)

This section discusses user-defined conversions (UDC) when one of the types in the conversion is a reference or instance of a value type or reference type.

## Implicit and explicit conversions

A user-defined conversion can either be implicit or explicit.  A UDC should be implicit if the conversion does not result in a loss of information. Otherwise an explicit UDC should be defined.

A native class's constructor can be used to convert a reference or value type to a native class.

For more information about conversions, see [Boxing](../extensions/boxing-cpp-component-extensions.md) and [Standard Conversions](../cpp/standard-conversions.md).

```cpp
// mcpp_User_Defined_Conversions.cpp
// compile with: /clr
#include "stdio.h"
ref class R;
class N;

value class V {
   static operator V(R^) {
      return V();
   }
};

ref class R {
public:
   static operator N(R^);
   static operator V(R^) {
      System::Console::WriteLine("in R::operator N");
      return V();
   }
};

class N {
public:
   N(R^) {
      printf("in N::N\n");
   }
};

R::operator N(R^) {
   System::Console::WriteLine("in R::operator N");
   return N(nullptr);
}

int main() {
   // Direct initialization:
   R ^r2;
   N n2(r2);   // direct initialization, calls constructor
   static_cast<N>(r2);   // also direct initialization

   R ^r3;
   // ambiguous V::operator V(R^) and R::operator V(R^)
   // static_cast<V>(r3);
}
```

**Output**

```Output
in N::N
in N::N
```

## Convert-From Operators

Convert-from operators create an object of the class in which the operator is defined from an object of some other class.

Standard C++ does not support convert-from operators; standard C++ uses constructors for this purpose. However, when using CLR types, Visual C++ provide syntactic support for calling convert-from operators.

To interoperate well with other CLS-compliant languages, you may wish to wrap each user-defined unary constructor for a given class with a corresponding convert-from operator.

Convert-from operators:

- Shall be defined as static functions.

- Can either be implicit (for conversions that do not lose precision such as short-to-int) or explicit, when there may be a loss of precision.

- Shall return an object of the containing class.

- Shall have the "from" type as the sole parameter type.

The following sample shows an implicit and explicit "convert-from", user-defined conversion (UDC) operator.

```cpp
// clr_udc_convert_from.cpp
// compile with: /clr
value struct MyDouble {
   double d;

   MyDouble(int i) {
      d = static_cast<double>(i);
      System::Console::WriteLine("in constructor");
   }

   // Wrap the constructor with a convert-from operator.
   // implicit UDC because conversion cannot lose precision
   static operator MyDouble (int i) {
      System::Console::WriteLine("in operator");
      // call the constructor
      MyDouble d(i);
      return d;
   }

   // an explicit user-defined conversion operator
   static explicit operator signed short int (MyDouble) {
      return 1;
   }
};

int main() {
   int i = 10;
   MyDouble md = i;
   System::Console::WriteLine(md.d);

   // using explicit user-defined conversion operator requires a cast
   unsigned short int j = static_cast<unsigned short int>(md);
   System::Console::WriteLine(j);
}
```

**Output**

```Output
in operator
in constructor
10
1
```

## Convert-to operators

Convert-to operators convert an object of the class in which the operator is defined to some other object. The following sample shows an implicit, convert-to, user-defined conversion operator:

```cpp
// clr_udc_convert_to.cpp
// compile with: /clr
using namespace System;
value struct MyInt {
   Int32 i;

   // convert MyInt to String^
   static operator String^ ( MyInt val ) {
      return val.i.ToString();
   }

   MyInt(int _i) : i(_i) {}
};

int main() {
   MyInt mi(10);
   String ^s = mi;
   Console::WriteLine(s);
}
```

**Output**

```Output
10
```

An explicit user-defined convert-to conversion operator is appropriate for conversions that potentially lose data in some way. To invoke an explicit convert-to operator, a cast must be used.

```cpp
// clr_udc_convert_to_2.cpp
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
   d.d = 10.3;
   System::Console::WriteLine(d.d);
   int i = 0;
   i = static_cast<int>(d);
   System::Console::WriteLine(i);
}
```

**Output**

```Output
10.3
10
```

## To convert generic classes

You can convert a generic class to T.

```cpp
// clr_udc_generics.cpp
// compile with: /clr
generic<class T>
public value struct V {
   T mem;
   static operator T(V v) {
      return v.mem;
   }

   void f(T t) {
      mem = t;
   }
};

int main() {
   V<int> v;
   v.f(42);
   int i = v;
   i += v;
   System::Console::WriteLine(i == (42 * 2) );
}
```

**Output**

```Output
True
```

A converting constructor takes a type and uses it to create an object.  A converting constructor is called with direct initialization only; casts will not invoke converting constructors. By default, converting constructors are explicit for CLR types.

```cpp
// clr_udc_converting_constructors.cpp
// compile with: /clr
public ref struct R {
   int m;
   char c;

   R(int i) : m(i) { }
   R(char j) : c(j) { }
};

public value struct V {
   R^ ptr;
   int m;

   V(R^ r) : ptr(r) { }
   V(int i) : m(i) { }
};

int main() {
   R^ r = gcnew R(5);

   System::Console::WriteLine( V(5).m);
   System::Console::WriteLine( V(r).ptr);
}
```

**Output**

```Output
5
R
```

In this code sample, an implicit static conversion function does the same thing as an explicit conversion constructor.

```
public value struct V {
   int m;
   V(int i) : m(i) {}
   static operator V(int i) {
      V v(i*100);
      return v;
   }
};

public ref struct R {
   int m;
   R(int i) : m(i) {}
   static operator R^(int i) {
      return gcnew R(i*100);
   }
};

int main() {
   V v(13);   // explicit
   R^ r = gcnew R(12);   // explicit

   System::Console::WriteLine(v.m);
   System::Console::WriteLine(r->m);

   // explicit ctor can't be called here: not ambiguous
   v = 5;
   r = 20;

   System::Console::WriteLine(v.m);
   System::Console::WriteLine(r->m);
}
```

**Output**

```Output
13
12
500
2000
```

## See also

[Classes and Structs](../extensions/classes-and-structs-cpp-component-extensions.md)
