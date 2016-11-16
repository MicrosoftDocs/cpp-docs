---
title: "Understanding Manifest Generation for C-C++ Programs | Microsoft Docs"
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
  - "manifests [C++]"
ms.assetid: a1f24221-5b09-4824-be48-92eae5644b53
caps.latest.revision: 12
author: "corob-msft"
ms.author: "corob"
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
# Understanding Manifest Generation for C/C++ Programs
A [manifest](http://msdn.microsoft.com/library/aa375365) is an XML document that can be an external XML file or a resource embedded inside an application or an assembly. The manifest of an [isolated application](http://msdn.microsoft.com/library/aa375190) is used to manage the names and versions of shared side-by-side assemblies to which the application should bind at run time. The manifest of a side-by-side assembly specifies its dependencies on names, versions, resources, and other assemblies.  
  
 There are two ways to create a manifest for an isolated application or a side-by-side assembly. First, the author of the assembly can manually create a manifest file following rules and naming requirements. Alternatively, if a program only depends on [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] assemblies such as CRT, MFC, ATL or others, then a manifest can be generated automatically by the linker.  
  
 The headers of [!INCLUDE[vcprvc](../build/includes/vcprvc_md.md)] libraries contain assembly information, and when the libraries are included in application code, this assembly information is used by the linker to form a manifest for the final binary. The linker does not embed the manifest file inside the binary, and can only generate the manifest as an external file. Having a manifest as an external file may not work for all scenarios. For example, it is recommended that private assemblies have embedded manifests. In command line builds such as those that use nmake to build code, a manifest can be embedded using the manifest tool; for more information see [Manifest Generation at the Command Line](../build/manifest-generation-at-the-command-line.md). When building in [!INCLUDE[vsprvs](../assembler/masm/includes/vsprvs_md.md)], a manifest can be embedded by setting a property for the manifest tool in the **Project Properties** dialog; see [Manifest Generation in Visual Studio](../build/manifest-generation-in-visual-studio.md).  
  
## See Also  
 [Concepts of Isolated Applications and Side-by-side Assemblies](../build/concepts-of-isolated-applications-and-side-by-side-assemblies.md)   
 [Building C/C++ Isolated Applications and Side-by-side Assemblies](../build/building-c-cpp-isolated-applications-and-side-by-side-assemblies.md)