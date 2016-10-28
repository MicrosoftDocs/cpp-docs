---
title: "-Ox (Full Optimization)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "VC.Project.VCCLCompilerTool.ToolOptimization"
  - "/ox"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Ox compiler option [C++]"
  - "fast code"
  - "/Ox compiler option [C++]"
  - "-Ox compiler option [C++]"
  - "full optimization"
ms.assetid: 3ad7c30b-c615-428c-b1d0-2e024f81c760
caps.latest.revision: 13
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
# /Ox (Full Optimization)
The **/Ox** compiler option produces code that favors execution speed over smaller size.  
  
## Syntax  
  
```  
/Ox  
```  
  
## Remarks  
 Specifying the **/Ox** compiler option is the same as using the following options:  
  
-   [/Ob (Inline Function Expansion)](../buildref/-ob--inline-function-expansion-.md), where the option parameter is 2 (**/Ob2**)  
  
-   [/Og (Global Optimizations)](../buildref/-og--global-optimizations-.md)  
  
-   [/Oi (Generate Intrinsic Functions)](../buildref/-oi--generate-intrinsic-functions-.md)  
  
-   [/Ot (Favor Fast Code)](../buildref/-os---ot--favor-small-code--favor-fast-code-.md)  
  
-   [/Oy (Frame-Pointer Omission)](../buildref/-oy--frame-pointer-omission-.md)  
  
 **/Ox** is mutually exclusive from:  
  
-   [/O1 (Minimize Size)](../buildref/-o1---o2--minimize-size--maximize-speed-.md)  
  
-   [/O2 (Maximize Speed)](../buildref/-o1---o2--minimize-size--maximize-speed-.md)  
  
-   [/Od (Disable (Debug))](../buildref/-od--disable--debug--.md)  
  
 The **/Ox** compiler option also enables the Named Return Value optimization, which eliminates the copy constructor and destructor of a stack based return value. For more information, see [/O1, /O2 (Minimize Size, Maximize Speed)](../buildref/-o1---o2--minimize-size--maximize-speed-.md).  
  
 You can cancel out the **/Ox** compiler option if you specify **/Oxs**, which combines the **/Ox** compiler option with [/Os (Favor Small Code)](../buildref/-os---ot--favor-small-code--favor-fast-code-.md). The combined options favor smaller code size.  
  
 In general, specify [/O2 (Maximize Speed)](../buildref/-o1---o2--minimize-size--maximize-speed-.md) instead of **/Ox**, and [/O1 (Minimize Size)](../buildref/-o1---o2--minimize-size--maximize-speed-.md) instead of **/Oxs**.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../notintoc/how-to--open-project-property-pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Optimization** property page.  
  
4.  Modify the **Optimization** property.  
  
### To set this compiler option programmatically  
  
-   See \<xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization*>.  
  
## See Also  
 [/O Options (Optimize Code)](../buildref/-o-options--optimize-code-.md)   
 [Compiler Options](../buildref/compiler-options.md)   
 [Setting Compiler Options](../buildref/setting-compiler-options.md)