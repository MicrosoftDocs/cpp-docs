---
description: "Learn more about: Generic functions (C++/CLI)"
title: "Generic Functions (C++/CLI)"
ms.date: 05/31/2022
ms.topic: "reference"
helpviewer_keywords: ["functions [C++], generic", "generic methods", "generics [C++], functions", "methods [C++], generic", "generic functions"]
ms.assetid: 8e409364-58f9-4360-b486-e7d555e0c218
---
# Generic functions (C++/CLI)

A generic function is a function that is declared with type parameters. When called, actual types are used instead of the type parameters.

## All platforms

### Remarks

This feature doesn't apply to all platforms.

## Windows Runtime

### Remarks

This feature isn't supported in the Windows Runtime.

### Requirements

Not applicable.

## Common Language Runtime

A generic function is a function that's declared with generic type parameters. When called, actual types are used instead of the type parameters.

### Syntax

*`generic-declaration`*:\
&emsp; **`generic`** **`<`** *`generic-parameter-list`* **`>`** *`constraint-clause-list`*<sub>opt</sub> *`function-definition`*

*`generic-parameter-list`*:\
&emsp; *`generic-parameter`*\
&emsp; *`generic-parameter-list`* **`,`** *`generic-parameter`*

*`generic-parameter`*:\
&emsp; *`attributes`*<sub>opt</sub> **`class`** *`identifier`*\
&emsp; *`attributes`*<sub>opt</sub> **`typename`** *`identifier`*

*`constraint-clause-list`*:\
&emsp; *`constraint-clause-list`*<sub>opt</sub> *`constraint-clause`*

*`constraint-clause`*:\
&emsp; **`where`** *`identifier`* **`:`** *`constraint-item-list`*

*`constraint-item-list`*:\
&emsp; *`constraint-item`*\
&emsp; *`constraint-item-list`* **`,`** *`constraint-item`*

*`constraint-item`*:\
&emsp; *`type-id`*\
&emsp; **`ref class`**\
&emsp; **`ref struct`**\
&emsp; **`value class`**\
&emsp; **`value struct`**\
&emsp; **`gcnew ( )`**

*`generic-id`*:\
&emsp; *`generic-name`* **`<`** *`generic-argument-list`* **`>`**

*`generic-name`*:\
&emsp; *`identifier`*\
&emsp; *`operator-function-id`*

*`generic-argument-list`*:\
&emsp; *`generic-argument`*\
&emsp; *`generic-argument-list`* **`,`** *`generic-argument`*

*`generic-argument`*:\
&emsp; *`type-id`*

### Parameters

*`generic-parameter-list`*\
A comma-separated list of optionally attributed generic type parameter identifiers.

*`attributes`*\
(Optional) Extra declarative information. For more information on attributes and attribute classes, see [attributes](../cppcx/attributes-c-cx.md).

*`constraint-clause-list`*\
This optional list specifies restrictions on the types that may be used as type arguments. It takes the form specified in [Constraints on generic type parameters (C++/CLI)](constraints-on-generic-type-parameters-cpp-cli.md).

*`function-definition`*\
A definition of a method or standalone function. The function may not have a `virtual` modifier, which isn't allowed since virtual methods may not be generic. The body of the function may refer to the generic type parameter identifiers. The function may be an `operator` function.

*`generic-id`*\
When you invoke an instance of a generic function, you specify the types used to implement it in the *`generic-argument-list`*. This list corresponds to the *`generic-parameter-list`*, and must satisfy the constraints of the optional *`constraint-clause-list`*.

*`generic-name`*\
A generic function may have an *`identifier`* as its name, or it may be an `operator` function.

### Remarks

Generic functions are functions declared with one or more generic type parameters. They may be methods in a `class` or `struct`, or standalone functions. A single generic declaration implicitly declares a family of functions that differ only in the substitution of a different actual type for the generic type parameter.

A `class` or `struct` constructor may not be declared with generic type parameters.

When called, the generic type parameter is replaced by an actual type. The actual type may be explicitly specified in angled brackets using syntax similar to a function template call. If called without the type parameters, the compiler will attempt to deduce the actual type from the parameters supplied in the function call. The compiler reports an error if the intended type argument can't be deduced from the parameters used.

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

Generic functions can be overloaded based on signature or *arity*, the number of type parameters on a function. Also, generic functions can be overloaded with non-generic functions of the same name, as long as the functions differ in some type parameters. For example, the following functions can be overloaded:

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

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)\
[Generics](generics-cpp-component-extensions.md)
