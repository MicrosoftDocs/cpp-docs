---
title: "General Language Changes (C++/CLI) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-cli"]
ms.topic: "conceptual"
dev_langs: ["C++"]
ms.assetid: 79a70768-225c-4ae2-84d1-178b20a9b042
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "dotnet"]
---
# General Language Changes (C++/CLI)
A number of CLR language features changed from Managed Extensions for C++ to Visual C++.  
  
 The changes described in this section are a sort of language miscellany. It includes a change in the handling of string literals, a change in the overload resolution between an ellipsis and the `Param` attribute, the change of `typeof` to `typeid`, a change in the calling of constructor initializer lists, and the introduction of a new cast notation, that of `safe_cast`.  
  
 [String Literal](../dotnet/string-literal.md)  
 Discusses how the handling of string literals has changed.  
  
 [Param Array and Ellipsis](../dotnet/param-array-and-ellipsis.md)  
 Discusses how `ParamArray` is now given precedence over the ellipsis (`...`) for resolving function calls with varying numbers of arguments.  
  
 [typeof Goes to T::typeid](../dotnet/typeof-goes-to-t-typeid.md)  
 Discusses how the `typeof` operator has been supplanted by `typeid`.  
  
 [Initializer Lists](../dotnet/initializer-lists.md)  
 Discusses changes in the calling order of initializer lists.  
  
 [Cast Notation and Introduction of safe_cast<>](../dotnet/cast-notation-and-introduction-of-safe-cast-angles.md)  
 Discusses changes to cast notation and in particular the introduction of `safe_cast`.  
  
## See Also  
 [C++/CLI Migration Primer](../dotnet/cpp-cli-migration-primer.md)