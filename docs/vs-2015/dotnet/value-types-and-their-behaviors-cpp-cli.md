---
title: "Value Types and Their Behaviors (C++-CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "value types"
ms.assetid: 5cb872a6-1e0a-429d-853d-df4ab47e8f2a
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Value Types and Their Behaviors (C++/CLI)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Value Types and Their Behaviors (C++/CLI)](https://docs.microsoft.com/cpp/dotnet/value-types-and-their-behaviors-cpp-cli).  
  
  
Value types have changed in various ways from Managed Extensions for C++ to [!INCLUDE[cpp_current_long](../includes/cpp-current-long-md.md)]. In this section, we look at the CLR enum type and the value class type, together with a look at boxing and access to the boxed instance on the CLR heap, as well as a look at interior and pinning pointers. There have been extensive language changes in this area.  
  
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

