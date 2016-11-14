---
title: "-DELAYLOAD (Delay Load Import) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/delayload"
  - "VC.Project.VCLinkerTool.DelayLoadDLLS"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "DELAYLOAD linker option"
  - "-DELAYLOAD linker option"
  - "/DELAYLOAD linker option"
  - "delayed loading of DLLs, /DELAYLOAD option"
ms.assetid: 39ea0f1e-5c01-450f-9c75-2d9761ff9b28
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
# /DELAYLOAD (Delay Load Import)
```  
/DELAYLOAD:dllname  
```  
  
## Parameters  
 `dllname`  
 The name of a DLL that you want to delay load.  
  
## Remarks  
 The /DELAYLOAD option causes the DLL that's specified by `dllname` to be loaded only on the first call by the program to a function in that DLL. For more information, see [Linker Support for Delay-Loaded DLLs](../../build/reference/linker-support-for-delay-loaded-dlls.md). You can use this option as many times as necessary to specify as many DLLs as you choose. You must use Delayimp.lib when you link your program, or you can implement your own delay-load helper function.  
  
 The [/DELAY](../../build/reference/delay-delay-load-import-settings.md) option specifies binding and loading options for each delay-loaded DLL.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  In the **Linker** folder, select the **Input** property page.  
  
3.  Modify the **Delay Loaded DLLs** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.DelayLoadDLLs%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)