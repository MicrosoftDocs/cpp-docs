---
title: "-RELEASE (Set the Checksum) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/release", "VC.Project.VCLinkerTool.SetChecksum"]
dev_langs: ["C++"]
helpviewer_keywords: ["-RELEASE linker option", "/RELEASE linker option", "checksum setting", "RELEASE linker option"]
ms.assetid: 93bcadf4-29ac-4824-914b-6997e3751d22
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
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