---
title: "-errorReport (Report Internal Compiler Errors)"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
H1: /errorReport (Report Internal Compiler Errors)
ms.assetid: 819828f8-b0a5-412c-9c57-bf822f17e667
caps.latest.revision: 21
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# -errorReport (Report Internal Compiler Errors)
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
  
1.  Open the project **Property Pages** dialog box. For more information, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Advanced** property page.  
  
4.  Modify the **Error Reporting**property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.ErrorReporting?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)