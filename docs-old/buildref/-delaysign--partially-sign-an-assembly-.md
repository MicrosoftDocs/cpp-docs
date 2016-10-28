---
title: "-DELAYSIGN (Partially Sign an Assembly)"
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
  
 The **/DELAYSIGN** option has no effect unless used with [/KEYFILE](../buildref/-keyfile--specify-key-or-key-pair-to-sign-an-assembly-.md) or [/KEYCONTAINER](../buildref/-keycontainer--specify-a-key-container-to-sign-an-assembly-.md).  
  
 When you request a fully signed assembly, the compiler hashes the file that contains the manifest (assembly metadata) and signs that hash with the private key. The resulting digital signature is stored in the file that contains the manifest. When an assembly is delay signed, the linker does not compute and store the signature, but reserves space in the file so the signature can be added later.  
  
 For example, using **/DELAYSIGN** allows a tester to put the assembly in the global cache. After testing, you can fully sign the assembly by placing the private key in the assembly.  
  
 See [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../cli/strong-name-assemblies--assembly-signing---c---cli-.md) and [Delay Signing an Assembly](../Topic/Delay%20Signing%20an%20Assembly.md) for more information on signing an assembly.  
  
 Other linker options that affect assembly generation are:  
  
-   [/ASSEMBLYDEBUG](../buildref/-assemblydebug--add-debuggableattribute-.md)  
  
-   [/ASSEMBLYLINKRESOURCE](../buildref/-assemblylinkresource--link-to-.net-framework-resource-.md)  
  
-   [/ASSEMBLYMODULE](../buildref/-assemblymodule--add-a-msil-module-to-the-assembly-.md)  
  
-   [/ASSEMBLYRESOURCE](../buildref/-assemblyresource--embed-a-managed-resource-.md)  
  
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