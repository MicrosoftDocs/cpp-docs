---
title: "-hotpatch (Create Hotpatchable Image)"
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
H1: /hotpatch (Create Hotpatchable Image)
ms.assetid: aad539b6-c053-4c78-8682-853d98327798
caps.latest.revision: 18
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# -hotpatch (Create Hotpatchable Image)
Prepares an image for hot patching.  
  
## Syntax  
  
```  
/hotpatch  
```  
  
## Remarks  
 When **/hotpatch** is used in a compilation, the compiler ensures that first instruction of each function is at least two bytes, which is required for hot patching.  
  
 To complete the preparation for making an image hotpatchable, after you use **/hotpatch** to compile, you must use [/FUNCTIONPADMIN (Create Hotpatchable Image)](../VS_visualcpp/-FUNCTIONPADMIN--Create-Hotpatchable-Image-.md) to link. When you compile and link an image by using one invocation of cl.exe, **/hotpatch** implies **/functionpadmin**.  
  
 Because instructions are always two bytes or larger on the ARM architecture, and because x64 compilation is always treated as if **/hotpatch** has been specified, you don't have to specify **/hotpatch** when you compile for these targets; however, you must still link by using **/functionpadmin** to create hotpatchable images for them. The **/hotpatch** compiler option only affects x86 compilation.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Add the compiler option to the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## Guidance  
 For more information about update management, see "Security Guidance for Update Management" at [http://www.microsoft.com/technet/security/guidance/PatchManagement.mspx](http://www.microsoft.com/technet/security/guidance/PatchManagement.mspx).  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)