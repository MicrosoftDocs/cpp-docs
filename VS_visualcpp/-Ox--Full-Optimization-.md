---
title: "-Ox (Full Optimization)"
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
H1: /Ox (Full Optimization)
ms.assetid: 3ad7c30b-c615-428c-b1d0-2e024f81c760
caps.latest.revision: 13
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
# -Ox (Full Optimization)
The **/Ox** compiler option produces code that favors execution speed over smaller size.  
  
## Syntax  
  
```  
/Ox  
```  
  
## Remarks  
 Specifying the **/Ox** compiler option is the same as using the following options:  
  
-   [/Ob (Inline Function Expansion)](../VS_visualcpp/-Ob--Inline-Function-Expansion-.md), where the option parameter is 2 (**/Ob2**)  
  
-   [/Og (Global Optimizations)](../VS_visualcpp/-Og--Global-Optimizations-.md)  
  
-   [/Oi (Generate Intrinsic Functions)](../VS_visualcpp/-Oi--Generate-Intrinsic-Functions-.md)  
  
-   [/Ot (Favor Fast Code)](../VS_visualcpp/-Os---Ot--Favor-Small-Code--Favor-Fast-Code-.md)  
  
-   [/Oy (Frame-Pointer Omission)](../VS_visualcpp/-Oy--Frame-Pointer-Omission-.md)  
  
 **/Ox** is mutually exclusive from:  
  
-   [/O1 (Minimize Size)](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md)  
  
-   [/O2 (Maximize Speed)](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md)  
  
-   [/Od (Disable (Debug))](../VS_visualcpp/-Od--Disable--Debug--.md)  
  
 The **/Ox** compiler option also enables the Named Return Value optimization, which eliminates the copy constructor and destructor of a stack based return value. For more information, see [/O1, /O2 (Minimize Size, Maximize Speed)](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md).  
  
 You can cancel out the **/Ox** compiler option if you specify **/Oxs**, which combines the **/Ox** compiler option with [/Os (Favor Small Code)](../VS_visualcpp/-Os---Ot--Favor-Small-Code--Favor-Fast-Code-.md). The combined options favor smaller code size.  
  
 In general, specify [/O2 (Maximize Speed)](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md) instead of **/Ox**, and [/O1 (Minimize Size)](../VS_visualcpp/-O1---O2--Minimize-Size--Maximize-Speed-.md) instead of **/Oxs**.  
  
### To set this compiler option in the Visual Studio development environment  
  
1.  Open the project's **Property Pages** dialog box. For details, see [How to: Open Project Property Pages](../Topic/How%20to:%20Open%20Project%20Property%20Pages.md).  
  
2.  Click the **C/C++** folder.  
  
3.  Click the **Optimization** property page.  
  
4.  Modify the **Optimization** property.  
  
### To set this compiler option programmatically  
  
-   See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.Optimization?qualifyHint=False>.  
  
## See Also  
 [/O Options (Optimize Code)](../VS_visualcpp/-O-Options--Optimize-Code-.md)   
 [Compiler Options](../VS_visualcpp/Compiler-Options.md)   
 [Setting Compiler Options](../VS_visualcpp/Setting-Compiler-Options.md)