---
title: "-ERRORREPORT (Report Internal Linker Errors) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/ERRORREPORT"
  - "VC.Project.VCLinkerTool.ErrorReporting"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/ERRORREPORT linker option"
  - "ERRORREPORT linker option"
  - "-ERRORREPORT linker option"
ms.assetid: f5fab595-a2f1-4eb0-ab5c-1c0fbd3d8c28
caps.latest.revision: 7
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
# /ERRORREPORT (Report Internal Linker Errors)
```  
/errorReport:[ none | prompt | queue | send ]  
```  
  
## Remarks  
 Lets you provide internal compiler error (ICE) information directly to Microsoft.  
  
 The option **/errorReport:send** tries to automatically send error information to Microsoft, but success depends on registry settings. For more information about how to set the appropriate values in the registry, see [How to Turn on Automatic Error Reporting in Visual Studio 2008 Command-line Tools](http://go.microsoft.com/fwlink/?LinkID=184695) on the MSDN Web site.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **Configuration Properties** folder.  
  
3.  Click the **Linker** folder.  
  
4.  Click the **Advanced** property page.  
  
5.  Modify the **Error Reporting**property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ErrorReporting%2A>.  
  
## See Also  
 [/errorReport (Report Internal Compiler Errors)](../../build/reference/errorreport-report-internal-compiler-errors.md)   
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)