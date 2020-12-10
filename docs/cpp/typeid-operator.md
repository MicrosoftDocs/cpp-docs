---
description: "Learn more about: typeid Operator"
title: "typeid Operator"
ms.date: "10/04/2019"
helpviewer_keywords: ["typeid operator"]
ms.assetid: 8871cee6-d6b9-4301-a5cb-bf3dc9798d61
---
# typeid Operator

## Syntax

```
typeid(type-id)
typeid(expression)
```

## Remarks

The **`typeid`** operator allows the type of an object to be determined at run time.

The result of **`typeid`** is a `const type_info&`. The value is a reference to a `type_info` object that represents either the *type-id* or the type of the *expression*, depending on which form of **`typeid`** is used. For more information, see [type_info Class](../cpp/type-info-class.md).

The **`typeid`** operator doesn't work with managed types (abstract declarators or instances). For information on getting the <xref:System.Type> of a specified type, see [typeid](../extensions/typeid-cpp-component-extensions.md).

The **`typeid`** operator does a run-time check when applied to an l-value of a polymorphic class type, where the true type of the object can't be determined by the static information provided. Such cases are:

- A reference to a class

- A pointer, dereferenced with `*`

- A subscripted pointer (`[ ]`). (It's not safe to use a subscript with a pointer to a polymorphic type.)

If the *expression* points to a base class type, yet the object is actually of a type derived from that base class, a `type_info` reference for the derived class is the result. The *expression* must point to a polymorphic type (a class with virtual functions). Otherwise, the result is the `type_info` for the static class referred to in the *expression*. Further, the pointer must be dereferenced so that the object used is the one it points to. Without dereferencing the pointer, the result will be the `type_info` for the pointer, not what it points to. For example:

```cpp
// expre_typeid_Operator.cpp
// compile with: /GR /EHsc
#include <iostream>
#include <typeinfo>

class Base {
public:
   virtual void vvfunc() {}
};

class Derived : public Base {};

using namespace std;
int main() {
   Derived* pd = new Derived;
   Base* pb = pd;
   cout << typeid( pb ).name() << endl;   //prints "class Base *"
   cout << typeid( *pb ).name() << endl;   //prints "class Derived"
   cout << typeid( pd ).name() << endl;   //prints "class Derived *"
   cout << typeid( *pd ).name() << endl;   //prints "class Derived"
   delete pd;
}
```

If the *expression* is dereferencing a pointer, and that pointer's value is zero, **`typeid`** throws a [bad_typeid exception](../cpp/bad-typeid-exception.md). If the pointer doesn't point to a valid object, a `__non_rtti_object` exception is thrown. It indicates an attempt to analyze the RTTI that triggered a fault because the object is somehow invalid. (For example, it's a bad pointer, or the code wasn't compiled with [/GR](../build/reference/gr-enable-run-time-type-information.md)).

If the *expression* is not a pointer, and not a reference to a base class of the object, the result is a `type_info` reference representing the static type of the *expression*. The *static type* of an expression refers to the type of an expression as it is known at compile time. Execution semantics are ignored when evaluating the static type of an expression. Furthermore, references are ignored when possible when determining the static type of an expression:

```cpp
// expre_typeid_Operator_2.cpp
#include <typeinfo>

int main()
{
   typeid(int) == typeid(int&); // evaluates to true
}
```

**`typeid`** can also be used in templates to determine the type of a template parameter:

```cpp
// expre_typeid_Operator_3.cpp
// compile with: /c
#include <typeinfo>
template < typename T >
T max( T arg1, T arg2 ) {
   cout << typeid( T ).name() << "s compared." << endl;
   return ( arg1 > arg2 ? arg1 : arg2 );
}
```

## See also

[Run-Time Type Information](../cpp/run-time-type-information.md)\
[Keywords](../cpp/keywords-cpp.md)
