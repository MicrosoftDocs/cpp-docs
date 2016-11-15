---
title: "-NXCOMPAT (Compatible with Data Execution Prevention) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/NXCOMPAT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/NXCOMPAT linker option"
  - "-NXCOMPAT linker option"
  - "NXCOMPAT linker option"
ms.assetid: 5858e7ff-24d3-4ac3-9046-af2c9e220d9b
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
# /NXCOMPAT (Compatible with Data Execution Prevention)
Indicates that an executable was tested to be compatible with the Windows Data Execution Prevention feature.  
  
## Syntax  
  
```  
/NXCOMPAT[:NO]  
```  
  
## Remarks  
 By default, **/NXCOMPAT** is on.  
  
 **/NXCOMPAT:NO** can be used to explicitly specify an executable as incompatible with Data Execution Prevention.  
  
 For more information about Data Execution Prevention, see these articles:  
  
-   [A detailed description of the Data Execution Prevention (DEP) feature](http://go.microsoft.com/fwlink/?LinkID=157771) on the Microsoft Help and Support Web site  
  
-   [Data Execution Prevention](http://go.microsoft.com/fwlink/?LinkID=157770) on the MSDN Web site  
  
-   [Data Execution Prevention (Windows Embedded)](http://go.microsoft.com/fwlink/?LinkID=157768) on the MSDN Web site  
  
### To set this linker option in Visual Studio  
  
1.  Open the project **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Linker** folder.  
  
3.  Click the **Command Line** property page.  
  
4.  Type the option in the **Additional Options** box.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)