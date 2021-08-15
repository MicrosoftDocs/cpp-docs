---
description: "Learn more about: Overview of Generics in C++/CLI"
title: "Overview of Generics in C++/CLI"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["generics [C++], about generics", "default initializers [C++]", "type parameters [C++]", "constructed types", "type arguments [C++]", "constructed types, open [C++]", "open constructed types [C++]", "constructed types, closed [C++]"]
ms.assetid: 21f10637-0fce-4916-b925-6c86a126d3aa
---
# Overview of Generics in C++/CLI

Generics are parameterized types supported by the common language runtime. A parameterized type is a type that is defined with an unknown type parameter that is specified when the generic is used.

## Why Generics?

C++ supports templates and both templates and generics support parameterized types to create typed collection classes. However, templates provide compile-time parameterization. You cannot reference an assembly containing a template definition and create new specializations of the template. Once compiled, a specialized template looks like any other class or method. In contrast, generics are emitted in MSIL as a parameterized type known by the runtime to be a parameterized type; source code that references an assembly containing a generic type can create specializations of the generic type. For more information on the comparison of standard C++ templates and generics, see [Generics and Templates (C++/CLI)](generics-and-templates-visual-cpp.md).

## Generic Functions and Types

Class types, as long as they are managed types, may be generic. An example of this might be a `List` class. The type of an object in the list would be the type parameter. If you needed a `List` class for many different types of objects, before generics you might have used a `List` that takes `System::Object` as the item type. But that would allow any object (including objects of the wrong type) to be used in the list. Such a list would be called an untyped collection class. At best, you could check the type at runtime and throw an exception. Or, you might have used a template, which would lose its generic quality once compiled into an assembly. Consumers of your assembly could not create their own specializations of the template. Generics allow you to create typed collection classes, say `List<int>` (read as "List of int") and `List<double>` ("List of double") which would generate a compile-time error if you tried to put a type that the collection was not designed to accept into the typed collection. In addition, these types remain generic after they are compiled.

A description of the syntax of generic classes may be found in [Generic Classes (C++/CLI)](generic-classes-cpp-cli.md). A new namespace, <xref:System.Collections.Generic>, introduces a set of parameterized collection types including <xref:System.Collections.Generic.Dictionary%602>, <xref:System.Collections.Generic.List%601> and <xref:System.Collections.Generic.LinkedList%601>.

Both instance and static class member functions, delegates, and global functions may also be generic. Generic functions may be necessary if the function's parameters are of an unknown type, or if the function itself must work with generic types. In many cases where `System::Object` may have been used in the past as a parameter for an unknown object type, a generic type parameter may be used instead, allowing for more type-safe code. Any attempt to pass in a type that the function was not designed for would be flagged as an error at compile time. Using `System::Object` as a function parameter, the inadvertent passing of an object that the function wasn't intended to deal with would not be detected, and you would have to cast the unknown object type to a specific type in the function body, and account for the possibility of an InvalidCastException. With a generic, code attempting to pass an object to the function would cause a type conflict so the function body is guaranteed to have the correct type.

The same benefits apply to collection classes built on generics. Collection classes in the past would use `System::Object` to store elements in a collection. Insertion of objects of a type that the collection was not designed for was not flagged at compile time, and often not even when the objects were inserted. Usually, an object would be cast to some other type when it was accessed in the collection. Only when the cast failed would the unexpected type be detected. Generics solves this problem at compile time by detecting any code that inserts a type that doesn't match (or implicitly convert to) the type parameter of the generic collection.

For a description of the syntax, see [Generic Functions (C++/CLI)](generic-functions-cpp-cli.md).

## Terminology Used With Generics

### Type Parameters

A generic declaration contains one or more unknown types known as *type parameters*. Type parameters are given a name which stands for the type within the body of the generic declaration. The type parameter is used as a type within the body of the generic declaration. The generic declaration for `List<T>` contains the type parameter T.

### Type Arguments

The *type argument* is the actual type used in place of the type parameter when the generic is specialized for a specific type or types. For example, **`int`** is the type argument in `List<int>`. Value types and handle types are the only types allowed in as a generic type argument.

### Constructed Type

A type constructed from a generic type is referred to as a *constructed type*. A type not fully specified, such as `List<T>` is an *open constructed type*; a type fully specified, such as `List<double>,` is a *closed constructed type* or *specialized type*. Open constructed types may be used in the definition of other generic types or methods and may not be fully specified until the enclosing generic is itself specified. For example, the following is a use of an open constructed type as a base class for a generic:

```cpp
// generics_overview.cpp
// compile with: /clr /c
generic <typename T>

ref class List {};

generic <typename T>

ref class Queue : public List<T> {};
```

### Constraint

A constraint is a restriction on the types that may be used as a type parameter. For example, a given generic class could accept only classes that inherit from a specified class, or implement a specified interface. For more information, see [Constraints on Generic Type Parameters (C++/CLI)](constraints-on-generic-type-parameters-cpp-cli.md).

## Reference Types and Value Types

Handles types and value types may be used as type arguments. In the generic definition, in which either type may be used, the syntax is that of reference types. For example, the `->` operator is used to access members of the type of the type parameter whether or not the type eventually used is a reference type or a value type. When a value type is used as the type argument, the runtime generates code that uses the value types directly without boxing the value types.

When using a reference type as a generic type argument, use the handle syntax. When using a value type as a generic type argument, use the name of the type directly.

```cpp
// generics_overview_2.cpp
// compile with: /clr
generic <typename T>

ref class GenericType {};
ref class ReferenceType {};

value struct ValueType {};

int main() {
    GenericType<ReferenceType^> x;
    GenericType<ValueType> y;
}
```

## Type Parameters

Type parameters in a generic class are treated like other identifiers. However, because the type is not known, there are restrictions on their use. For example, you cannot use members and methods of the type parameter class unless the type parameter is known to support these members. That is, to access a member through the type parameter, you must add the type that contains the member to the type parameter's constraint list.

```cpp
// generics_overview_3.cpp
// compile with: /clr
interface class I {
   void f1();
   void f2();
};

ref struct R : public I {
   virtual void f1() {}
   virtual void f2() {}
   virtual void f3() {}
};

generic <typename T>
where T : I
void f(T t) {
   t->f1();
   t->f2();
   safe_cast<R^>(t)->f3();
}

int main() {
   f(gcnew R());
}
```

These restrictions apply to operators as well. An unconstrained generic type parameter may not use the `==` and `!=` operators to compare two instances of the type parameter, in case the type does not support these operators. These checks are necessary for generics, but not for templates, because generics may be specialized at runtime with any class that satisfies the constraints, when it is too late to check for the use of invalid members.

A default instance of the type parameter may be created by using the `()` operator. For example:

`T t = T();`

where `T` is a type parameter in a generic class or method definition, initializes the variable to its default value. If `T` is a ref class it will be a null pointer; if `T` is a value class, the object is initialized to zero. This is called a *default initializer*.

## See also

[Generics](generics-cpp-component-extensions.md)
