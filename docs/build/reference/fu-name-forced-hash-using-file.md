---
title: "-FU (Name Forced #using File) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCCLCompilerTool.ForcedUsingFiles", "/FU", "VC.Project.VCNMakeTool.ForcedUsingAssemblies"]
dev_langs: ["C++"]
helpviewer_keywords: ["-FU compiler option [C++]", "FU compiler option [C++]", "/FU compiler option [C++]"]
ms.assetid: 698f8603-457f-435a-baff-5ac9243d6ca1
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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
  
 If you are using C++/CLI and are referencing metadata to use the [Friend Assemblies](../../dotnet/friend-assemblies-cpp.md) feature, you can't use **/FU**. You must reference the metadata in code by using `#using`—together with the `[as friend]` attribute. Friend assemblies are not supported in Visual C++ component extensions C++/CX.  
  
 For information about how to create an assembly or module for the common language runtime (CLR), see [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md). For information about how to build in C++/CX, see [Building apps and libraries](../../cppcx/building-apps-and-libraries-c-cx.md).  
  
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