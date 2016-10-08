---
title: "-NOASSEMBLY (Create a MSIL Module)"
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
H1: /NOASSEMBLY (Create a MSIL Module)
ms.assetid: 3cea4e70-f451-4395-a626-1930b1b127fe
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
# -NOASSEMBLY (Create a MSIL Module)
```  
/NOASSEMBLY  
```  
  
## Remarks  
 The /NOASSEMBLY option tells the linker to create an image for the current output file without a .NET Framework assembly. An MSIL output file without an assembly manifest is called a module.  
  
 By default, an assembly is created. You can also use the [/LN (Create MSIL Module)](../VS_visualcpp/-LN--Create-MSIL-Module-.md) compiler option to create a module.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYDEBUG](../VS_visualcpp/-ASSEMBLYDEBUG--Add-DebuggableAttribute-.md)  
  
-   [/ASSEMBLYLINKRESOURCE](../VS_visualcpp/-ASSEMBLYLINKRESOURCE--Link-to-.NET-Framework-Resource-.md)  
  
-   [/ASSEMBLYMODULE](../VS_visualcpp/-ASSEMBLYMODULE--Add-a-MSIL-Module-to-the-Assembly-.md)  
  
-   [/ASSEMBLYRESOURCE](../VS_visualcpp/-ASSEMBLYRESOURCE--Embed-a-Managed-Resource-.md)  
  
-   [/DELAYSIGN](../VS_visualcpp/-DELAYSIGN--Partially-Sign-an-Assembly-.md)  
  
-   [/KEYFILE](../VS_visualcpp/-KEYFILE--Specify-Key-or-Key-Pair-to-Sign-an-Assembly-.md)  
  
-   [/KEYCONTAINER](../VS_visualcpp/-KEYCONTAINER--Specify-a-Key-Container-to-Sign-an-Assembly-.md)  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../VS_visualcpp/Working-with-Project-Properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Turn Off Assembly Generation** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TurnOffAssemblyGeneration?qualifyHint=False>.  
  
## See Also  
 [Setting Linker Options](../VS_visualcpp/Setting-Linker-Options.md)   
 [Linker Options](../VS_visualcpp/Linker-Options.md)