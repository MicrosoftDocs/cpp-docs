---
title: "STL-CLR Library Reference"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "STL/CLR Library"
  - "STL/CLR, redistribution"
  - "cliext directory"
ms.assetid: a9d9ca00-7bf2-48c1-b205-3ae6f8c25f82
caps.latest.revision: 17
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
 [cliext Namespace](../cli/cliext-namespace.md)  
 Discusses the namespace that contains all the types of the STL/CLR Library.  
  
 [STL/CLR Containers](../cli/stl-clr-containers.md)  
 Provides an overview of the containers that are found in the Standard C++ Library, including requirements for container elements, types of elements that can be inserted, and ownership issues.  
  
 [Requirements for STL/CLR Container Elements](../cli/requirements-for-stl-clr-container-elements.md)  
 Describes minimum requirements for all reference types that are inserted into STL containers.  
  
 [How to: Convert from a .NET Collection to a STL/CLR Container](../cli/how-to--convert-from-a-.net-collection-to-a-stl-clr-container.md)  
 Describes how to convert a .NET collection to an STL/CLR container.  
  
 [How to: Convert from a STL/CLR Container to a .NET Collection](../cli/how-to--convert-from-a-stl-clr-container-to-a-.net-collection.md)  
 Describes how to convert an STL/CLR container to a .NET collection.  
  
 [How to: Expose an STL/CLR Container from an Assembly](../cli/how-to--expose-an-stl-clr-container-from-an-assembly.md)  
 Shows how to display the elements of several STL/CLR containers written in a C++ assembly.  
  
 In addition, this section also describes the following components of STL/CLR:  
  
|||  
|-|-|  
|[adapter (STL/CLR)](../cli/adapter--stl-clr-.md)|[algorithm (STL/CLR)](../cli/algorithm--stl-clr-.md)|  
|[deque (STL/CLR)](../cli/deque--stl-clr-.md)|[for each, in](../cli/for-each--in.md)|  
|[functional (STL/CLR)](../cli/functional--stl-clr-.md)|[hash_map (STL/CLR)](../cli/hash_map--stl-clr-.md)|  
|[hash_multimap (STL/CLR)](../cli/hash_multimap--stl-clr-.md)|[hash_multiset (STL/CLR)](../cli/hash_multiset--stl-clr-.md)|  
|[hash_set (STL/CLR)](../cli/hash_set--stl-clr-.md)|[list (STL/CLR)](../cli/list--stl-clr-.md)|  
|[map (STL/CLR)](../cli/map--stl-clr-.md)|[multimap (STL/CLR)](../cli/multimap--stl-clr-.md)|  
|[multiset (STL/CLR)](../cli/multiset--stl-clr-.md)|[numeric (STL/CLR)](../cli/numeric--stl-clr-.md)|  
|[priority_queue (STL/CLR)](../cli/priority_queue--stl-clr-.md)|[queue (STL/CLR)](../cli/queue--stl-clr-.md)|  
|[set (STL/CLR)](../cli/set--stl-clr-.md)|[stack (STL/CLR)](../cli/stack--stl-clr-.md)|  
|[utility (STL/CLR)](../cli/utility--stl-clr-.md)|[vector (STL/CLR)](../cli/vector--stl-clr-.md)|  
  
## See Also  
 [C++ Standard Library](../stdcpplib/c---standard-library-reference.md)