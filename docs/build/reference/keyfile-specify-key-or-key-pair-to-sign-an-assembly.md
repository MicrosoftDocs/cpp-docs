---
title: "-KEYFILE (Specify Key or Key Pair to Sign an Assembly) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/keyfile"
  - "VC.Project.VCLinkerTool.KeyFile"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/KEYFILE linker option"
  - "-KEYFILE linker option"
  - "KEYFILE linker option"
ms.assetid: 9b71f8c0-541c-4fe5-a0c7-9364f42ecb06
caps.latest.revision: 12
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
# /KEYFILE (Specify Key or Key Pair to Sign an Assembly)
```  
/KEYFILE:filename  
```  
  
## Remarks  
 where:  
  
 *filename*  
 File that contains the key. Place the string in double quotation marks (" ") if it contains a space.  
  
## Remarks  
 The linker inserts the public key into the assembly manifest and then signs the final assembly with the private key. To generate a key file, type [sn -k](http://msdn.microsoft.com/Library/c1d2b532-1b8e-4c7a-8ac5-53b801135ec6) `file` at the command line. A signed assembly is said to have a strong name.  
  
 If you compile with [/LN](../../build/reference/ln-create-msil-module.md), the name of the key file is held in the module and incorporated into the assembly that is created when you compile an assembly that includes an explicit reference to the module, via [#using](../../preprocessor/hash-using-directive-cpp.md), or when linking with [/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md).  
  
 You can also pass your encryption information to the linker with [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md). Use [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md) if you want a partially signed assembly. See [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) for more information on signing an assembly.  
  
 In case both **/KEYFILE** and **/KEYCONTAINER** are specified (either by command line option or by custom attribute), the linker will first try the key container. If that succeeds, then the assembly is signed with the information in the key container. If the linker does not find the key container, it will try the file specified with /KEYFILE. If that succeeds, the assembly is signed with the information in the key file and the key information will be installed in the key container (similar to sn -i) so that on the next compilation, the key container will be valid.  
  
 Note that a key file might contain only the public key.  
  
 See [Creating and Using Strong-Named Assemblies](http://msdn.microsoft.com/Library/ffbf6d9e-4a88-4a8a-9645-4ce0ee1ee5f9) for more information on signing an assembly.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)  
  
-   [/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)  
  
-   [/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)  
  
-   [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)  
  
-   [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the option into the **Additional Options** box.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)