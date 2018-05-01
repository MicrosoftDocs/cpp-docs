---
title: "-WINMD (Generate Windows Metadata) | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.GenerateWindowsMetadata"
dev_langs: 
  - "C++"
ms.assetid: bcfb4901-411e-4c9e-9f78-23028b6e5fcc
caps.latest.revision: 11
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /WINMD (Generate Windows Metadata)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-WINMD (Generate Windows Metadata)](https://docs.microsoft.com/cpp/build/reference/winmd-generate-windows-metadata).  
  
  
Enables generation of a Windows Runtime Metadata (.winmd) file.  
  
```  
/WINMD[:{NO|ONLY}]  
```  
  
## Remarks  
 /WINMD  
 The default setting for [!INCLUDE[win8_appname_long](../../includes/win8-appname-long-md.md)] apps. The linker generates both the binary executable file and the .winmd metadata file.  
  
 /WINMD:NO  
 The linker generates only the binary executable file, but not a .winmd file.  
  
 /WINMD:ONLY  
 The linker generates only the .winmd file, but not the binary executable file.  
  
 By default, the output file name has the form `binaryname`.winmd. To specify a different file name, use the [/WINMDFILE](../../build/reference/winmdfile-specify-winmd-file.md) option.  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **Linker** folder.  
  
3.  Select the **Windows Metadata** property page.  
  
4.  In the **Generate Windows Metadata** drop-down list box, select the option you want.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)

