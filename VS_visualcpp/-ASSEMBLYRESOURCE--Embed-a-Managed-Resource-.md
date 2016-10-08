---
title: "-ASSEMBLYRESOURCE (Embed a Managed Resource)"
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
H1: /ASSEMBLYRESOURCE (Embed a Managed Resource)
ms.assetid: 0ce6e1fb-921b-4b1b-a59c-d35388d789f2
caps.latest.revision: 12
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
# -ASSEMBLYRESOURCE (Embed a Managed Resource)
```  
/ASSEMBLYRESOURCE:filename[,[name][,PRIVATE]]  
```  
  
## Parameters  
 *filename*  
 The managed resource you want to embed in this assembly.  
  
 *name*  
 Optional. The logical name for the resource; the name used to load the resource. The default is the name of the file.  
  
 Optionally, you can specify if the file should be private in the assembly manifest. By default, *name* is public in the assembly.  
  
## Remarks  
 Use the /ASSEMBLYRESOURCE option to embed a resource in an assembly.  
  
 Resources are public in the assembly when created with the linker. The linker does not allow you to rename the resource in the assembly.  
  
 If *filename* is a .NET Framework resource (.resources) file created, for example, by the [Resource File Generator (Resgen.exe)](../Topic/Resgen.exe%20\(Resource%20File%20Generator\).md) or in the development environment, it can be accessed with members in the **System.Resources** namespace (see [System.Resources.ResourceManager](https://msdn.microsoft.com/en-us/library/system.resources.resourcemanager.aspx) for more information). For all other resources, use the **GetManifestResource**\* methods in **System.Reflection.Assembly** class to access the resource at run time.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYDEBUG](../VS_visualcpp/-ASSEMBLYDEBUG--Add-DebuggableAttribute-.md)  
  
-   [/ASSEMBLYLINKRESOURCE](../VS_visualcpp/-ASSEMBLYLINKRESOURCE--Link-to-.NET-Framework-Resource-.md)  
  
-   [/ASSEMBLYMODULE](../VS_visualcpp/-ASSEMBLYMODULE--Add-a-MSIL-Module-to-the-Assembly-.md)  
  
-   [/DELAYSIGN](../VS_visualcpp/-DELAYSIGN--Partially-Sign-an-Assembly-.md)  
  
-   [/KEYFILE](../VS_visualcpp/-KEYFILE--Specify-Key-or-Key-Pair-to-Sign-an-Assembly-.md)  
  
-   [/KEYCONTAINER](../VS_visualcpp/-KEYCONTAINER--Specify-a-Key-Container-to-Sign-an-Assembly-.md)  
  
-   [/NOASSEMBLY](../VS_visualcpp/-NOASSEMBLY--Create-a-MSIL-Module-.md)  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Input** property page.  
  
4.  Modify the **Embed Managed Resource File** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EmbedManagedResourceFile?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)