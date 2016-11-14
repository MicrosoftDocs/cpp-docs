---
title: "-MACHINE (Specify Target Platform) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.TargetMachine"
  - "/machine"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "mapfiles, creating linker"
  - "target platform"
  - "-MACHINE linker option"
  - "/MACHINE linker option"
  - "MACHINE linker option"
ms.assetid: 8d41bf4b-7e53-4ab9-9085-d852b08d31c2
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
# /MACHINE (Specify Target Platform)
```  
/MACHINE:{ARM|EBC|X64|X86}  
```  
  
## Remarks  
 The /MACHINE option specifies the target platform for the program.  
  
 Usually, you don't have to specify the /MACHINE option. LINK infers the machine type from the .obj files. However, in some circumstances, LINK cannot determine the machine type and issues a [linker tools error LNK1113](../../error-messages/tool-errors/linker-tools-error-lnk1113.md). If such an error occurs, specify /MACHINE.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Target Machine** property.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TargetMachine%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)