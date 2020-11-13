---
title: "/Zc:hiddenFriend (Enforce Standard C++ hidden friend rules)"
description: "Learn about the Microsoft C++ /Zc:hiddenFriend compiler option for conforming or relaxed hidden friend compatibility."
ms.date: 11/11/2020
f1_keywords: ["/Zc:hiddenFriend"]
helpviewer_keywords: ["/Zc:hiddenFriend", "Zc:hiddenFriend", "-Zc:hiddenFriend"]
---
# `/Zc:hiddenFriend` (Enforce Standard C++ hidden friend rules)

Specifies the compiler conforms to the C++ standard treatment of hidden friend functions or function templates.

## Syntax

> **`/Zc:hiddenFriend`**\[**`-`**]

## Remarks

A *hidden friend* is a **`friend`** function or function template declared only within a class or class template definition. By default, the Microsoft C++ compiler makes such declarations visible in the enclosing namespace. That visibility means the friend function is available for both ordinary unqualified lookup and qualified lookup during overload resolution. This legacy behavior can slow the compiler down, by introducing additional candidates for overload resolution in more contexts.

The **`/Zc:hiddenFriend`** option tells the compiler to conform to the standard for hidden friends. It limits the scope visibility of hidden friends to the enclosing class or class template. The compiler only includes hidden friends in argument-dependent lookup (ADL) for explicit instances of the enclosing class type. This option can improve build speed in code that can't otherwise use [`/permissive-`](permissive-standards-conformance.md).

The C++20 standard clarified allowed compiler behavior. A hidden friend can't appear to have a visible declaration at namespace scope. The hidden friend doesn't participate in overload resolution in all contexts that use the enclosing namespace. The restriction allows you to use hidden friends to keep operations on a type from applying to implicit conversions. Hidden friends can only participate in ADL on explicit instances of the enclosing class type.

Standard C++ hidden friend behavior is enabled by default under [`/permissive-`](permissive-standards-conformance.md). To specify legacy hidden friend behavior when the **`/permissive-`** option is specified, use **`/Zc:hiddenFriend-`**. Use of C++20 Modules requires standard hidden friend behavior.

The **`/Zc:hiddenFriend`** option is available starting in Visual Studio 2019 version 16.4.

For examples of compiler behavior when you specify **`/Zc:hiddenFriend`**, see [Hidden friend name lookup rules](./permissive-standards-conformance.md#hidden-friend-name-lookup-rules).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include *`/Zc:hiddenFriend`* or *`/Zc:hiddenFriend-`* and then choose **OK**.

## See also

[**`/Zc`** (Conformance)](zc-conformance.md)\
[`/permissive-`](permissive-standards-conformance.md)
