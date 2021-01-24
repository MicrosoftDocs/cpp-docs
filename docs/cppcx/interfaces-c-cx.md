---
description: "Learn more about: Interfaces (C++/CX)"
title: "Interfaces (C++/CX)"
ms.date: "01/22/2017"
ms.assetid: 11034314-d54a-426d-923b-5ab7a6b9f8ce
---
# Interfaces (C++/CX)

Although a ref class can inherit from at most one concrete base class, it can implement any number of interface classes. An interface class (or interface struct) itself can inherit (or require) multiple interface classes, can overload its member functions, and can have type parameters.

## Characteristics

An interface has these characteristics:

- An interface class (or struct) must be declared within a namespace and may have public or private accessibility. Only public interfaces are emitted to metadata.

- The members of an interface can include properties, methods, and events.

- All interface members are implicitly public and virtual.

- Fields and static members are not permitted.

- Types that are used as properties, method parameters, or return values can only be Windows Runtime types; this includes the fundamental types and enum class types.

## Declaration and usage

The following example shows how to declare an interface. Notice that an interface can be declared as either a class or struct type.

[!code-cpp[cx_interfaces#01](../cppcx/codesnippet/CPP/interfacestest/class1.h#01)]

To implement an interface, a ref class or ref struct declares and implements virtual methods and properties. The interface and the implementing ref class must use the same method parameter names, as shown in this example:

[!code-cpp[cx_interfaces#02](../cppcx/codesnippet/CPP/interfacestest/class1.h#02)]

## Interface inheritance hierarchies

An interface can inherit from one or more interfaces. But unlike a ref class or struct, an interface doesn't declare the inherited interface members. If interface B inherits from interface A, and ref class C inherits from B, C must implement both A and B. This is shown in the next example.

[!code-cpp[cx_interfaces#03](../cppcx/codesnippet/CPP/interfacestest/class1.h#03)]

## Implementing interface properties and events

As shown in the previous example, you can use trivial virtual properties to implement interface properties. You can also provide custom getters and setters in the implementing class.  Both the getter and the setter must be public in an interface property.

[!code-cpp[cx_interfaces#04](../cppcx/codesnippet/CPP/interfacestest/class1.h#04)]

If an interface declares a get-only or set-only property, then the implementing class should explicitly provide a getter or setter.

[!code-cpp[cx_interfaces#05](../cppcx/codesnippet/CPP/interfacestest/class1.h#05)]

You can also implement custom add and remove methods for events in the implementing class.

## Explicit interface implementation

When a ref class implements multiple interfaces, and those interfaces have methods whose names and signatures are identical to the compiler, you can use the following syntax to explicitly indicate the interface method that a class method is implementing.

[!code-cpp[cx_interfaces#06](../cppcx/codesnippet/CPP/interfacestest/class1.h#06)]

## Generic interfaces

In C++/CX, the **`generic`** keyword is used to represent a Windows Runtime parameterized type. A parameterized type is emitted in metadata and can be consumed by code that's written in any language that supports type parameters. The Windows Runtime defines some generic interfaces—for example, [Windows::Foundation::Collections::IVector\<T>](/uwp/api/windows.foundation.collections.ivector-1)—but it doesn't support the creation of public user-defined generic interfaces in C++/CX. However, you can create private generic interfaces.

Here's how Windows Runtime types can be used to author a generic interface:

- A generic user-defined **`interface class`** in a component is not allowed to be emitted into its Windows metadata file; therefore, it can't have public accessibility, and client code in other .winmd files can't implement it. It can be implemented by non-public ref classes in the same component. A public ref class can have a generic interface type as a private member.

   The following code snippet shows how to declare a generic **`interface class`** and then implement it in a private ref class and use the ref class as a private member in a public ref class.

   [!code-cpp[cx_interfaces#07](../cppcx/codesnippet/CPP/interfacestest/class1.h#07)]

- A generic interface must follow the standard interface rules that govern accessibility, members, *requires* relationships, base classes, and so on.

- A generic interface can take one or more generic type parameters that are preceded by **`typename`** or **`class`**. Non-type parameters are not supported.

- A type parameter can be any Windows Runtime type. That is, the type parameter can be a reference type, a value type, an interface class, a delegate, a fundamental type, or a public enum class.

- A *closed generic interface* is an interface that inherits from a generic interface and specifies concrete type arguments for all type parameters. It can be used anywhere that a non-generic private interface can be used.

- An *open generic interface* is an interface that has one or more type parameters for which no concrete type is yet provided. It can be used anywhere that a type can be used, including as a type argument of another generic interface.

- You can parameterize only an entire interface, not individual methods.

- Type parameters cannot be constrained.

- A closed generic interface has an implicitly generated UUID. A user cannot specify the UUID.

- In the interface, any reference to the current interface—in a method parameter, return value, or property—is assumed to refer to the current instantiation. For example, *IMyIntf* means *IMyIntf\<T>*.

- When the type of a method parameter is a type parameter, the declaration of that parameter or variable uses the type parameter’s name without any pointer, native reference, or handle declarators. In other words, you never write "T^".

- Templated ref classes must be private. They can implement generic interfaces, and can pass template parameter *T* to generic argument *T*. Each instantiation of a templated ref class is itself a ref class.

## See also

[Type System](../cppcx/type-system-c-cx.md)<br/>
[C++/CX Language Reference](../cppcx/visual-c-language-reference-c-cx.md)<br/>
[Namespaces Reference](../cppcx/namespaces-reference-c-cx.md)
