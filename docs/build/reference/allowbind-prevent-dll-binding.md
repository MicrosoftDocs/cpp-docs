---
title: "-ALLOWBIND (Prevent DLL Binding) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.PreventDLLBinding"
  - "/allowbind"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ALLOWBIND linker option"
  - "binding DLLs"
  - "preventing DLL binding"
  - "ALLOWBIND linker option"
  - "-ALLOWBIND linker option"
  - "DLLs [C++], preventing binding"
ms.assetid: 30e37e24-12e4-407e-988a-39d357403598
caps.latest.revision: 10
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
# /ALLOWBIND (Prevent DLL Binding)
```  
/ALLOWBIND[:NO]  
```  
  
## Remarks  
 /ALLOWBIND:NO sets a bit in a DLL's header that indicates to Bind.exe that the image is not allowed to be bound. You may not want a DLL to be bound if it has been digitally signed (binding invalidates the signature).  
  
 You can edit an existing DLL for /ALLOWBIND functionality with the [/ALLOWBIND](../../build/reference/allowbind.md) option of the EDITBIN utility.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand **Configuration Properties**, **Linker**, and select **Command Line**.  
  
3.  Enter `/ALLOWBIND:NO` into **Additional Options**.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)   
 [BindImage function](http://msdn.microsoft.com/library/windows/desktop/ms679278.aspx)   
 [BindImageEx function](http://msdn.microsoft.com/library/windows/desktop/ms679279.aspx)