---
description: "Learn more about: Namespaces and Type Visibility (C++/CX )"
title: "Namespaces and Type Visibility (C++/CX )"
ms.date: "12/30/2016"
ms.assetid: cbc01a3a-3b69-4ded-9c42-ecbf0fd0a00e
---
# Namespaces and Type Visibility (C++/CX )

A namespace is a standard C++ construct for grouping types that have related functionality and for preventing name collisions in libraries. The Windows Runtime type system requires that all public Windows Runtime types, including those in your own code, must be declared in a namespace at namespace scope. Public types that are declared at global scope or nested inside another class will cause a compile-time error.

A .winmd file must have the same name that the root namespace has. For example, a class that's named A.B.C.MyClass can be instantiated only if it's defined in a metadata file that's named A.winmd or A.B.winmd or A.B.C.winmd. The name of the executable is not required to match the .winmd file name.

## Type visibility

In a namespace, Windows Runtime types—unlike standard C++ types—have either private or public accessibility. By default, the accessibility is private. Only a public type is visible to metadata and is therefore consumable from apps and components that might be written in languages other than C++. In general, the rules for visible types are more restrictive than the rules for non-visible types because visible types cannot expose C++-specific concepts that are not supported in .NET languages or JavaScript.

> [!NOTE]
> Metadata is only consumed at run time by .NET languages and JavaScript. When a C++ app or component is talking to another C++ app or component—this includes Windows components ,which are all written in C++—then no run-time consumption of metadata is required.

## Member accessibility and visibility

In a private ref class, interface, or delegate, no members are emitted to metadata, even if they have public accessibility. In public ref classes, you can control the visibility of members in metadata independently of their accessibility in your source code. As in standard C++, apply the principle of least privilege; don't make your members visible in metadata unless they absolutely must be.

Use the following access modifiers to control both metadata visibility and source code accessibility.

| Modifier | Meaning | Emitted to metadata? |
|--|--|--|
| **`private`** | The default accessibility. Same meaning as in standard C++. | No |
| **`protected`** | Same meaning as in standard C++, both within the app or component and in metadata. | Yes |
| **`public`** | Same meaning as in standard C++. | Yes |
| **`public protected`** -or- **`protected public`** | Protected accessibility in metadata, public within the app or component. | Yes |
| **`protected private`** or **`private protected`** | Not visible in metadata; protected accessibility within the app or component. |  |
| **`internal`** or **`private public`** | The member is public within the app or component, but is not visible in metadata. | No |

## Windows Runtime namespaces

The Windows API consists of types that are declared in the Windows::\* namespaces. These namespaces are reserved for Windows, and types cannot be added to them. In the **Object Browser**, you can view these namespaces in the windows.winmd file. For documentation about these namespaces, see [Windows API](/uwp/api/).

## C++/CX namespaces

The C++/CX define certain types in these namespaces as part of the projection of the Windows Runtime type system.

| Namespace | Description |
|--|--|
| default | Contains the built-in numeric and char16 types. These types are in scope in every namespace and a **`using`** statement is never required. |
| `Platform` | Contains primarily public types that correspond to Windows Runtime types such as `Array<T>`, `String`, `Guid`, and `Boolean`. Also includes specialized helper types such as `Platform::Agile<T>` and `Platform::Box<T>`. |
| `Platform::Collections` | Contains the concrete collection classes that implement the Windows Runtime collection interfaces `IVector`, `IMap`, and so on. These types are defined in a header file, collection.h, not in platform.winmd. |
| `Platform::Details` | Contains types that are used by the compiler and are not meant for public consumption. |

## See also

[Type System (C++/CX)](../cppcx/type-system-c-cx.md)
