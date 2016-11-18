---
title: "-hotpatch (Create Hotpatchable Image) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/hotpatch"
  - "VC.Project.VCCLCompilerTool.CreateHotpatchableImage"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "hot patching"
  - "-hotpatch compiler option [C++]"
  - "/hotpatch compiler option [C++]"
  - "hotpatching"
ms.assetid: aad539b6-c053-4c78-8682-853d98327798
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /hotpatch (Create Hotpatchable Image)
Prepares an image for hot patching.  
  
## Syntax  
  
```  
/hotpatch  
```  
  
## Remarks  
 When **/hotpatch** is used in a compilation, the compiler ensures that first instruction of each function is at least two bytes, which is required for hot patching.  
  
 To complete the preparation for making an image hotpatchable, after you use **/hotpatch** to compile, you must use [/FUNCTIONPADMIN (Create Hotpatchable Image)](../../build/reference/functionpadmin-create-hotpatchable-image.md) to link. When you compile and link an image by using one invocation of cl.exe, **/hotpatch** implies **/functionpadmin**.  
  
 Because instructions are always two bytes or larger on the ARM architecture, and because x64 compilation is always treated as if **/hotpatch** has been specified, you don't have to specify **/hotpatch** when you compile for these targets; however, you must still link by using **/functionpadmin** to create hotpatchable images for them. The **/hotpatch** compiler option only affects x86 compilation.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **C/C++** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Add the compiler option to the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## Guidance  
 For more information about update management, see "Security Guidance for Update Management" at [http://www.microsoft.com/technet/security/guidance/PatchManagement.mspx](http://www.microsoft.com/technet/security/guidance/PatchManagement.mspx).  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)