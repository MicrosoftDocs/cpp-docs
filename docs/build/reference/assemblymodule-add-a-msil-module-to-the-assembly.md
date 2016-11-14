---
title: "-ASSEMBLYMODULE (Add a MSIL Module to the Assembly) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/assemblymodule"
  - "VC.Project.VCLinkerTool.AddModuleNamesToAssembly"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ASSEMBLYMODULE linker option"
  - "assemblies [C++], adding modules to"
  - "assemblies [C++]"
  - "/ASSEMBLYMODULE linker option"
  - "-ASSEMBLYMODULE linker option"
ms.assetid: 67357da8-e4b6-49fd-932c-329a5777f143
caps.latest.revision: 11
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
# /ASSEMBLYMODULE (Add a MSIL Module to the Assembly)
```  
/ASSEMBLYMODULE:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 The module you want to include in this assembly.  
  
## Remarks  
 The /ASSEMBLYMODULE option allows you to add a module reference to an assembly. Type information in the module will not be available to the assembly program that added the module reference. However, type information in the module will be available to any program that references the assembly.  
  
 Use [#using](../../preprocessor/hash-using-directive-cpp.md) to both add a module reference to an assembly and make the module's type information available to the assembly program.  
  
 For example, consider the following scenario:  
  
1.  Create a module with [/LN](../../build/reference/ln-create-msil-module.md).  
  
2.  Use /ASSEMBLYMODULE in a different project to include the module in the current compilation, which will create an assembly. This project will not reference the module with `#using`.  
  
3.  Any project that references this assembly can now also use types from the module.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)  
  
-   [/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)  
  
-   [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)  
  
-   [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)  
  
-   [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
-   [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)  
  
-   [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)  
  
 The Visual C++ linker accepts .netmodule files as input and the output file produced by the linker will be an assembly or .netmodule with no run-time dependence on any of the .netmodules that were input to the linker.  For more information, see [.netmodule Files as Linker Input](../../build/reference/netmodule-files-as-linker-input.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Input** property page.  
  
4.  Modify the **Add Module to Assembly** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AddModuleNamesToAssembly%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)