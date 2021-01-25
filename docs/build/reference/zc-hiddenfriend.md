---
title: "/Zc:hiddenFriend (Enforce Standard C++ hidden friend rules)"
description: "Learn about the Microsoft C++ /Zc:hiddenFriend compiler option for conforming or relaxed hidden friend compatibility."
ms.date: 01/23/2021
f1_keywords: ["/Zc:hiddenFriend"]
helpviewer_keywords: ["/Zc:hiddenFriend", "Zc:hiddenFriend", "-Zc:hiddenFriend"]
---
# `/Zc:hiddenFriend` (Enforce Standard C++ hidden friend rules)

Specifies the compiler conforms to the C++ standard treatment of hidden friend functions or function templates.

## Syntax

> **`/Zc:hiddenFriend`**\[**`-`**]

## Remarks

The **`/Zc:hiddenFriend`** option enables a subset of the [`/permissive-`](permissive-standards-conformance.md) option behavior. It tells the compiler to conform to the standard for hidden friends. The compiler only includes hidden friends in [argument-dependent lookup](../../cpp/argument-dependent-name-koenig-lookup-on-functions.md) (ADL) for explicit instances or template parameters of the enclosing class type. The restriction allows you to use hidden friends to keep operations on a type from applying to implicit conversions. This option can improve build speed in code that can't otherwise use [`/permissive-`](permissive-standards-conformance.md).

A *hidden friend* is a **`friend`** function or function template declared only within a class or class template definition. By default, the Microsoft C++ compiler doesn't remove hidden friend declarations as candidates for overload resolution everywhere it should. This legacy behavior can slow the compiler down by including the hidden friend functions as possible candidates in more contexts.

Standard C++ hidden friend behavior is enabled by default under **`/permissive-`**. To specify legacy hidden friend behavior when the **`/permissive-`** option is specified, use **`/Zc:hiddenFriend-`**. Use of C++20 Modules requires standard hidden friend behavior.

The **`/Zc:hiddenFriend`** option is available starting in Visual Studio 2019 version 16.4.

For examples of compiler behavior when you specify **`/Zc:hiddenFriend`**, see [Hidden friend name lookup rules](./permissive-standards-conformance.md#hidden-friend-name-lookup-rules).

### To set this compiler option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **C/C++** > **Command Line** property page.

1. Modify the **Additional Options** property to include *`/Zc:hiddenFriend`* or *`/Zc:hiddenFriend-`* and then choose **OK**.

## See also

[`/Zc` (Conformance)](zc-conformance.md)\
[`/permissive-`](permissive-standards-conformance.md)
