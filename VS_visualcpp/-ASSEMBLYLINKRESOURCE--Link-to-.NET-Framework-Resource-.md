---
title: "-ASSEMBLYLINKRESOURCE (Link to .NET Framework Resource)"
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
H1: /ASSEMBLYLINKRESOURCE (Link to .NET Framework Resource)
ms.assetid: 8b6ad184-1b33-47a4-8513-4803cf915b64
caps.latest.revision: 9
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
# -ASSEMBLYLINKRESOURCE (Link to .NET Framework Resource)
```  
/ASSEMBLYLINKRESOURCE:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 The .NET Framework resource file to which you want to link from the assembly.  
  
## Remarks  
 The /ASSEMBLYLINKRESOURCE option creates a link to a .NET Framework resource in the output file; the resource file is not placed in the output file. [/ASSEMBLYRESOURCE](../VS_visualcpp/-ASSEMBLYRESOURCE--Embed-a-Managed-Resource-.md) embeds a resource file in the output file.  
  
 Linked resources are public in the assembly when created with the linker.  
  
 /ASSEMBLYLINKRESOURCE requires that the compilation include [/clr](../VS_visualcpp/-clr--Common-Language-Runtime-Compilation-.md); [/LN](../VS_visualcpp/-LN--Create-MSIL-Module-.md) or [/NOASSEMBLY](../VS_visualcpp/-NOASSEMBLY--Create-a-MSIL-Module-.md) is not allowed with /ASSEMBLYLINKRESOURCE.  
  
 If *filename* is a .NET Framework resource file created, for example, by [Resgen.exe](../Topic/Resgen.exe%20\(Resource%20File%20Generator\).md) or in the development environment, it can be accessed with members in the **System.Resources** namespace. For more information, see [System.Resources.ResourceManager](https://msdn.microsoft.com/en-us/library/system.resources.resourcemanager.aspx). For all other resources, use the **GetManifestResource**\* methods in the **System.Reflection.Assembly** class to access the resource at run time.  
  
 *filename* can be any file format. For example, you may want to make a native DLL part of the assembly, so it can be installed into the Global Assembly Cache and accessed from managed code in the assembly.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYDEBUG](../VS_visualcpp/-ASSEMBLYDEBUG--Add-DebuggableAttribute-.md)  
  
-   [/ASSEMBLYMODULE](../VS_visualcpp/-ASSEMBLYMODULE--Add-a-MSIL-Module-to-the-Assembly-.md)  
  
-   [/ASSEMBLYRESOURCE](../VS_visualcpp/-ASSEMBLYRESOURCE--Embed-a-Managed-Resource-.md)  
  
-   [/DELAYSIGN](../VS_visualcpp/-DELAYSIGN--Partially-Sign-an-Assembly-.md)  
  
-   [/KEYCONTAINER](../VS_visualcpp/-KEYCONTAINER--Specify-a-Key-Container-to-Sign-an-Assembly-.md)  
  
-   [/KEYFILE](../VS_visualcpp/-KEYFILE--Specify-Key-or-Key-Pair-to-Sign-an-Assembly-.md)  
  
-   [/NOASSEMBLY](../VS_visualcpp/-NOASSEMBLY--Create-a-MSIL-Module-.md)  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the option into the **Additional Options** box.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)