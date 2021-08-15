---
description: "Learn more about: static_cast Operator"
title: "static_cast Operator"
ms.date: "11/04/2016"
f1_keywords: ["static_cast_cpp"]
helpviewer_keywords: ["static_cast keyword [C++]"]
ms.assetid: 1f7c0c1c-b288-476c-89d6-0e2ceda5c293
---
# static_cast Operator

Converts an *expression* to the type of *type-id,* based only on the types that are present in the expression.

## Syntax

```
static_cast <type-id> ( expression )
```

## Remarks

In standard C++, no run-time type check is made to help ensure the safety of the conversion. In C++/CX, a compile time and runtime check are performed. For more information, see [Casting](casting.md).

The **`static_cast`** operator can be used for operations such as converting a pointer to a base class to a pointer to a derived class. Such conversions are not always safe.

In general you use **`static_cast`** when you want to convert numeric data types such as enums to ints or ints to floats, and you are certain of the data types involved in the conversion. **`static_cast`** conversions are not as safe as **`dynamic_cast`** conversions, because **`static_cast`** does no run-time type check, while **`dynamic_cast`** does. A **`dynamic_cast`** to an ambiguous pointer will fail, while a **`static_cast`** returns as if nothing were wrong; this can be dangerous. Although **`dynamic_cast`** conversions are safer, **`dynamic_cast`** only works on pointers or references, and the run-time type check is an overhead. For more information, see [dynamic_cast Operator](../cpp/dynamic-cast-operator.md).

In the example that follows, the line `D* pd2 = static_cast<D*>(pb);` is not safe because `D` can have fields and methods that are not in `B`. However, the line `B* pb2 = static_cast<B*>(pd);` is a safe conversion because `D` always contains all of `B`.

```cpp
// static_cast_Operator.cpp
// compile with: /LD
class B {};

class D : public B {};

void f(B* pb, D* pd) {
   D* pd2 = static_cast<D*>(pb);   // Not safe, D can have fields
                                   // and methods that are not in B.

   B* pb2 = static_cast<B*>(pd);   // Safe conversion, D always
                                   // contains all of B.
}
```

In contrast to [dynamic_cast](../cpp/dynamic-cast-operator.md), no run-time check is made on the **`static_cast`** conversion of `pb`. The object pointed to by `pb` may not be an object of type `D`, in which case the use of `*pd2` could be disastrous. For instance, calling a function that is a member of the `D` class, but not the `B` class, could result in an access violation.

The **`dynamic_cast`** and **`static_cast`** operators move a pointer throughout a class hierarchy. However, **`static_cast`** relies exclusively on the information provided in the cast statement and can therefore be unsafe. For example:

```cpp
// static_cast_Operator_2.cpp
// compile with: /LD /GR
class B {
public:
   virtual void Test(){}
};
class D : public B {};

void f(B* pb) {
   D* pd1 = dynamic_cast<D*>(pb);
   D* pd2 = static_cast<D*>(pb);
}
```

If `pb` really points to an object of type `D`, then `pd1` and `pd2` will get the same value. They will also get the same value if `pb == 0`.

If `pb` points to an object of type `B` and not to the complete `D` class, then **`dynamic_cast`** will know enough to return zero. However, **`static_cast`** relies on the programmer's assertion that `pb` points to an object of type `D` and simply returns a pointer to that supposed `D` object.

Consequently, **`static_cast`** can do the inverse of implicit conversions, in which case the results are undefined. It is left to the programmer to verify that the results of a **`static_cast`** conversion are safe.

This behavior also applies to types other than class types. For instance, **`static_cast`** can be used to convert from an int to a **`char`**. However, the resulting **`char`** may not have enough bits to hold the entire **`int`** value. Again, it is left to the programmer to verify that the results of a **`static_cast`** conversion are safe.

The **`static_cast`** operator can also be used to perform any implicit conversion, including standard conversions and user-defined conversions. For example:

```cpp
// static_cast_Operator_3.cpp
// compile with: /LD /GR
typedef unsigned char BYTE;

void f() {
   char ch;
   int i = 65;
   float f = 2.5;
   double dbl;

   ch = static_cast<char>(i);   // int to char
   dbl = static_cast<double>(f);   // float to double
   i = static_cast<BYTE>(ch);
}
```

The **`static_cast`** operator can explicitly convert an integral value to an enumeration type. If the value of the integral type does not fall within the range of enumeration values, the resulting enumeration value is undefined.

The **`static_cast`** operator converts a null pointer value to the null pointer value of the destination type.

Any expression can be explicitly converted to type void by the **`static_cast`** operator. The destination void type can optionally include the **`const`**, **`volatile`**, or **`__unaligned`** attribute.

The **`static_cast`** operator cannot cast away the **`const`**, **`volatile`**, or **`__unaligned`** attributes. See [const_cast Operator](../cpp/const-cast-operator.md) for information on removing these attributes.

**C++/CLI:** Due to the danger of performing unchecked casts on top of a relocating garbage collector, the use of **`static_cast`** should only be in performance-critical code when you are certain it will work correctly. If you must use **`static_cast`** in release mode, substitute it with [safe_cast](../extensions/safe-cast-cpp-component-extensions.md) in your debug builds to ensure success.

## See also

[Casting Operators](../cpp/casting-operators.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
