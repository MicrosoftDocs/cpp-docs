---
title: "-await (Enable coroutine support) | Microsoft Docs"
ms.custom: ""
ms.date: "08/15/2017"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "cpp-tools"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "/await"
  - "-await"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "/await enable coroutine support [C++]"
  - "-await enable coroutine support [C++]"
  - "await enable coroutine support [C++]"
ms.assetid: 302c8e69-09b6-4c58-bcdd-0a6a8713a8df
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: 
  - "cplusplus"
---
# /await (Enable coroutine support)  
  
Use the **/await** compiler option to enable compiler support for coroutines.  
  
## Syntax  
  
> /await  
  
## Remarks  
  
The **/await** compiler option enables compiler support for C++ coroutines and the keywords **co_await**, **co_yield**, and **co_return**. This option is off by default. For information about support for coroutines in Visual Studio, see the [Visual Studio Team Blog](https://blogs.msdn.microsoft.com/vcblog/category/coroutine/). For more information about the coroutines standard proposal, see [N4628 Working Draft, Technical Specification for C++ Extensions for Coroutines](http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/n4628.pdf).  

The **/await** option is available beginning in Visual Studio 2015.  
  
### To set this compiler option in the Visual Studio development environment  
  
1. Open your project's **Property Pages** dialog box.   
  
2. Under **Configuration Properties**, expand the **C/C++** folder and choose the **Command Line** property page.  
  
3. Enter the **/await** compiler option in the **Additional Options** box. Choose **OK** or **Apply** to save your changes.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
  
[Compiler Options](../../build/reference/compiler-options.md)   
[Setting Compiler Options](../../build/reference/setting-compiler-options.md)