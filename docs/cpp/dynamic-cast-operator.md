---
title: "dynamic_cast Operator"
description: "Overview of the C++ language dynamic_cast operator."
ms.date: "02/03/2020"
f1_keywords: ["dynamic_cast_cpp"]
helpviewer_keywords: ["dynamic_cast keyword [C++]"]
---
# dynamic_cast Operator

Converts the operand `expression` to an object of type `type-id`.

## Syntax

```
dynamic_cast < type-id > ( expression )
```

## Remarks

The `type-id` must be a pointer or a reference to a previously defined class type or a "pointer to void". The type of `expression` must be a pointer if `type-id` is a pointer, or an l-value if `type-id` is a reference.

See [static_cast](../cpp/static-cast-operator.md) for an explanation of the difference between static and dynamic casting conversions, and when it's appropriate to use each.

There are two breaking changes in the behavior of **`dynamic_cast`** in managed code:

- **`dynamic_cast`** to a pointer to the underlying type of a boxed enum will fail at runtime, returning 0 instead of the converted pointer.

- **`dynamic_cast`** will no longer throw an exception when `type-id` is an interior pointer to a value type; instead, the cast fails at runtime. The cast returns the 0 pointer value instead of throwing.

If `type-id` is a pointer to an unambiguous accessible direct or indirect base class of `expression`, then a pointer to the unique subobject of type `type-id` is the result. For example:

```cpp
// dynamic_cast_1.cpp
// compile with: /c
class B { };
class C : public B { };
class D : public C { };

void f(D* pd) {
   C* pc = dynamic_cast<C*>(pd);   // ok: C is a direct base class
                                   // pc points to C subobject of pd
   B* pb = dynamic_cast<B*>(pd);   // ok: B is an indirect base class
                                   // pb points to B subobject of pd
}
```

This type of conversion is called an "upcast" because it moves a pointer up a class hierarchy, from a derived class to a class it's derived from. An upcast is an implicit conversion.

If `type-id` is void*, a run-time check is made to determine the actual type of `expression`. The result is a pointer to the complete object pointed to by `expression`. For example:

```cpp
// dynamic_cast_2.cpp
// compile with: /c /GR
class A {virtual void f();};
class B {virtual void f();};

void f() {
   A* pa = new A;
   B* pb = new B;
   void* pv = dynamic_cast<void*>(pa);
   // pv now points to an object of type A

   pv = dynamic_cast<void*>(pb);
   // pv now points to an object of type B
}
```

If `type-id` isn't `void*`, a run-time check is made to see if the object pointed to by `expression` can be converted to the type pointed to by `type-id`.

If the type of `expression` is a base class of the type of `type-id`, a run-time check is made to see if `expression` actually points to a complete object of the type of `type-id`. If this is true, the result is a pointer to a complete object of the type of `type-id`. For example:

```cpp
// dynamic_cast_3.cpp
// compile with: /c /GR
class B {virtual void f();};
class D : public B {virtual void f();};

void f() {
   B* pb = new D;   // unclear but ok
   B* pb2 = new B;

   D* pd = dynamic_cast<D*>(pb);   // ok: pb actually points to a D
   D* pd2 = dynamic_cast<D*>(pb2);   // pb2 points to a B not a D
}
```

This type of conversion is called a "downcast" because it moves a pointer down a class hierarchy, from a given class to a class derived from it.

In cases of multiple inheritance, possibilities for ambiguity are introduced. Consider the class hierarchy shown in the following figure.

For CLR types, **`dynamic_cast`** results in either a no-op if the conversion can be performed implicitly, or an MSIL `isinst` instruction, which performs a dynamic check and returns **`nullptr`** if the conversion fails.

The following sample uses **`dynamic_cast`** to determine if a class is an instance of particular type:

```cpp
// dynamic_cast_clr.cpp
// compile with: /clr
using namespace System;

void PrintObjectType( Object^o ) {
   if( dynamic_cast<String^>(o) )
      Console::WriteLine("Object is a String");
   else if( dynamic_cast<int^>(o) )
      Console::WriteLine("Object is an int");
}

int main() {
   Object^o1 = "hello";
   Object^o2 = 10;

   PrintObjectType(o1);
   PrintObjectType(o2);
}
```

:::image type="complex" source="../cpp/media/vc39011.gif" alt-text="Diagram that shows multiple inheritance.":::
The diagram shows a class hierarchy with A as a base class of B which is a base class of D. A is also a base class for C, which is a base class for D. Class D inherits from both B and C.
:::image-end:::  

A pointer to an object of type `D` can be safely cast to `B` or `C`. However, if `D` is cast to point to an `A` object, which instance of `A` would result? This would result in an ambiguous casting error. To get around this problem, you can perform two unambiguous casts. For example:

```cpp
// dynamic_cast_4.cpp
// compile with: /c /GR
class A {virtual void f();};
class B : public A {virtual void f();};
class C : public A {virtual void f();};
class D : public B, public C {virtual void f();};

void f() {
   D* pd = new D;
   A* pa = dynamic_cast<A*>(pd);   // C4540, ambiguous cast fails at runtime
   B* pb = dynamic_cast<B*>(pd);   // first cast to B
   A* pa2 = dynamic_cast<A*>(pb);   // ok: unambiguous
}
```

Further ambiguities can be introduced when you use virtual base classes. Consider the class hierarchy shown in the following figure.

:::image type="complex" source="../cpp/media/vc39012.gif" alt-text="Diagram of a class hierarchy that shows virtual base classes.":::
The diagram shows the classes A, B, C, D, and E arranged as follows: Class A is a base class of B. Classes C and E each derive from B. Class E also inherits from D, which inherits from class B, which inherits from class A.
:::image-end:::  
Class hierarchy that shows virtual base classes

In this hierarchy, `A` is a virtual base class. Given an instance of class `E` and a pointer to the `A` subobject, a **`dynamic_cast`** to a pointer to `B` fails due to ambiguity. You must first cast back to the complete `E` object, then work your way back up the hierarchy, in an unambiguous manner, to reach the correct `B` object.

Consider the class hierarchy shown in the following figure.

:::image type="complex" source="../cpp/media/vc39013.gif" alt-text="Diagram of a class hierarchy that shows duplicate base classes.":::
The diagram shows the classes A, B, C, D, and E arranged as follows: Class B derives from Class A. Class C derives from class A. class D derives from class B. Class E derives from class C, which derives from class A. In this case, the duplicate base class is class A, which is directly or indirectly inherited by all the other classes. Class A is inherited directly by classes B and C, and indirectly by class D via class B, and indirectly by class E via class C, and indirectly in class D via class B.
:::image-end:::  
Class hierarchy that shows duplicate base classes

Given an object of type `E` and a pointer to the `D` subobject, to navigate from the `D` subobject to the left-most `A` subobject, three conversions can be made. You can perform a **`dynamic_cast`** conversion from the `D` pointer to an `E` pointer, then a conversion (either **`dynamic_cast`** or an implicit conversion) from `E` to `B`, and finally an implicit conversion from `B` to `A`. For example:

```cpp
// dynamic_cast_5.cpp
// compile with: /c /GR
class A {virtual void f();};
class B : public A {virtual void f();};
class C : public A { };
class D {virtual void f();};
class E : public B, public C, public D {virtual void f();};

void f(D* pd) {
   E* pe = dynamic_cast<E*>(pd);
   B* pb = pe;   // upcast, implicit conversion
   A* pa = pb;   // upcast, implicit conversion
}
```

The **`dynamic_cast`** operator can also be used to perform a "cross cast." Using the same class hierarchy, it's possible to cast a pointer, for example, from the `B` subobject to the `D` subobject, as long as the complete object is of type `E`.

Considering cross casts, it's possible to do the conversion from a pointer to `D` to a pointer to the left-most `A` subobject in just two steps. You can perform a cross cast from `D` to `B`, then an implicit conversion from `B` to `A`. For example:

```cpp
// dynamic_cast_6.cpp
// compile with: /c /GR
class A {virtual void f();};
class B : public A {virtual void f();};
class C : public A { };
class D {virtual void f();};
class E : public B, public C, public D {virtual void f();};

void f(D* pd) {
   B* pb = dynamic_cast<B*>(pd);   // cross cast
   A* pa = pb;   // upcast, implicit conversion
}
```

A null pointer value is converted to the null pointer value of the destination type by **`dynamic_cast`**.

When you use `dynamic_cast < type-id > ( expression )`, if `expression` can't be safely converted to type `type-id`, the run-time check causes the cast to fail. For example:

```cpp
// dynamic_cast_7.cpp
// compile with: /c /GR
class A {virtual void f();};
class B {virtual void f();};

void f() {
   A* pa = new A;
   B* pb = dynamic_cast<B*>(pa);   // fails at runtime, not safe;
   // B not derived from A
}
```

The value of a failed cast to pointer type is the null pointer. A failed cast to reference type throws a [bad_cast Exception](../cpp/bad-cast-exception.md).   If `expression` doesn't point to or reference a valid object, a `__non_rtti_object` exception is thrown.

See [typeid](../cpp/typeid-operator.md) for an explanation of the `__non_rtti_object` exception.

## Example

The following sample creates the base class (struct A) pointer, to an object (struct C).  This, plus the fact there are virtual functions, enables runtime polymorphism.

The sample also calls a nonvirtual function in the hierarchy.

```cpp
// dynamic_cast_8.cpp
// compile with: /GR /EHsc
#include <stdio.h>
#include <iostream>

struct A {
    virtual void test() {
        printf_s("in A\n");
   }
};

struct B : A {
    virtual void test() {
        printf_s("in B\n");
    }

    void test2() {
        printf_s("test2 in B\n");
    }
};

struct C : B {
    virtual void test() {
        printf_s("in C\n");
    }

    void test2() {
        printf_s("test2 in C\n");
    }
};

void Globaltest(A& a) {
    try {
        C &c = dynamic_cast<C&>(a);
        printf_s("in GlobalTest\n");
    }
    catch(std::bad_cast) {
        printf_s("Can't cast to C\n");
    }
}

int main() {
    A *pa = new C;
    A *pa2 = new B;

    pa->test();

    B * pb = dynamic_cast<B *>(pa);
    if (pb)
        pb->test2();

    C * pc = dynamic_cast<C *>(pa2);
    if (pc)
        pc->test2();

    C ConStack;
    Globaltest(ConStack);

   // fails because B knows nothing about C
    B BonStack;
    Globaltest(BonStack);
}
```

```Output
in C
test2 in B
in GlobalTest
Can't cast to C
```

## See also

[Casting Operators](../cpp/casting-operators.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
