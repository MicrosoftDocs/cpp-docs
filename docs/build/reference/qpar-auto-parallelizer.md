---
title: "-Qpar (Auto-Parallelizer) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["VC.Project.VCCLCompilerTool.EnableParallelCodeGeneration"]
dev_langs: ["C++"]
ms.assetid: 33ecf49d-c0d5-4f34-bce3-84ff03f38918
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /Qpar (Auto-Parallelizer)
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
 [Parallel Programming in Native Code](https://blogs.msdn.microsoft.com/nativeconcurrency/2012/04/12/auto-vectorizer-in-visual-studio-2012-overview/)