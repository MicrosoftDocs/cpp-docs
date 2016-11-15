---
title: "STL-CLR Library Reference | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "STL/CLR Library"
  - "STL/CLR, redistribution"
  - "cliext directory"
ms.assetid: a9d9ca00-7bf2-48c1-b205-3ae6f8c25f82
caps.latest.revision: 17
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
# STL/CLR Library Reference
The STL/CLR Library is a packaging of the Standard Template Library (STL), a subset of the Standard C++ Library, for use with C++ and the .NET Framework common language runtime (CLR). With STL/CLR, you can use all the containers, iterators, and algorithms of STL in a managed environment.  
  
 To use STL/CLR:  
  
-   Include headers from the **cliext** include subdirectory instead of the usual Standard C++ Library equivalents.  
  
-   Qualify library names with `cliext::` instead of `std::`.  
  
 STL/CLR exposes the generic types and interfaces that it uses in cross-assembly scenarios in the .NET assembly **Microsoft.VisualC.STLCLR.dll**. This DLL is included in .NET Framework 3.5. If you redistribute an application that uses STL/CLR, you will need to include the .NET Framework 3.5, as well as any other Visual C++ libraries that your project uses, in the dependencies section of your setup project.  
  
## In This Section  
 [cliext Namespace](../dotnet/cliext-namespace.md)  
 Discusses the namespace that contains all the types of the STL/CLR Library.  
  
 [STL/CLR Containers](../dotnet/stl-clr-containers.md)  
 Provides an overview of the containers that are found in the Standard C++ Library, including requirements for container elements, types of elements that can be inserted, and ownership issues.  
  
 [Requirements for STL/CLR Container Elements](../dotnet/requirements-for-stl-clr-container-elements.md)  
 Describes minimum requirements for all reference types that are inserted into STL containers.  
  
 [How to: Convert from a .NET Collection to a STL/CLR Container](../dotnet/how-to-convert-from-a-dotnet-collection-to-a-stl-clr-container.md)  
 Describes how to convert a .NET collection to an STL/CLR container.  
  
 [How to: Convert from a STL/CLR Container to a .NET Collection](../dotnet/how-to-convert-from-a-stl-clr-container-to-a-dotnet-collection.md)  
 Describes how to convert an STL/CLR container to a .NET collection.  
  
 [How to: Expose an STL/CLR Container from an Assembly](../dotnet/how-to-expose-an-stl-clr-container-from-an-assembly.md)  
 Shows how to display the elements of several STL/CLR containers written in a C++ assembly.  
  
 In addition, this section also describes the following components of STL/CLR:  
  
|||  
|-|-|  
|[adapter (STL/CLR)](../dotnet/adapter-stl-clr.md)|[algorithm (STL/CLR)](../dotnet/algorithm-stl-clr.md)|  
|[deque (STL/CLR)](../dotnet/deque-stl-clr.md)|[for each, in](../dotnet/for-each-in.md)|  
|[functional (STL/CLR)](../dotnet/functional-stl-clr.md)|[hash_map (STL/CLR)](../dotnet/hash-map-stl-clr.md)|  
|[hash_multimap (STL/CLR)](../dotnet/hash-multimap-stl-clr.md)|[hash_multiset (STL/CLR)](../dotnet/hash-multiset-stl-clr.md)|  
|[hash_set (STL/CLR)](../dotnet/hash-set-stl-clr.md)|[list (STL/CLR)](../dotnet/list-stl-clr.md)|  
|[map (STL/CLR)](../dotnet/map-stl-clr.md)|[multimap (STL/CLR)](../dotnet/multimap-stl-clr.md)|  
|[multiset (STL/CLR)](../dotnet/multiset-stl-clr.md)|[numeric (STL/CLR)](../dotnet/numeric-stl-clr.md)|  
|[priority_queue (STL/CLR)](../dotnet/priority-queue-stl-clr.md)|[queue (STL/CLR)](../dotnet/queue-stl-clr.md)|  
|[set (STL/CLR)](../dotnet/set-stl-clr.md)|[stack (STL/CLR)](../dotnet/stack-stl-clr.md)|  
|[utility (STL/CLR)](../dotnet/utility-stl-clr.md)|[vector (STL/CLR)](../dotnet/vector-stl-clr.md)|  
  
## See Also  
 [C++ Standard Library](../standard-library/cpp-standard-library-reference.md)