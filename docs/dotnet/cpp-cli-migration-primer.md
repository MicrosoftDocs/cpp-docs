---
title: "C++-CLI Migration Primer | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C++/CLI Version 2"
  - "upgrading Visual C++ applications, Managed Extensions for C++ to Visual C++ 2005 syntax"
  - "migration [C++], C++/CLI Version 2"
  - "Managed Extensions for C++, upgrading syntax"
  - "C++/CLI Version 2, managed extensions"
ms.assetid: 8ec926b5-73f6-4f0c-bcdf-5203d293849a
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# C++/CLI Migration Primer
This is a guide to moving your Visual C++ programs from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)]. For a checklist summary of syntactic changes, see [(NOTINBUILD)Managed Extensions for C++ Syntax Upgrade Checklist](http://msdn.microsoft.com/en-us/edbded88-7ef3-4757-bd9d-b8f48ac2aada).  
  
 C++/CLI extends a dynamic component programming paradigm to the ISO-C++ standard language. The new language offers a number of significant improvements over Managed Extensions. This section provides an enumerated listing of the Managed Extensions for C++ language features and their mapping to [!INCLUDE[cpp_current_long](../dotnet/includes/cpp_current_long_md.md)] where such a mapping exists, and points out those constructs for which no mapping exists.  
  
## In This Section  
 [Outline of Changes (C++/CLI)](../dotnet/outline-of-changes-cpp-cli.md)  
 A high-level outline for quick reference, providing a listing of the changes under five general categories.  
  
 [Language Keywords (C++/CLI)](../dotnet/language-keywords-cpp-cli.md)  
 Discusses changes in language keywords, including the removal of the double underscore and the introduction of both contextual and spaced keywords.  
  
 [Managed Types (C++/CL)](../dotnet/managed-types-cpp-cl.md)  
 Looks at syntactic changes in the declaration of the Common Type System (CTS) – this includes changes in the declaration of classes, arrays (including the parameter array), enums, and so on.  
  
 [Member Declarations within a Class or Interface (C++/CLI)](../dotnet/member-declarations-within-a-class-or-interface-cpp-cli.md)  
 Presents the changes involving class members such as scalar properties, index properties, operators, delegates, and events.  
  
 [Value Types and Their Behaviors (C++/CLI)](../dotnet/value-types-and-their-behaviors-cpp-cli.md)  
 Focuses on value types and the new family of interior and pinning pointers. It also discusses a number of significant semantics changes such as the introduction of implicit boxing, immutability of boxed value types, and the removal of support for default constructors within value classes.  
  
 [General Language Changes (C++/CLI)](../dotnet/general-language-changes-cpp-cli.md)  
 Details semantic changes such as support for cast notation, string literal behavior, and changes in the semantics between ISO-C++ and C++/CLI.  
  
## See Also  
 [Mixed (Native and Managed) Assemblies](../dotnet/mixed-native-and-managed-assemblies.md)   
 [Component Extensions for Runtime Platforms](../windows/component-extensions-for-runtime-platforms.md)