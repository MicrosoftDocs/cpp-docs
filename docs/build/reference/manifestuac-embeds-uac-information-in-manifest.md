---
title: "-MANIFESTUAC (Embeds UAC information in manifest) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCLinkerTool.UACUIAccess"
  - "VC.Project.VCLinkerTool.UACExecutionLevel"
  - "VC.Project.VCLinkerTool.EnableUAC"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/MANIFESTUAC linker option"
  - "MANIFESTUAC linker option"
  - "-MANIFESTUAC linker option"
ms.assetid: 2d243c39-fa13-493c-b56f-d0d972a1603a
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
# /MANIFESTUAC (Embeds UAC information in manifest)
Specifies whether User Account Control (UAC) information is embedded in the program manifest.  
  
## Syntax  
  
```  
/MANIFESTUAC  
/MANIFESTUAC:NO  
/MANIFESTUAC:fragment  
/MANIFESTUAC:level=_level  
/MANIFESTUAC:uiAccess=_uiAccess  
```  
  
#### Parameters  
 `fragment`  
 A string that contains the `level` and `uiAccess` values. For more information, see the Remarks section later in this topic.  
  
 `_level`  
 One of *asInvoker*, *highestAvailable*, or *requireAdministrator*. Defaults to asInvoker. For more information, see the Remarks section later in this topic.  
  
 `_uiAccess`  
 `true` if you want the application to bypass user interface protection levels and drive input to higher-permission windows on the desktop; otherwise, `false`. Defaults to `false`. Set to `true` only for user interface accessibility applications.  
  
## Remarks  
 If you specify multiple /MANIFESTUAC options on the command-line, the last one entered takes precedence.  
  
 The choices for /MANIFESTUAC:level are as follows:  
  
-   `asInvoker`: The application will run with the same permissions as the process that started it. The application can be elevated to a higher permission level by selecting **Run as Administrator**.  
  
-   highestAvailable: The application will run with the highest permission level that it can. If the user who starts the application is a member of the Administrators group, this option is the same as requireAdministrator. If the highest available permission level is higher than the level of the opening process, the system will prompt for credentials.  
  
-   requireAdministrator: The application will run with administrator permissions. The user who starts the application must be a member of the Administrators group. If the opening process is not running with administrative permissions, the system will prompt for credentials.  
  
 You can specify the level and uiAccess values in one step by using the /MANIFESTUAC:fragment option. The fragment must be in the following form:  
  
```  
"level=[ asInvoker | highestAvailable | requireAdministrator ] uiAccess=[ true | false ]"  
```  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Configuration Properties** node.  
  
3.  Expand the **Linker** node.  
  
4.  Select the **Manifest File** property page.  
  
5.  Modify the **Enable User Account Control (UAC)**, **UAC Execution Level**, and **UAC Bypass UI Protection** properties.  
  
### To set this linker option programmatically  
  
1.  See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EnableUAC%2A>, <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACExecutionLevel%2A>, and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.UACUIAccess%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)