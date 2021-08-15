---
description: "Learn more about: interior_ptr (C++/CLI)"
title: "interior_ptr (C++/CLI)"
ms.date: "10/12/2018"
ms.topic: "reference"
f1_keywords: ["stdcli::language::interior_ptr", "interior_ptr_cpp", "interior_ptr"]
helpviewer_keywords: ["interior_ptr keyword [C++]"]
ms.assetid: 25160f74-569e-492d-9e3c-67ece7486baa
---
# interior_ptr (C++/CLI)

An *interior pointer* declares a pointer to inside a reference type, but not to the object itself. An interior pointer can point to a reference handle, value type, boxed type handle, member of a managed type, or to an element of a managed array.

## All Runtimes

(There are no remarks for this language feature that apply to all runtimes.)

## Windows Runtime

(There are no remarks for this language feature that apply to only the Windows Runtime.)

### Requirements

Compiler option: `/ZW`

## Common Language Runtime

The following syntax example demonstrates an interior pointer.

### Syntax

```cpp
cli::interior_ptr<cv_qualifier type> var = &initializer;
```

### Parameters

*cv_qualifier*<br/>
**`const`** or **`volatile`** qualifiers.

*type*<br/>
The type of *initializer*.

*var*<br/>
The name of the **interior_ptr** variable.

*initializer*<br/>
A member of a reference type, element of a managed array, or any other object that you can assign to a native pointer.

### Remarks

A native pointer is not able to track an item as its location changes on the managed heap, which results from the garbage collector moving instances of an object. In order for a pointer to correctly refer to the instance, the runtime needs to update the pointer to the newly positioned object.

An **interior_ptr** represents a superset of the functionality of a native pointer.  Therefore, anything that can be assigned to a native pointer can also be assigned to an **interior_ptr**.  An interior pointer is permitted to perform the same set of operations as native pointers, including comparison and pointer arithmetic.

An interior pointer can only be declared on the stack.  An interior pointer cannot be declared as a member of a class.

Since interior pointers exist only on the stack, taking the address of an interior pointer yields an unmanaged pointer.

**interior_ptr** has an implicit conversion to **`bool`**, which allows for its use in conditional statements.

For information on how to declare an interior pointer that points into an object that cannot be moved on the garbage-collected heap, see [pin_ptr](pin-ptr-cpp-cli.md).

**interior_ptr** is in the cli namespace.  See [Platform, default, and cli Namespaces](platform-default-and-cli-namespaces-cpp-component-extensions.md) for more information.

For more information on interior pointers, see

- [How to: Declare and Use Interior Pointers and Managed Arrays (C++/CLI)](how-to-declare-and-use-interior-pointers-and-managed-arrays-cpp-cli.md)

- [How to: Declare Value Types with the interior_ptr Keyword (C++/CLI)](how-to-declare-value-types-with-the-interior-ptr-keyword-cpp-cli.md)

- [How to: Overload Functions with Interior Pointers and Native Pointers (C++/CLI)](how-to-overload-functions-with-interior-pointers-and-native-pointers-cpp-cli.md)

- [How to: Declare Interior Pointers with the const Keyword (C++/CLI)](how-to-declare-interior-pointers-with-the-const-keyword-cpp-cli.md)

### Requirements

Compiler option: `/clr`

### Examples

The following sample shows how to declare and use an interior pointer into a reference type.

```cpp
// interior_ptr.cpp
// compile with: /clr
using namespace System;

ref class MyClass {
public:
   int data;
};

int main() {
   MyClass ^ h_MyClass = gcnew MyClass;
   h_MyClass->data = 1;
   Console::WriteLine(h_MyClass->data);

   interior_ptr<int> p = &(h_MyClass->data);
   *p = 2;
   Console::WriteLine(h_MyClass->data);

   // alternatively
   interior_ptr<MyClass ^> p2 = &h_MyClass;
   (*p2)->data = 3;
   Console::WriteLine((*p2)->data);
}
```

```Output
1
2
3
```

## See also

[Component Extensions for .NET and UWP](component-extensions-for-runtime-platforms.md)
