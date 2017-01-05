---
title: "-Zo (Enhance Optimized Debugging) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "-Zo"
  - "/Zo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Zo compiler option [C++]"
  - "/Zo compiler option [C++]"
  - "-Zo compiler option [C++]"
ms.assetid: eea8d89a-7fe0-4fe1-86b2-7689bbebbd7f
caps.latest.revision: 6
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
# /Zo (Enhance Optimized Debugging)
Generate enhanced debugging information for optimized code in non-debug builds.  
  
## Syntax  
  
```cpp  
/Zo[-]  
```  
  
## Remarks  
 The **/Zo** compiler switch generates enhanced debugging information for optimized code. Optimization may use registers for local variables, reorder code, vectorize loops, and inline function calls. These optimizations can obscure the relationship between the source code and the compiled object code. The **/Zo** switch tells the compiler to generate additional debugging information for local variables and inlined functions. Use it to see variables in the **Autos**, **Locals**, and **Watch** windows when you step through optimized code in the Visual Studio debugger. It also enables stack traces to show inlined functions in the WinDBG debugger. Debug builds that have disabled optimizations ([/Od](../../build/reference/od-disable-debug.md)) do not need the additional debugging information generated when **/Zo** is specified. Use the **/Zo** switch to debug Release configurations with optimization turned on. For more information on optimization switches, see [/O Options (Optimize Code)](../../build/reference/o-options-optimize-code.md). The **/Zo** option is enabled by default in Visual Studio 2015 when you specify debugging information with **/Zi** or **/Z7**. Specify **/Zo-** to explicitly disable this compiler option.  
  
 The **/Zo** switch is available in Visual Studio 2013 Update 3, and it replaces the previously undocumented **/d2Zi+** switch.  
  
### To set the /Zo compiler option in Visual Studio  
  
1.  Open the **Property Pages** dialog box for the project. For more information, see [Working with Project Properties](../../ide/working-with-project-properties.md).  
  
2.  Select the **Configuration Properties**, **C/C++** folder.  
  
3.  Select the **Command Line** property page.  
  
4.  Modify the **Additional Options** property to include `/Zo` and then choose **OK**.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.  
  
## See Also  
 [/O Options (Optimize Code)](../../build/reference/o-options-optimize-code.md)   
 [/Z7, /Zi, /ZI (Debug Information Format)](../../build/reference/z7-zi-zi-debug-information-format.md)   
 [Edit and Continue](/visualstudio/debugger/edit-and-continue)