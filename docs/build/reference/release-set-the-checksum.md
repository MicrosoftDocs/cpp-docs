---
title: "-RELEASE (Set the Checksum) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/release"
  - "VC.Project.VCLinkerTool.SetChecksum"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-RELEASE linker option"
  - "/RELEASE linker option"
  - "checksum setting"
  - "RELEASE linker option"
ms.assetid: 93bcadf4-29ac-4824-914b-6997e3751d22
caps.latest.revision: 8
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
# /RELEASE (Set the Checksum)
```  
/RELEASE  
```  
  
## Remarks  
 The /RELEASE option sets the Checksum in the header of an .exe file.  
  
 The operating system requires the Checksum for device drivers. Set the Checksum for release versions of your device drivers to ensure compatibility with future operating systems.  
  
 The /RELEASE option is set by default when the [/SUBSYSTEM:NATIVE](../../build/reference/subsystem-specify-subsystem.md) option is specified.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Set Checksum** property.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.SetChecksum%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)