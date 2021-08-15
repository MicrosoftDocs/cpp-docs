---
description: "Learn more about: Generic Functions (C++/CLI)"
title: "Generic Functions (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["functions [C++], generic", "generic methods", "generics [C++], functions", "methods [C++], generic", "generic functions"]
ms.assetid: 8e409364-58f9-4360-b486-e7d555e0c218
---
# Generic Functions (C++/CLI)

A generic function is a function that is declared with type parameters. When called, actual types are used instead of the type parameters.

## All Platforms

### Remarks

This feature does not apply to all platforms.

## Windows Runtime

### Remarks

This feature is not supported in the Windows Runtime.

### Requirements

Compiler option: `/ZW`

## Common Language Runtime

A generic function is a function that is declared with type parameters. When called, actual types are used instead of the type parameters.

### Syntax

```cpp
[attributes] [modifiers]
return-type identifier<type-parameter identifier(s)>
[type-parameter-constraints clauses]

([formal-parameters])
{function-body}
```

### Parameters

*attributes*<br/>
(Optional) Additional declarative information. For more information on attributes and attribute classes, see attributes.

*modifiers*<br/>
(Optional) A modifier for the function, such as static.  **`virtual`** is not allowed since virtual methods may not be generic.

*return-type*<br/>
The type returned by the method. If the return type is void, no return value is required.

*identifier*<br/>
The function name.

*type-parameter identifier(s)*<br/>
Comma-separated identifiers list.

*formal-parameters*<br/>
(Optional) Parameter list.

*type-parameter-constraints-clauses*<br/>
This specifies restrictions on the types that may be used as type arguments, and takes the form specified in [Constraints on Generic Type Parameters (C++/CLI)](constraints-on-generic-type-parameters-cpp-cli.md).

*function-body*<br/>
The body of the method, which may refer to the type parameter identifiers.

### Remarks

Generic functions are functions declared with a generic type parameter. They may be methods in a class or struct, or standalone functions. A single generic declaration implicitly declares a family of functions that differ only in the substitution of a different actual type for the generic type parameter.

A class or struct constructor may not be declared with generic type parameters.

When called, the generic type parameter is replaced by an actual type. The actual type may be explicitly specified in angled brackets using syntax similar to a template function call. If called without the type parameters, the compiler will attempt to deduce the actual type from the parameters supplied in the function call. If the intended type argument cannot be deduced from the parameters used, the compiler will report an error.

### Requirements

Compiler option: `/clr`

### Examples

The following code sample demonstrates a generic function.

```cpp
// generics_generic_function_1.cpp
// compile with: /clr
generic <typename ItemType>
void G(int i) {}

ref struct A {
   generic <typename ItemType>
   void G(ItemType) {}

   generic <typename ItemType>
   static void H(int i) {}
};

int main() {
   A myObject;

   // generic function call
   myObject.G<int>(10);

   // generic function call with type parameters deduced
   myObject.G(10);

   // static generic function call
   A::H<int>(10);

   // global generic function call
   G<int>(10);
}
```

Generic functions can be overloaded based on signature or arity, the number of type parameters on a function. Also, generic functions can be overloaded with non-generic functions of the same name, as long as the functions differ in some type parameters. For example, the following functions can be overloaded:

```cpp
// generics_generic_function_2.cpp
// compile with: /clr /c
ref struct MyClass {
   void MyMythod(int i) {}

   generic <class T>
   void MyMythod(int i) {}

   generic <class T, class V>
   void MyMythod(int i) {}
};
```

The following example uses a generic function to find the first element in an array. It declares `MyClass`, which inherits from the base class `MyBaseClass`. `MyClass` contains a generic function, `MyFunction`, which calls another generic function, `MyBaseClassFunction`, within the base class. In `main`, the generic function, `MyFunction`, is called using different type arguments.

```cpp
// generics_generic_function_3.cpp
// compile with: /clr
using namespace System;

ref class MyBaseClass {
protected:
   generic <class ItemType>
   ItemType MyBaseClassFunction(ItemType item) {
      return item;
   }
};

ref class MyClass: public MyBaseClass {
public:
   generic <class ItemType>
   ItemType MyFunction(ItemType item) {
      return MyBaseClass::MyBaseClassFunction<ItemType>(item);
   }
};

int main() {
   MyClass^ myObj = gcnew MyClass();

   // Call MyFunction using an int.
   Console::WriteLine("My function returned an int: {0}",
                           myObj->MyFunction<int>(2003));

   // Call MyFunction using a string.
   Console::WriteLine("My function returned a string: {0}",
   myObj->MyFunction<String^>("Hello generic functions!"));
}
```

```Output
My function returned an int: 2003
My function returned a string: Hello generic functions!
```

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)<br/>
[Generics](generics-cpp-component-extensions.md)
