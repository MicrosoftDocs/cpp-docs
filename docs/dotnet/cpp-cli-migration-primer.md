---
title: "C++/CLI Migration Primer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["C++/CLI Version 2", "upgrading Visual C++ applications, Managed Extensions for C++ to Visual C++ 2005 syntax", "migration [C++], C++/CLI Version 2", "Managed Extensions for C++, upgrading syntax", "C++/CLI Version 2, managed extensions"]
ms.assetid: 8ec926b5-73f6-4f0c-bcdf-5203d293849a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# C++/CLI Migration Primer

This is a guide to moving your Visual C++ programs from Managed Extensions for C++ to Visual C++.

C++/CLI extends a dynamic component programming paradigm to the ISO-C++ standard language. The new language offers a number of significant improvements over Managed Extensions. This section provides an enumerated listing of the Managed Extensions for C++ language features and their mapping to Visual C++ where such a mapping exists, and points out those constructs for which no mapping exists.

## In This Section

[Outline of Changes (C++/CLI)](../dotnet/outline-of-changes-cpp-cli.md)<br/>
A high-level outline for quick reference, providing a listing of the changes under five general categories.

[Language Keywords (C++/CLI)](../dotnet/language-keywords-cpp-cli.md)<br/>
Discusses changes in language keywords, including the removal of the double underscore and the introduction of both contextual and spaced keywords.

[Managed Types (C++/CL)](../dotnet/managed-types-cpp-cl.md)<br/>
Looks at syntactic changes in the declaration of the Common Type System (CTS) - this includes changes in the declaration of classes, arrays (including the parameter array), enums, and so on.

[Member Declarations within a Class or Interface (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)<br/>
Presents the changes involving class members such as scalar properties, index properties, operators, delegates, and events.

[Value Types and Their Behaviors (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)<br/>
Focuses on value types and the new family of interior and pinning pointers. It also discusses a number of significant semantics changes such as the introduction of implicit boxing, immutability of boxed value types, and the removal of support for default constructors within value classes.

[General Language Changes (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)<br/>
Details semantic changes such as support for cast notation, string literal behavior, and changes in the semantics between ISO-C++ and C++/CLI.

## See Also

[Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)<br/>
[Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)