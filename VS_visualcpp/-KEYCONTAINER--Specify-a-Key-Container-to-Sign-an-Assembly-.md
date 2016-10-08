---
title: "-KEYCONTAINER (Specify a Key Container to Sign an Assembly)"
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
H1: /KEYCONTAINER (Specify a Key Container to Sign an Assembly)
ms.assetid: 94882d12-b77a-49c7-96d0-18a31aee001e
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
# -KEYCONTAINER (Specify a Key Container to Sign an Assembly)
```  
/KEYCONTAINER:name  
```  
  
## Remarks  
 where,  
  
 *name*  
 Container that contains the key. Place the string in double quotation marks (" ") if it contains a space.  
  
## Remarks  
 The linker creates a signed assembly by inserting a public key into the assembly manifest and signing the final assembly with the private key. To generate a key file, type [sn -k](../Topic/Sn.exe%20\(Strong%20Name%20Tool\).md) `file` at the command line. **sn -i** installs the key pair into a container.  
  
 If you compile with [/LN](../VS_visualcpp/-LN--Create-MSIL-Module-.md), the name of the key file is held in the module and incorporated into the assembly that is created when you compile an assembly that includes an explicit reference to the module, via [#using](../VS_visualcpp/#using-Directive--C---.md), or when linking with [/ASSEMBLYMODULE](../VS_visualcpp/-ASSEMBLYMODULE--Add-a-MSIL-Module-to-the-Assembly-.md).  
  
 You can also pass your encryption information to the compiler with [/KEYFILE](../VS_visualcpp/-KEYFILE--Specify-Key-or-Key-Pair-to-Sign-an-Assembly-.md). Use [/DELAYSIGN](../VS_visualcpp/-DELAYSIGN--Partially-Sign-an-Assembly-.md) if you want a partially signed assembly. See [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../VS_visualcpp/Strong-Name-Assemblies--Assembly-Signing---C---CLI-.md) for more information on signing an assembly.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYDEBUG](../VS_visualcpp/-ASSEMBLYDEBUG--Add-DebuggableAttribute-.md)  
  
-   [/ASSEMBLYLINKRESOURCE](../VS_visualcpp/-ASSEMBLYLINKRESOURCE--Link-to-.NET-Framework-Resource-.md)  
  
-   [/ASSEMBLYMODULE](../VS_visualcpp/-ASSEMBLYMODULE--Add-a-MSIL-Module-to-the-Assembly-.md)  
  
-   [/ASSEMBLYRESOURCE](../VS_visualcpp/-ASSEMBLYRESOURCE--Embed-a-Managed-Resource-.md)  
  
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