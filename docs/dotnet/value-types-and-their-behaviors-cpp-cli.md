---
title: "Value Types and Their Behaviors (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
helpviewer_keywords: ["value types"]
ms.assetid: 5cb872a6-1e0a-429d-853d-df4ab47e8f2a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# Value Types and Their Behaviors (C++/CLI)
Value types have changed in various ways from Managed Extensions for C++ to Visual C++. In this section, we look at the CLR enum type and the value class type, together with a look at boxing and access to the boxed instance on the CLR heap, as well as a look at interior and pinning pointers. There have been extensive language changes in this area.  
  
## In This Section  
 [CLR Enum Type](../dotnet/value-types-and-their-behaviors-cpp-cli.md)  
 Discusses changes in the declaration and behavior of enums.  
  
 [Implicit Boxing of Value Types](../dotnet/implicit-boxing-of-value-types.md)  
 Discusses the motivation for implicit boxing of value types and the consequent changes in behavior.  
  
 [A Tracking Handle to a Boxed Value](../dotnet/a-tracking-handle-to-a-boxed-value.md)  
 Discusses how implicit boxing of value types translates to a tracking handle to the boxed value object.  
  
 [Value Type Semantics](../dotnet/value-type-semantics.md)  
 Discusses changes to value type semantics, including inherited virtual methods, class default constructors, interior pointers, and pinning pointers.  
  
## See Also  
 [C++/CLI Migration Primer](../dotnet/cpp-cli-migration-primer.md)   
 [Classes and Structs](../windows/classes-and-structs-cpp-component-extensions.md)