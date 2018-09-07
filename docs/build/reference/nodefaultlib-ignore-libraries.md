---
title: "-NODEFAULTLIB (Ignore Libraries) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCLinkerTool.OVERWRITEAllDefaultLibraries", "VC.Project.VCLinkerTool.OVERWRITEDefaultLibraryNames", "/nodefaultlib"]
dev_langs: ["C++"]
helpviewer_keywords: ["default libraries, removing", "-NODEFAULTLIB linker option", "libraries, ignore", "NODEFAULTLIB linker option", "/NODEFAULTLIB linker option", "ignore libraries linker option"]
ms.assetid: 7270b673-6711-468e-97a7-c2925ac2be6e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /NODEFAULTLIB (Ignore Libraries)
```  
/NODEFAULTLIB[:library]   
```  
  
## Remarks  
 where:  
  
 *library*  
 A library that you want the linker to ignore when it resolves external references.  
  
## Remarks  
 The /NODEFAULTLIB option tells the linker to remove one or more default libraries from the list of libraries it searches when resolving external references.  
  
 To create an .obj file that does not contain references to default libraries, use [/Zl (Omit Default Library Name)](../../build/reference/zl-omit-default-library-name.md).  
  
 By default, /NODEFAULTLIB removes all default libraries from the list of libraries it searches when resolving external references. The optional *library* parameter lets you remove a specified library or libraries from the list of libraries it searches when resolving external references. Specify one /NODEFAULTLIB option for each library you want to exclude.  
  
 The linker resolves references to external definitions by searching first in libraries that you explicitly specify, then in default libraries specified with the /DEFAULTLIB option, and then in default libraries named in .obj files.  
  
 /NODEFAULTLIB:*library* overrides [/DEFAULTLIB:](../../build/reference/defaultlib-specify-default-library.md)*library* when the same *library* name is specified in both.  
  
 If you use /NODEFAULTLIB, for example, to build your program without the C run-time library, you may have to also use [/ENTRY](../../build/reference/entry-entry-point-symbol.md) to specify the entry point (function) in your program. For more information, see [CRT Library Features](../../c-runtime-library/crt-library-features.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Input**property page.  
  
4.  Select the **Ignore All Default Libraries** property or specify a list of the libraries you want to ignore in the **Ignore Specific Library** property. The **Command Line** property page will show the effect of the changes you make to these properties.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreDefaultLibraryNames%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.IgnoreAllDefaultLibraries%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)