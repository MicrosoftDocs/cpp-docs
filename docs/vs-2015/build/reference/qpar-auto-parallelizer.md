---
title: "-Qpar (Auto-Parallelizer) | Microsoft Docs"
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
  - "VC.Project.VCCLCompilerTool.EnableParallelCodeGeneration"
dev_langs: 
  - "C++"
ms.assetid: 33ecf49d-c0d5-4f34-bce3-84ff03f38918
caps.latest.revision: 14
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# /Qpar (Auto-Parallelizer)
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [-Qpar (Auto-Parallelizer)](https://docs.microsoft.com/cpp/build/reference/qpar-auto-parallelizer).  
  
  
Enables the [Auto-Parallelizer](../../parallel/auto-parallelization-and-auto-vectorization.md) feature of the compiler to automatically parallelize loops in your code.  
  
## Syntax  
  
```  
/Qpar  
```  
  
## Remarks  
 When  the compiler automatically parallelizes loops in code, it spreads computation across multiple processor cores. A loop is parallelized only if the compiler determines that it is legal to do so and that parallelization would improve performance.  
  
 The `#pragma loop()` directives are available to help the optimizer parallelize specific loops. For more information, see [loop](../../preprocessor/loop.md).  
  
 For information about how to enable output messages for the auto-parallelizer, see [/Qpar-report (Auto-Parallelizer Reporting Level)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md).  
  
### To set the /Qpar compiler option in Visual Studio  
  
1.  In **Solution Explorer**, open the shortcut menu for the project and then choose **Properties**.  
  
2.  In the **Property Pages** dialog box, under **C/C++**, select **Command Line**.  
  
3.  In the **Additional Options** box, enter `/Qpar`.  
  
### To set the /Qpar compiler option programmatically  
  
-   Use the code example in <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [/Q Options (Low-Level Operations)](../../build/reference/q-options-low-level-operations.md)   
 [/Qpar-report (Auto-Parallelizer Reporting Level)](../../build/reference/qpar-report-auto-parallelizer-reporting-level.md)   
 [Compiler Options](../../build/reference/compiler-options.md)   
 [Setting Compiler Options](../../build/reference/setting-compiler-options.md)   
 [#pragma loop()](../../preprocessor/loop.md)   
 [Parallel Programming in Native Code](http://go.microsoft.com/fwlink/?LinkId=263662)

