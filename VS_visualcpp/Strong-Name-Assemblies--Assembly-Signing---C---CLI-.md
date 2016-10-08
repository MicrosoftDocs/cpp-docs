---
title: "Strong Name Assemblies (Assembly Signing) (C++-CLI)"
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
H1: Strong Name Assemblies (Assembly Signing) (C++/CLI)
ms.assetid: c337cd3f-e5dd-4c6f-a1ad-437e85dba1cc
caps.latest.revision: 6
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
# Strong Name Assemblies (Assembly Signing) (C++-CLI)
This topic discusses how you can sign your assembly, often referred to as giving your assembly a strong name.  
  
## Remarks  
 When using Visual C++, use linker options to sign your assembly to avoid issues related to the CLR attributes for assembly signing:  
  
-   <xref:System.Reflection.AssemblyDelaySignAttribute?qualifyHint=False>  
  
-   <xref:System.Reflection.AssemblyKeyFileAttribute?qualifyHint=False>  
  
-   <xref:System.Reflection.AssemblyKeyNameAttribute?qualifyHint=False>  
  
 Reasons for not using the attributes include the fact that the key name is visible in assembly metadata, which can be a security risk if the file name includes confidential information. Also, the build process used by the Visual C++ development environment will invalidate the key with which the assembly is signed if you use CLR attributes to give an assembly a strong name, and then run a post-processing tool like mt.exe on the assembly.  
  
 If you build at the command line, use linker options to sign your assembly, and then run a post-processing tool (like mt.exe), you will need to re-sign the assembly with sn.exe. Alternatively, you can build and delay sign the assembly and after running post-processing tools, complete the signing.  
  
 If you use the signing attributes when building in the development environment, you can successfully sign the assembly by explicitly calling sn.exe ([Sn.exe (Strong Name Tool)](../Topic/Sn.exe%20\(Strong%20Name%20Tool\).md)) in a post-build event. For more information, see [Specifying Build Events](../VS_visualcpp/Specifying-Build-Events.md). Build times may be less if you use attributes and a post-build event, compared to using a linker options.  
  
 The following linker options support assembly signing:  
  
-   [/DELAYSIGN (Partially Sign an Assembly)](../VS_visualcpp/-DELAYSIGN--Partially-Sign-an-Assembly-.md)  
  
-   [/KEYFILE (Specify Key or Key Pair to Sign an Assembly)](../VS_visualcpp/-KEYFILE--Specify-Key-or-Key-Pair-to-Sign-an-Assembly-.md)  
  
-   [/KEYCONTAINER (Specify a Key Container to Sign an Assembly)](../VS_visualcpp/-KEYCONTAINER--Specify-a-Key-Container-to-Sign-an-Assembly-.md)  
  
 For more information on strong assemblies, see [Creating and Using Strong-Named Assemblies](../Topic/Creating%20and%20Using%20Strong-Named%20Assemblies.md).  
  
## See Also  
 [.NET Programming with C++/CLI (Visual C++)](../VS_visualcpp/.NET-Programming-with-C---CLI--Visual-C---.md)