---
title: "C++-CLI Migration Primer"
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
ms.topic: article
H1: C++/CLI Migration Primer
ms.assetid: 8ec926b5-73f6-4f0c-bcdf-5203d293849a
caps.latest.revision: 12
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
# C++-CLI Migration Primer
This is a guide to moving your Visual C++ programs from Managed Extensions for C++ to Visual C++. For a checklist summary of syntactic changes, see [(NOTINBUILD)Managed Extensions for C++ Syntax Upgrade Checklist](assetId:///edbded88-7ef3-4757-bd9d-b8f48ac2aada).  
  
 C++/CLI extends a dynamic component programming paradigm to the ISO-C++ standard language. The new language offers a number of significant improvements over Managed Extensions. This section provides an enumerated listing of the Managed Extensions for C++ language features and their mapping to Visual C++ where such a mapping exists, and points out those constructs for which no mapping exists.  
  
## In This Section  
 [Outline of Changes (C++/CLI)](../VS_visualcpp/Outline-of-Changes--C---CLI-.md)  
 A high-level outline for quick reference, providing a listing of the changes under five general categories.  
  
 [Language Keywords (C++/CLI)](../VS_visualcpp/Language-Keywords--C---CLI-.md)  
 Discusses changes in language keywords, including the removal of the double underscore and the introduction of both contextual and spaced keywords.  
  
 [Managed Types (C++/CL)](../VS_visualcpp/Managed-Types--C---CL-.md)  
 Looks at syntactic changes in the declaration of the Common Type System (CTS) – this includes changes in the declaration of classes, arrays (including the parameter array), enums, and so on.  
  
 [Member Declarations within a Class or Interface (C++/CLI)](../VS_visualcpp/Member-Declarations-within-a-Class-or-Interface--C---CLI-.md)  
 Presents the changes involving class members such as scalar properties, index properties, operators, delegates, and events.  
  
 [Value Types and Their Behaviors (C++/CLI)](../VS_visualcpp/Value-Types-and-Their-Behaviors--C---CLI-.md)  
 Focuses on value types and the new family of interior and pinning pointers. It also discusses a number of significant semantics changes such as the introduction of implicit boxing, immutability of boxed value types, and the removal of support for default constructors within value classes.  
  
 [General Language Changes (C++/CLI)](../VS_visualcpp/General-Language-Changes--C---CLI-.md)  
 Details semantic changes such as support for cast notation, string literal behavior, and changes in the semantics between ISO-C++ and C++/CLI.  
  
## See Also  
 [Mixed (Native and Managed) Assemblies](../VS_visualcpp/Mixed--Native-and-Managed--Assemblies.md)   
 [Component Extensions for Runtime Platforms](../VS_visualcpp/Component-Extensions-for-Runtime-Platforms.md)