---
title: "-errorReport (Report Internal Compiler Errors) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.ErrorReporting"
  - "/errorreport"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/errorReport compiler option [C++]"
  - "-errorReport compiler option [C++]"
ms.assetid: 819828f8-b0a5-412c-9c57-bf822f17e667
caps.latest.revision: 21
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# /errorReport (Report Internal Compiler Errors)
Lets you provide internal compiler error (ICE) information directly to Microsoft.  
  
## Syntax  
  
```  
/errorReport:[ none | prompt | queue | send ]  
```  
  
## Arguments  
 **none**  
 Reports about internal compiler errors will not be collected or sent to Microsoft.  
  
 **prompt**  
 Prompts you to send a report when you receive an internal compiler error. **prompt** is the default when an application is compiled in the development environment.  
  
 **queue**  
 Queues the error report. When you log in with administrator privileges, a window is displayed so that you can report any failures since the last time you were logged in (you will not be prompted to send reports for failures more than once every three days). **queue** is the default when an application is compiled at a command prompt.  
  
 **send**  
 Automatically sends reports of internal compiler errors to Microsoft if reporting is enabled by the Windows Error Reporting system settings.  
  
## Remarks  
 An internal compiler error (ICE) results when the compiler cannot process a source code file. When an ICE occurs, the compiler does not produce an output file or any useful diagnostic that you can use to fix your code.  
  
 In earlier releases, when you got an ICE, you were encouraged to call Microsoft Product Support Services to report the problem. With **/errorReport**, you can provide ICE information directly to Microsoft. Your error reports can help improve future compiler releases.  
  
 A user's ability to send reports depends on computer and user policy permissions.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Error Reporting**property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ErrorReporting%2A>.  
  
## See Also  
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)