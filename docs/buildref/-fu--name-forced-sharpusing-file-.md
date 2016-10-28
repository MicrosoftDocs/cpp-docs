---
title: "-FU (Name Forced #using File)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.ForcedUsingFiles"
  - "/FU"
  - "VC.Project.VCNMakeTool.ForcedUsingAssemblies"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-FU compiler option [C++]"
  - "FU compiler option [C++]"
  - "/FU compiler option [C++]"
ms.assetid: 698f8603-457f-435a-baff-5ac9243d6ca1
caps.latest.revision: 15
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
# /FU (Name Forced #using File)
A compiler option that you can use as an alternative to passing a file name to [#using Directive](../c/sharpusing-directive--c---.md) in source code.  
  
## Syntax  
  
```  
/FU file  
```  
  
## Arguments  
 `file`  
 Specifies the metadata file to reference in this compilation.  
  
## Remarks  
 The /FU switch takes just one file name. To specify multiple files, use /FU with each one.  
  
 If you are using [!INCLUDE[cppcli](../buildref/includes/cppcli_md.md)] and are referencing metadata to use the [Friend Assemblies](../cli/friend-assemblies--c---.md) feature, you can't use **/FU**. You must reference the metadata in code by using `#using`—together with the `[as friend]` attribute. Friend assemblies are not supported in [!INCLUDE[cppwrt](../buildref/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../buildref/includes/cppwrt_short_md.md)]).  
  
 For information about how to create an assembly or module for the common language runtime (CLR), see [/clr (Common Language Runtime Compilation)](../buildref/-clr--common-language-runtime-compilation-.md). For information about how to build in [!INCLUDE[cppwrt_short](../buildref/includes/cppwrt_short_md.md)], see [Building apps and libraries](../Topic/Building%20apps%20and%20libraries%20\(C++-CX\).md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Advanced** property page.  
  
4.  Modify the **Force #using** property.  
  
### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedUsingFiles*>.  
  
## See Also  
 [Output-File (/F) Options](../buildref/output-file---f--options.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)