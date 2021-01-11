---
description: "Learn more about: Generics and Templates (C++/CLI)"
title: "Generics and Templates (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
helpviewer_keywords: ["generics [C++], vs. templates", "templates, C++"]
ms.assetid: 63adec79-b1dc-4a1a-a21d-b8a72a8fce31
---
# Generics and Templates (C++/CLI)

Generics and templates are both language features that provide support for parameterized types. However, they are different and have different uses. This topic provides an overview of the many differences.

For more information, see [Windows Runtime and Managed Templates](windows-runtime-and-managed-templates-cpp-component-extensions.md).

## Comparing Templates and Generics

Key differences between generics and C++ templates:

- Generics are generic until the types are substituted for them at runtime. Templates are specialized at compile time so they are not still parameterized types at runtime

- The common language runtime specifically supports generics in MSIL. Because the runtime knows about generics, specific types can be substituted for generic types when referencing an assembly containing a generic type. Templates, in contrast, resolve into ordinary types at compile time and the resulting types may not be specialized in other assemblies.

- Generics specialized in two different assemblies with the same type arguments are the same type. Templates specialized in two different assemblies with the same type arguments are considered by the runtime to be different types.

- Generics are generated as a single piece of executable code which is used for all reference type arguments (this is not true for value types, which have a unique implementation per value type). The JIT compiler knows about generics and is able to optimize the code for the reference or value types that are used as type arguments. Templates generate separate runtime code for each specialization.

- Generics do not allow non-type template parameters, such as `template <int i> C {}`. Templates allow them.

- Generics do not allow explicit specialization (that is, a custom implementation of a template for a specific type). Templates do.

- Generics do not allow partial specialization (a custom implementation for a subset of the type arguments). Templates do.

- Generics do not allow the type parameter to be used as the base class for the generic type. Templates do.

- Templates support template-template parameters (e.g. `template<template<class T> class X> class MyClass`), but generics do not.

## Combining Templates and Generics

The basic difference in generics has implications for building applications that combine templates and generics. For example, suppose you have a template class that you want to create a generic wrapper for to expose that template to other languages as a generic. You cannot have the generic take a type parameter that it then passes though to the template, since the template needs to have that type parameter at compile time, but the generic won't resolve the type parameter until runtime. Nesting a template inside a generic won't work either because there's no way to expand the templates at compile time for arbitrary generic types that could be instantiated at runtime.

## Example

### Description

The following example shows a simple example of using templates and generics together. In this example, the template class passes its parameter through to the generic type. The reverse is not possible.

This idiom could be used when you want to build on an existing generic API with template code that is local to a C++/CLI assembly, or when you need to add an extra layer of parameterization to a generic type, to take advantage of certain features of templates not supported by generics.

### Code

```cpp
// templates_and_generics.cpp
// compile with: /clr
using namespace System;

generic <class ItemType>
ref class MyGeneric {
   ItemType m_item;

public:
   MyGeneric(ItemType item) : m_item(item) {}
   void F() {
      Console::WriteLine("F");
   }
};

template <class T>
public ref class MyRef {
MyGeneric<T>^ ig;

public:
   MyRef(T t) {
      ig = gcnew MyGeneric<T>(t);
      ig->F();
    }
};

int main() {
   // instantiate the template
   MyRef<int>^ mref = gcnew MyRef<int>(11);
}
```

```Output
F
```

## See also

[Generics](generics-cpp-component-extensions.md)
