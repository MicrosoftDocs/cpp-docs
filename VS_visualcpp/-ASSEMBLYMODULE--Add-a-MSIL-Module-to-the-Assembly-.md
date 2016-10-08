---
title: "-ASSEMBLYMODULE (Add a MSIL Module to the Assembly)"
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
H1: /ASSEMBLYMODULE (Add a MSIL Module to the Assembly)
ms.assetid: 67357da8-e4b6-49fd-932c-329a5777f143
caps.latest.revision: 11
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
# -ASSEMBLYMODULE (Add a MSIL Module to the Assembly)
```  
/ASSEMBLYMODULE:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 The module you want to include in this assembly.  
  
## Remarks  
 The /ASSEMBLYMODULE option allows you to add a module reference to an assembly. Type information in the module will not be available to the assembly program that added the module reference. However, type information in the module will be available to any program that references the assembly.  
  
 Use [#using](../VS_visualcpp/#using-Directive--C---.md) to both add a module reference to an assembly and make the module's type information available to the assembly program.  
  
 For example, consider the following scenario:  
  
1.  Create a module with [/LN](../VS_visualcpp/-LN--Create-MSIL-Module-.md).  
  
2.  Use /ASSEMBLYMODULE in a different project to include the module in the current compilation, which will create an assembly. This project will not reference the module with `#using`.  
  
3.  Any project that references this assembly can now also use types from the module.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYDEBUG](../VS_visualcpp/-ASSEMBLYDEBUG--Add-DebuggableAttribute-.md)  
  
-   [/ASSEMBLYLINKRESOURCE](../VS_visualcpp/-ASSEMBLYLINKRESOURCE--Link-to-.NET-Framework-Resource-.md)  
  
-   [/ASSEMBLYRESOURCE](../VS_visualcpp/-ASSEMBLYRESOURCE--Embed-a-Managed-Resource-.md)  
  
-   [/DELAYSIGN](../VS_visualcpp/-DELAYSIGN--Partially-Sign-an-Assembly-.md)  
  
-   [/NOASSEMBLY](../VS_visualcpp/-NOASSEMBLY--Create-a-MSIL-Module-.md)  
  
-   [/KEYFILE](../VS_visualcpp/-KEYFILE--Specify-Key-or-Key-Pair-to-Sign-an-Assembly-.md)  
  
-   [/KEYCONTAINER](../VS_visualcpp/-KEYCONTAINER--Specify-a-Key-Container-to-Sign-an-Assembly-.md)  
  
 The Visual C++ linker accepts .netmodule files as input and the output file produced by the linker will be an assembly or .netmodule with no run-time dependence on any of the .netmodules that were input to the linker.  For more information, see [.netmodule Files as Linker Input](../VS_visualcpp/.netmodule-Files-as-Linker-Input.md).  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Input** property page.  
  
4.  Modify the **Add Module to Assembly** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AddModuleNamesToAssembly?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)