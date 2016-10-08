---
title: "-Qvec-report (Auto-Vectorizer Reporting Level)"
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
H1: /Qvec-report (Auto-Vectorizer Reporting Level)
ms.assetid: 4778c9a3-0692-4085-9b05-1bfeadf4c74a
caps.latest.revision: 6
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# -Qvec-report (Auto-Vectorizer Reporting Level)
Enables the reporting feature of the compiler [Auto-Vectorizer](../VS_visualcpp/Auto-Parallelization-and-Auto-Vectorization.md) and specifies the level of informational messages for output during compilation.  
  
## Syntax  
  
```  
/Qvec-report:{1}{2}  
```  
  
## Remarks  
 **/Qvec-report:1**  
 Outputs an informational message for loops that are vectorized.  
  
 **/Qvec-report:2**  
 Outputs an informational message for loops that are vectorized and for loops that are not vectorized, together with a reason code.  
  
 For information about reason codes and messages, see [Vectorizer and Parallelizer Messages](../VS_visualcpp/Vectorizer-and-Parallelizer-Messages.md).  
  
### To set the /Qvec-report compiler option in Visual Studio  
  
1.  In **Solution Explorer**, open the shortcut menu for the project and then choose **Properties**.  
  
2.  In the **Property Pages** dialog box, under **C/C++**, select **Command Line**.  
  
3.  In the **Additional Options** box, enter `/Qvec-report:1` or `/Qvec-report:2`.  
  
### To set the /Qvec-report compiler option programmatically  
  
-   Use the code example in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [/Q Options (Low-Level Operations)](../VS_visualcpp/-Q-Options--Low-Level-Operations-.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [Parallel Programming in Native Code](http://go.microsoft.com/fwlink/?LinkId=263662)