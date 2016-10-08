---
title: "STL-CLR Library Reference"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
H1: STL/CLR Library Reference
ms.assetid: a9d9ca00-7bf2-48c1-b205-3ae6f8c25f82
caps.latest.revision: 17
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# STL-CLR Library Reference
The STL/CLR Library is a packaging of the Standard Template Library (STL), a subset of the Standard C++ Library, for use with C++ and the .NET Framework common language runtime (CLR). With STL/CLR, you can use all the containers, iterators, and algorithms of STL in a managed environment.  
  
 To use STL/CLR:  
  
-   Include headers from the **cliext** include subdirectory instead of the usual Standard C++ Library equivalents.  
  
-   Qualify library names with `cliext::` instead of `std::`.  
  
 STL/CLR exposes the generic types and interfaces that it uses in cross-assembly scenarios in the .NET assembly **Microsoft.VisualC.STLCLR.dll**. This DLL is included in .NET Framework 3.5. If you redistribute an application that uses STL/CLR, you will need to include the .NET Framework 3.5, as well as any other Visual C++ libraries that your project uses, in the dependencies section of your setup project.  
  
## In This Section  
 [cliext Namespace](../VS_visualcpp/cliext-Namespace.md)  
 Discusses the namespace that contains all the types of the STL/CLR Library.  
  
 [STL/CLR Containers](../VS_visualcpp/STL-CLR-Containers.md)  
 Provides an overview of the containers that are found in the Standard C++ Library, including requirements for container elements, types of elements that can be inserted, and ownership issues.  
  
 [Requirements for STL/CLR Container Elements](../VS_visualcpp/Requirements-for-STL-CLR-Container-Elements.md)  
 Describes minimum requirements for all reference types that are inserted into STL containers.  
  
 [How to: Convert from a .NET Collection to a STL/CLR Container](../VS_visualcpp/How-to--Convert-from-a-.NET-Collection-to-a-STL-CLR-Container.md)  
 Describes how to convert a .NET collection to an STL/CLR container.  
  
 [How to: Convert from a STL/CLR Container to a .NET Collection](../VS_visualcpp/How-to--Convert-from-a-STL-CLR-Container-to-a-.NET-Collection.md)  
 Describes how to convert an STL/CLR container to a .NET collection.  
  
 [How to: Expose an STL/CLR Container from an Assembly](../VS_visualcpp/How-to--Expose-an-STL-CLR-Container-from-an-Assembly.md)  
 Shows how to display the elements of several STL/CLR containers written in a C++ assembly.  
  
 In addition, this section also describes the following components of STL/CLR:  
  
|||  
|-|-|  
|[adapter (STL/CLR)](../VS_visualcpp/adapter--STL-CLR-.md)|[algorithm (STL/CLR)](../VS_visualcpp/algorithm--STL-CLR-.md)|  
|[deque (STL/CLR)](../VS_visualcpp/deque--STL-CLR-.md)|[for each, in](../VS_visualcpp/for-each--in.md)|  
|[functional (STL/CLR)](../VS_visualcpp/functional--STL-CLR-.md)|[hash_map (STL/CLR)](../VS_visualcpp/hash_map--STL-CLR-.md)|  
|[hash_multimap (STL/CLR)](../VS_visualcpp/hash_multimap--STL-CLR-.md)|[hash_multiset (STL/CLR)](../VS_visualcpp/hash_multiset--STL-CLR-.md)|  
|[hash_set (STL/CLR)](../VS_visualcpp/hash_set--STL-CLR-.md)|[list (STL/CLR)](../VS_visualcpp/list--STL-CLR-.md)|  
|[map (STL/CLR)](../VS_visualcpp/map--STL-CLR-.md)|[multimap (STL/CLR)](../VS_visualcpp/multimap--STL-CLR-.md)|  
|[multiset (STL/CLR)](../VS_visualcpp/multiset--STL-CLR-.md)|[numeric (STL/CLR)](../VS_visualcpp/numeric--STL-CLR-.md)|  
|[priority_queue (STL/CLR)](../VS_visualcpp/priority_queue--STL-CLR-.md)|[queue (STL/CLR)](../VS_visualcpp/queue--STL-CLR-.md)|  
|[set (STL/CLR)](../VS_visualcpp/set--STL-CLR-.md)|[stack (STL/CLR)](../VS_visualcpp/stack--STL-CLR-.md)|  
|[utility (STL/CLR)](../VS_visualcpp/utility--STL-CLR-.md)|[vector (STL/CLR)](../VS_visualcpp/vector--STL-CLR-.md)|  
  
## See Also  
 [C++ Standard Library](../VS_visualcpp/C---Standard-Library-Reference.md)