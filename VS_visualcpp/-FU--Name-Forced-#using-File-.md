---
title: "-FU (Name Forced #using File)"
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
H1: /FU (Name Forced #using File)
ms.assetid: 698f8603-457f-435a-baff-5ac9243d6ca1
caps.latest.revision: 15
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
# -FU (Name Forced #using File)
A compiler option that you can use as an alternative to passing a file name to [#using Directive](../VS_visualcpp/#using-Directive--C---.md) in source code.  
  
## Syntax  
  
```  
/FU file  
```  
  
## Arguments  
 `file`  
 Specifies the metadata file to reference in this compilation.  
  
## Remarks  
 The /FU switch takes just one file name. To specify multiple files, use /FU with each one.  
  
 If you are using C++/CLI and are referencing metadata to use the [Friend Assemblies](../VS_visualcpp/Friend-Assemblies--C---.md) feature, you can't use **/FU**. You must reference the metadata in code by using `#using`—together with the `[as friend]` attribute. Friend assemblies are not supported in Visual C++ component extensions (C++/CX).  
  
 For information about how to create an assembly or module for the common language runtime (CLR), see [/clr (Common Language Runtime Compilation)](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md). For information about how to build in C++/CX, see [Building apps and libraries](../Topic/Building%20apps%20and%20libraries%20\(C++-CX\).md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Advanced** property page.  
  
4.  Modify the **Force #using** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedUsingFiles?qualifyHint=False>.  
  
## See Also  
 [Output-File (/F) Options](../VS_visualcpp/Output-File---F--Options.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)