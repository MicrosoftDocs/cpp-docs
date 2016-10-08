---
title: "-GX (Enable Exception Handling)"
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
H1: /GX (Enable Exception Handling)
ms.assetid: 933b43ba-de77-4ff8-a48b-7074de90bc1c
caps.latest.revision: 16
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
# -GX (Enable Exception Handling)
Deprecated. Enables synchronous exception handling using the assumption that functions declared by using `extern "C"` never throw an exception.  
  
## Syntax  
  
```  
/GX  
```  
  
## Remarks  
 **/GX** is deprecated. Use the equivalent [/EHsc](../VS_visualcpp/-EH--Exception-Handling-Model-.md) option instead. For a list of deprecated compiler options, see the **Deprecated and Removed Compiler Options** section in [Compiler Options Listed by Category](../VS_visualcpp/Compiler-Options-Listed-by-Category.md).  
  
 By default, **/EHsc**, the equivalent of **/GX**, is in effect when you compile by using the Visual Studio development environment. When using the command line tools, no exception handling is specified. This is the equivalent of **/GX-**.  
  
 For more information, see [C++ Exception Handling](../VS_visualcpp/C---Exception-Handling.md).  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  In the navigation pane, choose **Configuration Properties**, **C/C++**, **Command Line**.  
  
3.  Type the compiler option in the **Additional Options** box.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [/EH (Exception Handling Model)](../VS_visualcpp/-EH--Exception-Handling-Model-.md)