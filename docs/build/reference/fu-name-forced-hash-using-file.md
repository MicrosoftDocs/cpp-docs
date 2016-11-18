---
title: "-FU (Name Forced #using File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
# /FU (Name Forced #using File)
A compiler option that you can use as an alternative to passing a file name to [#using Directive](../../preprocessor/hash-using-directive-cpp.md) in source code.  
  
## Syntax  
  
```  
/FU file  
```  
  
## Arguments  
 `file`  
 Specifies the metadata file to reference in this compilation.  
  
## Remarks  
 The /FU switch takes just one file name. To specify multiple files, use /FU with each one.  
  
 If you are using [!INCLUDE[cppcli](../../build/reference/includes/cppcli_md.md)] and are referencing metadata to use the [Friend Assemblies](../../dotnet/friend-assemblies-cpp.md) feature, you can't use **/FU**. You must reference the metadata in code by using `#using`—together with the `[as friend]` attribute. Friend assemblies are not supported in [!INCLUDE[cppwrt](../../build/reference/includes/cppwrt_md.md)] ([!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)]).  
  
 For information about how to create an assembly or module for the common language runtime (CLR), see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md). For information about how to build in [!INCLUDE[cppwrt_short](../../build/reference/includes/cppwrt_short_md.md)], see [Building apps and libraries](http://msdn.microsoft.com/Library/ec2821a5-3479-4e64-9c2d-c777049f2cdc).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Advanced** property page.  
  
4.  Modify the **Force #using** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ForcedUsingFiles%2A>.  
  
## See Also  
 [Output-File (/F) Options](../../build/reference/output-file-f-options.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)