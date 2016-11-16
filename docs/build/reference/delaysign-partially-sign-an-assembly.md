---
title: "-DELAYSIGN (Partially Sign an Assembly) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/delaysign"
  - "VC.Project.VCLinkerTool.DelaySign"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/DELAYSIGN linker option"
  - "DELAYSIGN linker option"
  - "-DELAYSIGN linker option"
ms.assetid: 15244d30-3ecb-492f-a408-ffe81f38de20
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
# /DELAYSIGN (Partially Sign an Assembly)
```  
/DELAYSIGN[:NO]  
```  
  
## Remarks  
 where,  
  
 NO  
 Specifies that the assembly should not be partially signed.  
  
## Remarks  
 Use **/DELAYSIGN** if you only want to place the public key in the assembly. The default is **/DELAYSIGN:NO**.  
  
 The **/DELAYSIGN** option has no effect unless used with [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) or [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md).  
  
 When you request a fully signed assembly, the compiler hashes the file that contains the manifest (assembly metadata) and signs that hash with the private key. The resulting digital signature is stored in the file that contains the manifest. When an assembly is delay signed, the linker does not compute and store the signature, but reserves space in the file so the signature can be added later.  
  
 For example, using **/DELAYSIGN** allows a tester to put the assembly in the global cache. After testing, you can fully sign the assembly by placing the private key in the assembly.  
  
 See [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) and [Delay Signing an Assembly](http://msdn.microsoft.com/Library/9d300e17-5bf1-4360-97da-2aa55efd9070) for more information on signing an assembly.  
  
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