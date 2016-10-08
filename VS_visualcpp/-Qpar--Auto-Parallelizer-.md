---
title: "-Qpar (Auto-Parallelizer)"
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
H1: /Qpar (Auto-Parallelizer)
ms.assetid: 33ecf49d-c0d5-4f34-bce3-84ff03f38918
caps.latest.revision: 11
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
# -Qpar (Auto-Parallelizer)
Enables the [Auto-Parallelizer](../VS_visualcpp/Auto-Parallelization-and-Auto-Vectorization.md) feature of the compiler to automatically parallelize loops in your code.  
  
## Syntax  
  
```  
/Qpar  
```  
  
## Remarks  
 When  the compiler automatically parallelizes loops in code, it spreads computation across multiple processor cores. A loop is parallelized only if the compiler determines that it is legal to do so and that parallelization would improve performance.  
  
 The `#pragma loop()` directives are available to help the optimizer parallelize specific loops. For more information, see [loop](../VS_visualcpp/loop.md).  
  
 For information about how to enable output messages for the auto-parallelizer, see [/Qpar-report (Auto-Parallelizer Reporting Level)](../VS_visualcpp/-Qpar-report--Auto-Parallelizer-Reporting-Level-.md).  
  
### To set the /Qpar compiler option in Visual Studio  
  
1.  In **Solution Explorer**, open the shortcut menu for the project and then choose **Properties**.  
  
2.  In the **Property Pages** dialog box, under **C/C++**, select **Command Line**.  
  
3.  In the **Additional Options** box, enter `/Qpar`.  
  
### To set the /Qpar compiler option programmatically  
  
-   Use the code example in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions?qualifyHint=False>.  
  
## See Also  
 [/Q Options (Low-Level Operations)](../VS_visualcpp/-Q-Options--Low-Level-Operations-.md)   
 [/Qpar-report (Auto-Parallelizer Reporting Level)](../VS_visualcpp/-Qpar-report--Auto-Parallelizer-Reporting-Level-.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)   
 [#pragma loop()](../VS_visualcpp/loop.md)   
 [Parallel Programming in Native Code](http://go.microsoft.com/fwlink/?LinkId=263662)