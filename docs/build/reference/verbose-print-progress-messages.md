---
title: "-VERBOSE (Print Progress Messages) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/verbose"
  - "VC.Project.VCLinkerTool.ShowProgress"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "-VERBOSE linker option"
  - "linking [C++], session progress information"
  - "Print Progress Messages linker option"
  - "linker [C++], output dependency information"
  - "/VERBOSE linker option"
  - "dependencies [C++], dependency information in linker output"
  - "VERBOSE linker option"
ms.assetid: 9c347d98-4c37-4724-a39e-0983934693ab
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
# /VERBOSE (Print Progress Messages)
```  
/VERBOSE[:{ICF|INCR|LIB|REF|SAFESEH|UNUSEDLIBS}]  
```  
  
## Remarks  
 The linker sends information about the progress of the linking session to the **Output** window. On the command line, the information is sent to standard output and can be redirected to a file.  
  
|Option|Description|  
|------------|-----------------|  
|/VERBOSE|Displays details about the linking process.|  
|/VERBOSE:ICF|Display information about linker activity that results from the use of [/OPT:ICF](../../build/reference/opt-optimizations.md).|  
|/VERBOSE:INCR|Displays information about the incremental link process.|  
|/VERBOSE:LIB|Displays progress messages that indicate just the libraries searched.<br /><br /> The displayed information includes the library search process and lists each library and object name (with full path), the symbol being resolved from the library, and a list of objects that reference the symbol.|  
|/VERBOSE:REF|Displays information about linker activity that results from the use of [/OPT:REF](../../build/reference/opt-optimizations.md).|  
|/VERBOSE:SAFESEH|Displays information about modules that are not compatible with safe exception handling when [/SAFESEH](../../build/reference/safeseh-image-has-safe-exception-handlers.md) is not specified.|  
|/VERBOSE:UNUSEDLIBS|Displays information about any library files that are unused when the image is created.|  
  
### To set this linker option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Expand the **Linker** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Add the option to the **Additional Options** box.  
  
### To set this linker option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ShowProgress%2A>.  
  
## See Also  
 [Setting Linker Options](../../build/reference/setting-linker-options.md)   
 [Linker Options](../../build/reference/linker-options.md)