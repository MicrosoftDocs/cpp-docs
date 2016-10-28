---
title: "-ASSEMBLYLINKRESOURCE (Link to .NET Framework Resource)"
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
  - "/ASSEMBLYLINKRESOURCE"
  - "VC.Project.VCLinkerTool.AssemblyLinkResource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-ASSEMBLYLINKRESOURCE linker option"
  - "ASSEMBLYLINKRESOURCE linker option"
  - "/ASSEMBLYLINKRESOURCE linker option"
ms.assetid: 8b6ad184-1b33-47a4-8513-4803cf915b64
caps.latest.revision: 9
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
# /ASSEMBLYLINKRESOURCE (Link to .NET Framework Resource)
```  
/ASSEMBLYLINKRESOURCE:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 The .NET Framework resource file to which you want to link from the assembly.  
  
## Remarks  
 The /ASSEMBLYLINKRESOURCE option creates a link to a .NET Framework resource in the output file; the resource file is not placed in the output file. [/ASSEMBLYRESOURCE](../buildref/-assemblyresource--embed-a-managed-resource-.md) embeds a resource file in the output file.  
  
 Linked resources are public in the assembly when created with the linker.  
  
 /ASSEMBLYLINKRESOURCE requires that the compilation include [/clr](../buildref/-clr--common-language-runtime-compilation-.md); [/LN](../buildref/-ln--create-msil-module-.md) or [/NOASSEMBLY](../buildref/-noassembly--create-a-msil-module-.md) is not allowed with /ASSEMBLYLINKRESOURCE.  
  
 If *filename* is a .NET Framework resource file created, for example, by [Resgen.exe](../Topic/Resgen.exe%20\(Resource%20File%20Generator\).md) or in the development environment, it can be accessed with members in the **System.Resources** namespace. For more information, see [System.Resources.ResourceManager](https://msdn.microsoft.com/en-us/library/system.resources.resourcemanager.aspx). For all other resources, use the **GetManifestResource**\* methods in the **System.Reflection.Assembly** class to access the resource at run time.  
  
 *filename* can be any file format. For example, you may want to make a native DLL part of the assembly, so it can be installed into the Global Assembly Cache and accessed from managed code in the assembly.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYDEBUG](../buildref/-assemblydebug--add-debuggableattribute-.md)  
  
-   [/ASSEMBLYMODULE](../buildref/-assemblymodule--add-a-msil-module-to-the-assembly-.md)  
  
-   [/ASSEMBLYRESOURCE](../buildref/-assemblyresource--embed-a-managed-resource-.md)  
  
-   [/DELAYSIGN](../buildref/-delaysign--partially-sign-an-assembly-.md)  
  
-   [/KEYCONTAINER](../buildref/-keycontainer--specify-a-key-container-to-sign-an-assembly-.md)  
  
-   [/KEYFILE](../buildref/-keyfile--specify-key-or-key-pair-to-sign-an-assembly-.md)  
  
-   [/NOASSEMBLY](../buildref/-noassembly--create-a-msil-module-.md)  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the option into the **Additional Options** box.  
  
### To set this linker option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions*>.  
  
## See Also  
 [Setting Linker Options](../buildref/setting-linker-options.md)   
 [Linker Options](../buildref/linker-options.md)