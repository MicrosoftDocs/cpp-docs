---
description: "Learn more about: Type System (C++/CX)"
title: "Type System (C++/CX)"
ms.date: "02/03/2017"
ms.assetid: b67bee8a-b526-4872-969e-ef22724e88fe
---
# Type System (C++/CX)

By using the Windows Runtime architecture, you can use C++/CX, Visual Basic, Visual C# and JavaScript to write apps and components that directly access the Windows API and interoperate with other Windows Runtime apps and components. Universal Windows Platform apps that are written in C++ compile to native code that executes directly in the CPU. Universal Windows Platform apps that are written in C# or Visual Basic compile to Microsoft intermediate language (MSIL) and execute in the common language runtime (CLR). Universal Windows Platform apps that are written in JavaScript execute in a run-time environment. The Windows Runtime operating system components themselves are written in C++ and run as native code. All of these components and Universal Windows Platform apps communicate directly through the Windows Runtime application binary interface (ABI).

To enable support for the Windows Runtime in a modern C++ idiom, Microsoft created the C++/CX. C++/CX provides built-in base types and implementations of fundamental Windows Runtime types that enable C++ apps and components to communicate across the ABI with apps that are written in other languages. You can consume any Windows Runtime type, or create classes, structs, interfaces, and other user-defined types that can be consumed by other Universal Windows Platform apps and components. a Universal Windows Platform app that's written in C++/CX can also use regular C++ classes and structs as long as they don't have public accessibility.

For an in-depth discussion of the C++/CX language projection and how it works under the covers, see these blog posts:

- [C++/CX Part 0 of \[n\]: An Introduction](https://devblogs.microsoft.com/cppblog/ccx-part-0-of-n-an-introduction/)

- [C++/CX Part 1 of \[n\]: A Simple Class](https://devblogs.microsoft.com/cppblog/ccx-part-1-of-n-a-simple-class/)

- [C++/CX Part 2 of \[n\]: Types That Wear Hats](https://devblogs.microsoft.com/cppblog/ccx-part-2-of-n-types-that-wear-hats/)

- [C++/CX Part 3 of \[n\]: Under Construction](https://devblogs.microsoft.com/cppblog/ccx-part-3-of-n-under-construction/)

- [C++/CX Part 4 of \[n\]: Static Member Functions](https://devblogs.microsoft.com/cppblog/ccx-part-4-of-n-static-member-functions/)

## Windows metadata (.winmd) files

When you compile a Universal Windows Platform app that's written in C++, the compiler generates the executable in native machine code, and also generates a separate Windows metadata (.winmd) file that contains descriptions of the public Windows Runtime types, which include classes, structs, enumerations, interfaces, parameterized interfaces, and delegates. The format of the metadata resembles the format that's used in .NET Framework assemblies.  In a C++ component, the .winmd file contains only metadata; the executable code resides in a separate file. This is the case for the Windows Runtime components that are included with Windows. The WinMD file name must match or be a prefix of the root namespace in the source code. (For .NET Framework languages, the .winmd file contains both the code and the metadata, just like a .NET Framework assembly.)

The metadata in the .winmd file represents the published surface of your code. Published types are visible to other Universal Windows Platforms no matter what language those other apps are written in. Therefore, the metadata, or your published code, can only contain types specified by the Windows Runtime type system. Language constructs that are specific to C++, such as regular classes, arrays, templates or STL containers, cannot be published in metadata because a Javascript or C# client app would not know what to do with them.

Whether a type or method is visible in metadata depends on what accessibility modifiers are applied to it. To be visible, a type must be declared in a namespace and must be declared as public. A non-public ref class is permitted as an internal helper type in your code; it just isn't visible in the metadata. Even in a public ref class, not all members are necessarily visible. The following table lists the relationship between C++ access specifiers in a public ref class, and Windows Runtime metadata visibility:

| Published in metadata | Not published in metadata |
|--|--|
| public | private |
| protected | internal |
| public protected | private protected |

You can use the **Object Browser** to view the contents of .winmd files. The Windows Runtime components that are included with Windows are in the Windows.winmd file. The default.winmd file contains the fundamental types that are used in C++/CX, and platform.winmd contains additional types from the Platform namespace. By default, these three .winmd files are included in every C++ project for Universal Windows Platform apps.

> [!TIP]
> The types in the [Platform::Collections Namespace](../cppcx/platform-collections-namespace.md) don't appear in the .winmd file because they are not public. They are private C++-specific implementations of the interfaces that are defined in `Windows::Foundation::Collections`. A Windows Runtime app that's written in JavaScript or C# doesn't know what a [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md) is, but it can consume a `Windows::Foundation::Collections::IVector`. The `Platform::Collections` types are defined in collection.h.

## Windows Runtime type system in C++/CX

The following sections describe the major features of the Windows Runtime type system and how they are supported in C++/CX.

### Namespaces

All Windows Runtime types must be declared within a namespace; the Windows API itself is organized by namespaces. A .winmd file must have the same name that the root namespace has. For example, a class that's named A.B.C.MyClass can be instantiated only if it's defined in a metadata file that's named A.winmd or A.B.winmd or A.B.C.winmd. The name of the DLL is not required to match the .winmd file name.

The Windows API itself has been reinvented as a well-factored class library that's organized by namespaces.  All Windows Runtime components are declared in the Windows.* namespaces.

For more information, see [Namespaces and Type Visibility](../cppcx/namespaces-and-type-visibility-c-cx.md).

### Fundamental types

The Windows Runtime defines the following fundamental types, UInt8, Int16, UInt16, Int32, UInt32, Int64, UInt64, Single, Double, Char16, Boolean, and String. C++/CX supports the fundamental numeric types in its default namespace as uint16, uint32, uint64, int16, int32, int64, float32, float64, and char16. Boolean and String are also defined in the Platform namespace.

C++/CX also defines uint8, equivalent to **`unsigned char`**, which is not supported in the Windows Runtime and cannot be used in public APIs.

A fundamental type may be made nullable by wrapping it in a [Platform::IBox Interface](../cppcx/platform-ibox-interface.md) interface. For more information, see [Value classes and structs](../cppcx/value-classes-and-structs-c-cx.md).

For more information about fundamental types, see [Fundamental types](../cppcx/fundamental-types-c-cx.md)

### Strings

A Windows Runtime string is an immutable sequence of 16-bit UNICODE characters. A Windows Runtime string is projected as `Platform::String^`. This class provides methods for string construction, manipulation, and conversion to and from **`wchar_t`**.

For more information, see [Strings](../cppcx/strings-c-cx.md).

### Arrays

The Windows Runtime supports 1-dimensional arrays of any type. Arrays of arrays are not supported.  In C++/CX, Windows Runtime arrays are projected as the [Platform::Array Class](../cppcx/platform-array-class.md).

For more information, see [Array and WriteOnlyArray](../cppcx/array-and-writeonlyarray-c-cx.md)

### Ref classes and structs

A Windows Runtime class is projected in C++/CX as a ref class or ref struct, because they are copied by reference. Memory management for ref classes and ref structs is handled transparently by means of reference counting. When the last reference to an object goes out of scope, the object is destroyed. A ref class or ref struct can:

- Contain as members constructors, methods, properties, and events. These members can have public, private, protected, or internal accessibility.

- Can contain private nested enum, struct, or class definitions.

- Can directly inherit from one base class and can implement any number of interfaces. All ref classes are implicitly convertible to the [Platform::Object Class](../cppcx/platform-object-class.md) and can override its virtual methods—for example, [Object::ToString](../cppcx/platform-object-class.md#tostring).

A ref class that has a public constructor must be declared as sealed, to prevent further derivation.

For more information, see [Ref classes and structs](../cppcx/ref-classes-and-structs-c-cx.md)

### Value classes and structs

A value class or value struct represents a basic data structure and contains only fields, which may be value classes, value structs, or type `Platform::String^`.  Value structs and value classes are copied by value.

A value struct can be made nullable by wrapping in an IBox interface.

For more information, see [Value classes and structs](../cppcx/value-classes-and-structs-c-cx.md).

### Partial classes

The partial class feature enables one class to be defined over multiple files. It's used primarily to enable code-generation tools such as the XAML editor to modify one file without touching the file that you edit.

For more information, see [Partial classes](../cppcx/partial-classes-c-cx.md)

### Properties

A property is a public data member of any Windows Runtime type and is implemented as a get/set method pair. Client code accesses a property as if it were a public field. A property that requires no custom get or set code is known as a *trivial property* and can be declared without explicit get or set methods.

For more information, see [Properties](../cppcx/properties-c-cx.md).

### Windows Runtime collections in C++/CX

The Windows Runtime defines a set of interfaces for collection types that each language implements in its own way. C++/CX provides implementations in the [Platform::Collections::Vector Class](../cppcx/platform-collections-vector-class.md), [Platform::Collections::Map Class](../cppcx/platform-collections-map-class.md), and other related concrete collection types, which are compatible with their Standard Template Library (STL) counterparts.

For more information, see [Collections](../cppcx/collections-c-cx.md).

### Template ref classes

Private and internal ref classes can be templated and specialized.

For more information, see [Template ref classes](../cppcx/template-ref-classes-c-cx.md).

### Interfaces

A Windows Runtime interface defines a set of public properties, methods, and events that a ref class or ref struct must implement if it inherits from the interface.

For more information, see [Interfaces](../cppcx/interfaces-c-cx.md).

### Enums

An enum class in Windows Runtime resembles a scoped enum in C++. The underlying type is int32, unless the [Flags] attribute is applied—in that case, the underlying type is uint32.

For more information, see [Enums](../cppcx/enums-c-cx.md).

### Delegates

A delegate in the Windows Runtime is analogous to a std::function object in C++. It's a special kind of ref class that's used to invoke client-provided functions that have compatible signatures.  Delegates are most commonly used in the Windows Runtime as the type of an event.

For more information, see [Delegates](../cppcx/delegates-c-cx.md).

### Exceptions

In C++/CX, you can catch custom exception types, [std::exception](../standard-library/exception-class.md) types, and [Platform::Exception](../cppcx/platform-exception-class.md) types.

For more information, see [Exceptions](../cppcx/exceptions-c-cx.md).

### Events

An event is a public member in a ref class or ref struct whose type is a delegate type. An event can only be invoked—that is, fired—by the owning class. However, client code can provide its own functions, which are known as event handlers and are invoked when the owning class fires the event.

For more information, see [Events](../cppcx/events-c-cx.md).

### Casting

C++/CX supports the standard C++ cast operators [static_cast](../cpp/static-cast-operator.md), [dynamic_cast](../cpp/dynamic-cast-operator.md), and [reinterpret_cast](../cpp/reinterpret-cast-operator.md), and also the **safe_cast** operator that's specific to C++/CX.

For more information, see [Casting](../cppcx/casting-c-cx.md).

### Boxing

A boxed variable is a value type that's wrapped in a reference type in situations where reference semantics are required.

For more information, see [Boxing](../cppcx/boxing-c-cx.md).

### Attributes

An attribute is a metadata value that can be applied to any Windows Runtime type or type member and can be inspected at run time. The  Windows Runtime defines a set of common attributes in the `Windows::Foundation::Metadata` namespace. User-defined attributes on public interfaces are not supported by Windows Runtime in this release.

## API Deprecation

Describes how to mark public APIs as deprecated by using the same attribute that's used by the Windows Runtime system types.

For more information, see [Deprecating types and members](../cppcx/deprecating-types-and-members-c-cx.md).

## See also

[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)
