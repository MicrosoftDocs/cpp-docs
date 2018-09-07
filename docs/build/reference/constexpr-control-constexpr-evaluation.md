---
title: "-constexpr (Control constexpr evaluation) | Microsoft Docs"
ms.custom: ""
ms.date: "08/15/2017"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/constexpr", "-constexpr"]
dev_langs: ["C++"]
helpviewer_keywords: ["/constexpr control constexpr evaluation [C++]", "-constexpr control constexpr evaluation [C++]", "constexpr control constexpr evaluation [C++]"]
ms.assetid: 76d56784-f5ad-401d-841d-09d1059e8b8c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /constexpr (Control constexpr evaluation)  
  
Use the **/constexpr** compiler options to control parameters for **constexpr** evaluation at compile time.  
  
## Syntax  
  
> **/constexpr:depth**<em>N</em>  
> **/constexpr:backtrace**<em>N</em>  
> **/constexpr:steps**<em>N</em>  
  
## Arguments  
  
**depth**<em>N</em>  
Limit the depth of recursive **constexpr** function invocation to *N* levels. The default is 512.  
  
**backtrace**<em>N</em>  
Show up to *N* **constexpr** evaluations in diagnostics. The default is 10.  
  
**steps**<em>N</em>  
Terminate **constexpr** evaluation after *N* steps. The default is 100,000.  
  
## Remarks  
  
The **/constexpr** compiler options control compile-time evaluation of **constexpr** expressions. Evaluation steps, recursion levels, and backtrace depth are controlled to prevent the compiler from spending too much time on **constexpr** evaluation. For more information on the **constexpr** language element, see [constexpr (C++)](../../cpp/constexpr-cpp.md).  

The **/constexpr** options are available beginning in Visual Studio 2015.  
  
### To set this compiler option in the Visual Studio development environment  
  
1. Open your project's **Property Pages** dialog box.   
  
2. Under **Configuration Properties**, expand the **C/C++** folder and choose the **Command Line** property page.  
  
3. Enter any **/constexpr** compiler options in the **Additional Options** box. Choose **OK** or **Apply** to save your changes.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
  
[Compiler Options](../../build/reference/compiler-options.md)   
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)