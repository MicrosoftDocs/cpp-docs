---
description: "Learn more about: Ref classes and structs (C++/CX)"
title: "Ref classes and structs (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: 3d736b82-0bf0-48cf-bac1-cc9d110b70d1
---
# Ref classes and structs (C++/CX)

The C++/CX supports user-defined *ref classes* and *ref structs*, and user-defined *value classes* and *value structs*. These data structures are the primary containers by which C++/CX supports the Windows Runtime type system. Their contents are emitted to metadata according to certain specific rules, and this enables them to be passed between Windows Runtime components and Universal Windows Platform apps that are written in C++ or other languages.

A ref class or ref struct has these essential features:

- It must be declared within a namespace, at namespace scope, and in that namespace it may have public or private accessibility. Only public types are emitted to metadata. Nested public class definitions are not permitted, including nested public [enum](../cppcx/enums-c-cx.md) classes. For more information, see [Namespaces and Type Visibility](../cppcx/namespaces-and-type-visibility-c-cx.md).

- It may contain as members C++/CX including ref classes, value classes, ref structs, value structs, or nullable value structs. It may also contain scalar types such as `float64`, **`bool`**, and so on. It may also contain standard C++ types such as `std::vector` or a custom class, as long as they are not public. C++/CX constructs may have **`public`**, **`protected`**, **`internal`**, **`private`**, or **`protected private`** accessibility. All **`public`** or **`protected`** members are emitted to metadata. Standard C++ types must have **`private`**, **`internal`**, or **`protected private`** accessibility, which prevents them from being emitted to metadata.

- It may implement one or more *interface classes* or *interface structs*.

- It may inherit from one base class, and base classes themselves have additional restrictions. Inheritance in public ref class hierarchies has more restrictions than inheritance in private ref classes.

- It may not be declared as generic. If it has private accessibility, it may be a template.

- Its lifetime is managed by automatic reference counting.

## Declaration

The following code fragment declares the `Person` ref class. Notice that the standard C++ `std::map` type is used in the private members, and the Windows Runtime`IMapView` interface is used in the public interface. Also notice that the "^" is appended to declarations of reference types.

[!code-cpp[cx_classes#03](../cppcx/codesnippet/CPP/classesstructs/class1.h#03)]

## Implementation

This code example shows an implementation of the `Person` ref class:

[!code-cpp[cx_classes#04](../cppcx/codesnippet/CPP/classesstructs/class1.cpp#04)]

## Usage

The next code example shows how client code uses the `Person` ref class.

[!code-cpp[cx_classes#05](../cppcx/codesnippet/CPP/classesstructs/class1.cpp#05)]

You can also use stack semantics to declare a local ref class variable. Such an object behaves like a stack-based variable even though the memory is still allocated dynamically. One important difference is that you cannot assign a tracking reference (%) to a variable that is declared by using stack semantics; this guarantees that the reference count is decremented to zero when the function exits. This example shows a basic ref class `Uri`, and a function that uses it with stack semantics:

[!code-cpp[cx_classes#06](../cppcx/codesnippet/CPP/classesstructs/class1.cpp#06)]

## Memory management

You allocate a ref class in dynamic memory by using the **`ref new`** keyword.

[!code-cpp[cx_classes#01](../cppcx/codesnippet/CPP/classesstructs/class1.h#01)]

The handle-to-object operator **`^`** is known as a *hat* and is fundamentally a C++ smart pointer. The memory it points to is automatically destroyed when the last hat goes out of scope or is explicitly set to **`nullptr`**.

By definition, a ref class has reference semantics. When you assign a ref class variable, it's the handle that's copied, not the object itself. In the next example, after assignment, both `myClass` and `myClass2` point to the same memory location.

[!code-cpp[cx_classes#02](../cppcx/codesnippet/CPP/classesstructs/class1.h#02)]

When a C++/CX ref class is instantiated, its memory is zero-initialized before its constructor is called; therefore it is not necessary to zero-initialize individual members, including properties. If the C++/CX class derives from a Windows Runtime C++ Library (WRL) class, only the C++/CX derived class portion is zero-initialized.

### Members

A ref class can contain **`public`**, **`protected`**, and **`private`** function members; only **`public`** and **`protected`** members are emitted into metadata. Nested classes and ref classes are permitted but cannot be **`public`**. Public fields are not allowed; public data members must be declared as properties. Private or protected internal data members may be fields. By default in a ref class, the accessibility of all members is **`private`**.

A ref struct is the same as a ref class, except that by default its members have **`public`** accessibility.

A **`public`** ref class or ref struct is emitted in metadata, but to be usable from other Universal Windows Platform apps and Windows Runtime components it must have at least one public or protected constructor. A public ref class that has a public constructor must also be declared as **`sealed`** to prevent further derivation through the application binary interface (ABI).

Public members may not be declared as **`const`** because the Windows Runtime type system does not support const. You can use a static property to declare a public data member with a constant value.

When you define a public ref class or struct, the compiler applies the required attributes to the class and stores that information in the .winmd file of the app. However, when you define a public unsealed ref class, manually apply the `Windows::Foundation::Metadata::WebHostHidden` attribute to ensure that the class is not visible to Universal Windows Platform apps that are written in JavaScript.

A ref class can have standard C++ types, including **`const`** types, in any **`private`**, **`internal`**, or **`protected private`** members.

Public ref classes that have type parameters are not permitted. User-defined generic ref classes are not permitted. A private, internal, or protected private ref class may be a template.

## Destructors

In C++/CX, calling **`delete`** on a public destructor invokes the destructor regardless of the object's reference count. This behavior enables you to define a destructor that performs custom cleanup of non-RAII resources in a deterministic manner. However, even in this case, the object itself is not deleted from memory. The memory for the object is only freed when the reference count reaches zero.

If a class's destructor is not public, then it is only invoked when the reference count reaches zero. If you call `delete` on an object that has a private destructor, the compiler raises warning C4493, which says "delete expression has no effect as the destructor of \<type name> does not have 'public' accessibility."

Ref class destructors can only be declared as follows:

- public and virtual (allowed on sealed or unsealed types)

- protected private and non-virtual (only allowed on unsealed types)

- private and non-virtual (allowed only on sealed types)

No other combination of accessibility, virtualness, and sealedness is allowed.  If you do not explicitly declare a destructor, the compiler generates a public virtual destructor if the type's base class or any member has a public destructor. Otherwise, the compiler generates a protected private non-virtual destructor for unsealed types, or a private non-virtual destructor for sealed types.

The behavior is undefined if you try to access members of a class that has already had its destructor run; it will most likely cause the program to crash. Calling `delete t` on a type that has no public destructor has no effect. Calling `delete this` on a type or base class that has a known **`private`** or **`protected private`** destructor from within its type hierarchy also has no effect.

When you declare a public destructor, the compiler generates the code so that the ref class implements `Platform::IDisposable` and the destructor implements the `Dispose` method. `Platform::IDisposable` is the C++/CX projection of `Windows::Foundation::IClosable`. Never explicitly implement these interfaces.

## Inheritance

Platform::Object is the universal base class for all ref classes. All ref classes are implicitly convertible to Platform::Object and can override [Object::ToString](../cppcx/platform-object-class.md#tostring). However, the Windows Runtime inheritance model not intended as a general inheritance model; in C++/CX this means that a user-defined public ref class cannot serve as a base class.

If you are creating a XAML user control, and the object participates in the dependency property system, then you can use `Windows::UI::Xaml::DependencyObject` as a base class.

After you have defined an unsealed class `MyBase` that inherits from `DependencyObject`, other public or private ref classes in your component or app may inherit from `MyBase`. Inheritance in public ref classes should only be done to support overrides of virtual methods, polymorphic identity, and encapsulation.

A private base ref class is not required to derive from an existing unsealed class. If you require an object hierarchy to model your own program structure or to enable code reuse, then use private or internal ref classes, or better yet, standard C++ classes. You can expose the functionality of the private object hierarchy through a public sealed ref class wrapper.

A ref class that has a public or protected constructor in C++/CX must be declared as sealed. This restriction means that there is no way for classes that are written in other languages such as C# or Visual Basic to inherit from types that you declare in a Windows Runtime component that's written in C++/CX.

Here are the basic rules for inheritance in C++/CX:

- Ref classes can inherit directly from at most one base ref class, but can implement any number of interfaces.

- If a class has a public constructor, it must be declared as sealed to prevent further derivation.

- You can create public unsealed base classes that have internal or protected private constructors, provided that the base class derives directly or indirectly from an existing unsealed base class such as `Windows::UI::Xaml::DependencyObject`. Inheritance of user-defined ref classes across .winmd files is not supported; however, a ref class can inherit from an interface that's defined in another .winmd file. You can create derived classes from a user-defined base ref class only within the same Windows Runtime component or Universal Windows Platform app.

- For ref classes, only public inheritance is supported.

   [!code-cpp[cx_classes#08](../cppcx/codesnippet/CPP/classesstructs/class1.h#08)]

The following example shows how to expose a public ref class that derives from other ref classes in an inheritance hierarchy.

[!code-cpp[cx_classes#09](../cppcx/codesnippet/CPP/classesstructs/class1.h#09)]

## See also

[Type System](../cppcx/type-system-c-cx.md)<br/>
[Value classes and structs](../cppcx/value-classes-and-structs-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
